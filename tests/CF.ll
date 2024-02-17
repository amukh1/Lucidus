; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [4 x i8] c"%d\0A\00"
@str.1 = private constant [8 x i8] c"x == y\0A\00"
@str.2 = private constant [8 x i8] c"x == 4\0A\00"
@str.3 = private constant [8 x i8] c"1 == 1\0A\00"
@str.4 = private constant [4 x i8] c"%d\0A\00"

declare i32 @printf(i8*, ...)

declare i8* @malloc(i32)

declare i8* @free(i8*)

declare i32 @fprintf(i8*, i8*, ...)

declare i32 @fputs(i8*, i8*)

declare i8* @fgets(i8*, i32, i8*)

declare i32 @fgetc(i8*)

declare i8* @fopen(i8*, i8*)

declare i32 @fclose(i8*)

declare i32 @strlen(i8*)

declare i8* @strcpy(i8*, i8*)

declare i8* @gets(i8*)

declare i32 @atoi(i8*)

declare i32 @fseek(i8*, i32, i32)

declare i32 @scanf(i8*, ...)

declare i8* @strcat(i8*, i8*)

declare i32 @factorial(i32)

declare i32 @isdigit(i32)

define i32 @main() {
entry:
  %x = alloca i32
  store i32 4, i32* %x
  %y = alloca i32
  store i32 4, i32* %y
  %0 = load i32, i32* %x
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str, i32 0, i32 0), i32 %0)
  %2 = load i32, i32* %y
  %3 = load i32, i32* %x
  %4 = icmp eq i32 %3, %2
  br i1 %4, label %5, label %7

5:                                                ; preds = %entry
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @str.1, i32 0, i32 0))
  br label %8

7:                                                ; preds = %entry
  br label %8

8:                                                ; preds = %7, %5
  %9 = load i32, i32* %x
  %10 = icmp eq i32 %9, 4
  br i1 %10, label %11, label %13

11:                                               ; preds = %8
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @str.2, i32 0, i32 0))
  br i1 true, label %17, label %19

13:                                               ; preds = %8
  br label %14

14:                                               ; preds = %13, %21
  %15 = load i32, i32* %x
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.4, i32 0, i32 0), i32 %15)
  br label %end

17:                                               ; preds = %11
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @str.3, i32 0, i32 0))
  br label %20

19:                                               ; preds = %11
  br label %20

20:                                               ; preds = %19, %17
  br label %end

end:                                              ; preds = %14, %20
  ret i32 0

21:                                               ; No predecessors!
  br label %14

22:                                               ; No predecessors!
}
