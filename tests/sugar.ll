; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [14 x i8] c"i: %d, j: %d\0A\00"

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
  %i = alloca i32
  store i32 0, i32* %i
  br label %0

0:                                                ; preds = %10, %entry
  %j = alloca i32
  store i32 0, i32* %j
  br label %2

; 1:                                                ; preds = %10

1:                                                ; preds = %2, %0
  %3 = load i32, i32* %i
  %4 = load i32, i32* %j
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @str, i32 0, i32 0), i32 %3, i32 %4)
  %6 = load i32, i32* %j
  %7 = add i32 %6, 1
  store i32 %7, i32* %j
  br label %frog
  %8 = load i32, i32* %j
  %9 = icmp ne i32 %8, 4
  br i1 %9, label %2, label %10

10:                                               ; preds = %2
  %11 = load i32, i32* %i
  %12 = add i32 %11, 1
  store i32 %12, i32* %i
  %13 = load i32, i32* %i
  %14 = icmp ne i32 %13, 4
  br i1 %14, label %0, label %1

frog:                                             ; preds = %2
  ret i32 0
}
