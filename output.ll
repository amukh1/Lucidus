; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [10 x i8] c"input.txt\00"
@str.1 = private constant [19 x i8] c"%d + %d + %d = %d\0A\00"

declare i32 @printf(i8*, ...)

declare i8* @getFile(i8*)

declare i32 @extractNum(i8*, i32)

define i32 @main() {
entry:
  %nums = alloca i8*
  %0 = call i8* @getFile(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @str, i32 0, i32 0))
  store i8* %0, i8** %nums
  %1 = load i8*, i8** %nums
  %2 = call i32 @extractNum(i8* %1, i32 0)
  %3 = load i8*, i8** %nums
  %4 = call i32 @extractNum(i8* %3, i32 1)
  %5 = load i8*, i8** %nums
  %6 = call i32 @extractNum(i8* %5, i32 2)
  %7 = load i8*, i8** %nums
  %8 = call i32 @extractNum(i8* %7, i32 2)
  %9 = load i8*, i8** %nums
  %10 = call i32 @extractNum(i8* %9, i32 1)
  %11 = load i8*, i8** %nums
  %12 = call i32 @extractNum(i8* %11, i32 0)
  %13 = add i32 %12, %10
  %14 = add i32 %13, %8
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @str.1, i32 0, i32 0), i32 %2, i32 %4, i32 %6, i32 %14)
  ret i32 0
}
