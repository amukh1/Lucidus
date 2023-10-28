; ModuleID = 'amukh'
source_filename = "amukh"

%Car = type { i8*, i32, i32 }

@Car = external global %Car
@str = private constant [13 x i8] c"Hello World\0A\00"
@str.1 = private constant [32 x i8] c"Programming my %dth 'compiler'\0A\00"
@str.2 = private constant [34 x i8] c"After ~%d years of programming..\0A\00"
@str.3 = private constant [4 x i8] c"%d\0A\00"

declare i32 @printf(i8*, ...)

define i32 @main() {
entry:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @str, i32 0, i32 0))
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @str.1, i32 0, i32 0), i32 3)
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @str.2, i32 0, i32 0), i32 4)
  %x = alloca i32
  store i32 0, i32* %x
  %y = alloca i32*
  %3 = load i32, i32* %x
  %4 = alloca i32
  store i32 %3, i32* %4
  store i32* %4, i32** %y
  %z = alloca i32
  %5 = load i32*, i32** %y
  %6 = load i32, i32* %5
  %7 = alloca i32
  store i32 %6, i32* %7
  %8 = load i32, i32* %7
  store i32 %8, i32* %z
  %abc = alloca %Car*
  %9 = load %Car*, %Car** %abc
  %10 = getelementptr inbounds %Car, %Car* %9, i32 0, i32 1
  store i32 4, i32* %10
  %11 = load %Car*, %Car** %abc
  %12 = getelementptr inbounds %Car, %Car* %11, i32 0, i32 1
  %13 = load i32, i32* %12
  %14 = alloca i32
  store i32 %13, i32* %14
  %15 = load i32, i32* %14
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.3, i32 0, i32 0), i32 %15)
  %17 = load i32, i32* %x
  ret i32 %17
}
