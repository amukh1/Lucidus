; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [12 x i8] c"Starting..\0A\00"
@str.1 = private constant [18 x i8] c"Enter file name: \00"
@str.2 = private constant [17 x i8] c"Opening file %s\0A\00"
@str.3 = private constant [3 x i8] c"r+\00"
@str.4 = private constant [23 x i8] c"Error opening file %s\0A\00"
@str.5 = private constant [13 x i8] c"File opened\0A\00"
@str.6 = private constant [15 x i8] c"Hello, world!\0A\00"
@str.7 = private constant [3 x i8] c"%s\00"
@str.8 = private constant [17 x i8] c"Closing file %s\0A\00"
@str.9 = private constant [13 x i8] c"File closed\0A\00"

declare i32 @printf(i8*, ...)

declare i8* @malloc(i32)

declare i8* @free(i8*)

declare i32 @fprintf(i8*, i8*, ...)

declare i32 @fputs(i8*, i8*)

declare i8* @fgets(i8*, i32, i8*)

declare i8* @fopen(i8*, i8*)

declare i32 @fclose(i8*)

declare i32 @strlen(i8*)

declare i8* @strcpy(i8*, i8*)

declare i8* @gets(i8*)

declare i32 @atoi(i8*)

declare i32 @fseek(i8*, i32, i32)

define i32 @main() {
entry:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @str, i32 0, i32 0))
  %file = alloca i8*
  %1 = call i8* @malloc(i32 100)
  store i8* %1, i8** %file
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @str.1, i32 0, i32 0))
  %3 = load i8*, i8** %file
  %4 = call i8* @gets(i8* %3)
  %5 = load i8*, i8** %file
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @str.2, i32 0, i32 0), i8* %5)
  %stream = alloca i8*
  %7 = load i8*, i8** %file
  %8 = call i8* @fopen(i8* %7, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @str.3, i32 0, i32 0))
  store i8* %8, i8** %stream
  %9 = load i8*, i8** %stream
  %10 = ptrtoint i8* %9 to i32
  %11 = icmp eq i32 %10, 0
  br i1 %11, label %then, label %endThen

then:                                             ; preds = %entry
  %12 = load i8*, i8** %file
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @str.4, i32 0, i32 0), i8* %12)
  ret i32 1

endThen:                                          ; preds = %entry
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @str.5, i32 0, i32 0))
  %line = alloca i8*
  %15 = call i8* @malloc(i32 100)
  store i8* %15, i8** %line
  %16 = load i8*, i8** %stream
  %17 = call i32 @fseek(i8* %16, i32 0, i32 2)
  %18 = load i8*, i8** %stream
  %19 = call i32 @fputs(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @str.6, i32 0, i32 0), i8* %18)
  %20 = load i8*, i8** %stream
  %21 = call i32 @fseek(i8* %20, i32 0, i32 0)
  br label %while

while:                                            ; preds = %endThen2, %endThen
  %22 = load i8*, i8** %line
  %23 = load i8*, i8** %stream
  %24 = call i8* @fgets(i8* %22, i32 100, i8* %23)
  %25 = ptrtoint i8* %24 to i32
  %26 = icmp eq i32 %25, 0
  br i1 %26, label %then1, label %endThen2

then1:                                            ; preds = %while
  br label %end

endThen2:                                         ; preds = %while
  %27 = load i8*, i8** %line
  %28 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @str.7, i32 0, i32 0), i8* %27)
  br label %while

end:                                              ; preds = %then1
  %29 = load i8*, i8** %file
  %30 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @str.8, i32 0, i32 0), i8* %29)
  %31 = load i8*, i8** %stream
  %32 = call i32 @fclose(i8* %31)
  %33 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @str.9, i32 0, i32 0))
  ret i32 0
}
