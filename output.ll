; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [10 x i8] c"input.txt\00"
@str.1 = private constant [4 x i8] c"%d\0A\00"

declare i32 @printf(i8*, ...)

declare i8* @getFile(i8*)

declare i32* @malloc(i32)

declare i32 @atoi(i8*)

declare i32 @set(i32*, i32)

declare i32 @print(i32*)

declare void @free(i8*)

define i32 @main() {
entry:
  %num = alloca i8*
  %0 = call i8* @getFile(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @str, i32 0, i32 0))
  store i8* %0, i8** %num
  %1 = load i8*, i8** %num
  %2 = call i32 @atoi(i8* %1)
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.1, i32 0, i32 0), i32 %2)
  %x = alloca i32*
  %4 = call i32* @malloc(i32 8)
  store i32* %4, i32** %x
  %5 = load i32*, i32** %x
  %6 = call i32 @set(i32* %5, i32 6)
  %7 = load i32*, i32** %x
  %8 = call i32 @print(i32* %7)
  ret i32 0
}
