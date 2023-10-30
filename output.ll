; ModuleID = 'amukh'
source_filename = "amukh"

%Car = type { i8*, i8*, i32, i32 }

@Car = external global %Car
@str = private constant [4 x i8] c"%d\0A\00"

declare i32 @printf(i8*, ...)

define i32 @main() {
entry:
  %x = alloca i32
  store i32 4, i32* %x
  %y = alloca i32*
  %0 = load i32, i32* %x
  %1 = alloca i32
  store i32 %0, i32* %1
  store i32* %1, i32** %y
  %z = alloca i32
  %2 = load i32*, i32** %y
  %3 = load i32, i32* %2
  store i32 %3, i32* %z
  %4 = load i32*, i32** %y
  %5 = load i32, i32* %4
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str, i32 0, i32 0), i32 %5)
  ret i32 0
}
