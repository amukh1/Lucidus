; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [4 x i8] c"%d\0A\00"

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

define i32 @main() {
entry:
  %n_char = alloca i8*
  %0 = call i8* @malloc(i32 4)
  store i8* %0, i8** %n_char
  %1 = call i8* @malloc(i32 4)
  %2 = load i8*, i8** %n_char
  %3 = call i8* @gets(i8* %2)
  %n = alloca i32
  %4 = load i8*, i8** %n_char
  %5 = call i32 @atoi(i8* %4)
  store i32 %5, i32* %n
  %6 = load i8*, i8** %n_char
  %7 = call i32 @atoi(i8* %6)
  %r = alloca i32
  store i32 0, i32* %r
  %i = alloca i32
  %8 = load i32, i32* %n
  store i32 %8, i32* %i
  %9 = load i32, i32* %n
  br label %while

while:                                            ; preds = %then1, %entry
  %10 = load i32, i32* %i
  %11 = icmp eq i32 %10, 0
  br i1 %11, label %then, label %endThen

then:                                             ; preds = %while
  br label %end

endThen:                                          ; preds = %while
  %12 = load i32, i32* %n
  %13 = sub i32 %12, 1
  %14 = load i32, i32* %r
  %15 = icmp eq i32 %14, %13
  br i1 %15, label %then1, label %endThen2

end:                                              ; preds = %then
  %16 = load i32, i32* %r
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str, i32 0, i32 0), i32 %16)
  %18 = load i32, i32* %r
  ret i32 %18

then1:                                            ; preds = %endThen
  store i32 0, i32* %r
  %19 = load i32, i32* %i
  %20 = sub i32 %19, 1
  store i32 %20, i32* %i
  br label %while

endThen2:                                         ; preds = %endThen
  %21 = load i32, i32* %r
  %22 = add i32 %21, 1
  store i32 %22, i32* %r
  %23 = load i32, i32* %i
  %24 = sub i32 %23, 1
  store i32 %24, i32* %i
}
