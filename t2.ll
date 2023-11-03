; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [4 x i8] c"%d\0A\00"
@str.1 = private constant [4 x i8] c"%d\0A\00"

declare i32 @printf(i8*, ...)

declare i32* @malloc(i32)

define i32 @main() {
entry:
  %x = alloca i32*
  %0 = call i32* @malloc(i32 100)
  store i32* %0, i32** %x
  %1 = load i32*, i32** %x
  store i32 5, i32* %1
  %2 = load i32*, i32** %x
  %3 = ptrtoint i32* %2 to i32
  %4 = add i32 %3, 4
  %5 = inttoptr i32 %4 to i32*
  store i32 10, i32* %5
  %6 = load i32*, i32** %x
  %7 = load i32, i32* %6
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str, i32 0, i32 0), i32 %7)
  %9 = load i32*, i32** %x
  %10 = ptrtoint i32* %9 to i32
  %11 = add i32 %10, 4
  %12 = inttoptr i32 %11 to i32*
  %13 = load i32, i32* %12
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.1, i32 0, i32 0), i32 %13)
  ret i32 0
}
