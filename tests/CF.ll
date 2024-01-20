; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [4 x i8] c"%d\0A\00"
@str.1 = private constant [8 x i8] c"x == y\0A\00"
@str.2 = private constant [10 x i8] c"in while\0A\00"
@str.3 = private constant [8 x i8] c"x == 4\0A\00"

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
  br label %9

7:                                                ; preds = %entry
  br label %8

8:                                                ; preds = %7, %13
  ret i32 0

9:                                                ; preds = %17, %5
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @str.2, i32 0, i32 0))
  %11 = load i32, i32* %x
  %12 = icmp eq i32 %11, 4
  br i1 %12, label %14, label %16

13:                                               ; preds = %17
  br label %8

14:                                               ; preds = %9
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @str.3, i32 0, i32 0))
  br label %17

16:                                               ; preds = %9
  br label %17

17:                                               ; preds = %16, %14
  br i1 true, label %9, label %13
}
