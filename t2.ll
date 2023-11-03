; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [4 x i8] c"%d\0A\00"
@str.1 = private constant [4 x i8] c"%p\0A\00"
@str.2 = private constant [4 x i8] c"%p\0A\00"
@str.3 = private constant [4 x i8] c"%d\0A\00"
@str.4 = private constant [4 x i8] c"%d\0A\00"
@str.5 = private constant [4 x i8] c"%p\0A\00"
@str.6 = private constant [4 x i8] c"%d\0A\00"

declare i32 @printf(i8*, ...)

define i32 @main() {
entry:
  %x = alloca i32
  store i32 3, i32* %x
  %y = alloca i32*
  store i32* %x, i32** %y
  %0 = load i32*, i32** %y
  %1 = load i32, i32* %0
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str, i32 0, i32 0), i32 %1)
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.1, i32 0, i32 0), i32* %x)
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.2, i32 0, i32 0), i32* %x)
  store i32 4, i32* %x
  %5 = load i32*, i32** %y
  %6 = load i32, i32* %5
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.3, i32 0, i32 0), i32 %6)
  %8 = load i32, i32* %x
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.4, i32 0, i32 0), i32 %8)
  %10 = load i32*, i32** %y
  store i32 5, i32* %10
  %11 = load i32, i32* %x
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.5, i32 0, i32 0), i32 %11)
  %13 = load i32, i32* %x
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.6, i32 0, i32 0), i32 %13)
  ret i32 0
}
