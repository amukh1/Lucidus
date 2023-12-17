; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [8 x i8] c"1 == 1\0A\00"
@str.1 = private constant [8 x i8] c"2 == 2\0A\00"
@str.2 = private constant [6 x i8] c"frog\0A\00"

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
  br i1 true, label %0, label %3

0:                                                ; preds = %entry
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @str, i32 0, i32 0))
  br i1 true, label %4, label %7

2:                                                ; preds = %3
  br label %frog

3:                                                ; preds = %entry
  br label %2

4:                                                ; preds = %0
  br label %frog
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @str.1, i32 0, i32 0))

6:                                                ; preds = %7, %4
 br label %frog
7:                                                ; preds = %0
  br label %6

frog:                                             ; preds = %2, %4
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @str.2, i32 0, i32 0))
  ret i32 0
}
