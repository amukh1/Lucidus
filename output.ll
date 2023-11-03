; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [4 x i8] c"%d\0A\00"

declare i32 @printf(i8*, ...)

define i32 @main() {
entry:
  %x = alloca i32
  store i32 3, i32* %x
  %0 = alloca i32*
  store i32* %x, i32** %0
  %1 = load i32*, i32** %0
  store i32 4, i32* %1
  %2 = load i32, i32* %x
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str, i32 0, i32 0), i32 %2)
  ret i32 0
}
