; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [13 x i8] c"hello world\0A\00"
@str.1 = private constant [2 x i8] c"\0A\00"
@str.2 = private constant [2 x i8] c"\0A\00"
@str.3 = private constant [11 x i8] c"output.txt\00"

declare i32 @printf(i8*, ...)

declare i8* @getFile(i8*)

declare i32* @malloc(i32)

declare i32 @atoi(i8*)

declare i32 @set(i32*, i32, i32)

declare i32 @get(i32*, i32)

declare i32 @print(i32*)

declare i32 @outFile(i8*, i8*)

declare void @free(i8*)

declare i8* @to_string(i32)

declare i8* @concat(i8*, i8*)

define i32 @main() {
entry:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @str, i32 0, i32 0))
  %x = alloca i32*
  %1 = call i32* @malloc(i32 24)
  store i32* %1, i32** %x
  %2 = load i32*, i32** %x
  %3 = call i32 @set(i32* %2, i32 1, i32 0)
  %4 = load i32*, i32** %x
  %5 = call i32 @set(i32* %4, i32 2, i32 1)
  %6 = load i32*, i32** %x
  %7 = call i32 @set(i32* %6, i32 3, i32 2)
  %out = alloca i8*
  %8 = load i32*, i32** %x
  %9 = call i32 @get(i32* %8, i32 0)
  %10 = call i8* @to_string(i32 %9)
  store i8* %10, i8** %out
  %11 = load i8*, i8** %out
  %12 = call i8* @concat(i8* %11, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @str.1, i32 0, i32 0))
  store i8* %12, i8** %out
  %13 = load i8*, i8** %out
  %14 = load i32*, i32** %x
  %15 = call i32 @get(i32* %14, i32 1)
  %16 = call i8* @to_string(i32 %15)
  %17 = call i8* @concat(i8* %13, i8* %16)
  store i8* %17, i8** %out
  %18 = load i8*, i8** %out
  %19 = call i8* @concat(i8* %18, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @str.2, i32 0, i32 0))
  store i8* %19, i8** %out
  %20 = load i8*, i8** %out
  %21 = load i32*, i32** %x
  %22 = call i32 @get(i32* %21, i32 2)
  %23 = call i8* @to_string(i32 %22)
  %24 = call i8* @concat(i8* %20, i8* %23)
  store i8* %24, i8** %out
  %25 = load i8*, i8** %out
  %26 = call i32 @outFile(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @str.3, i32 0, i32 0), i8* %25)
  ret i32 0
}
