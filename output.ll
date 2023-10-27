; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [3 x i8] c"%d\00"
@str.1 = private constant [13 x i8] c"Hello World\0A\00"
@str.2 = private constant [32 x i8] c"Programming my %dth 'compiler'\0A\00"
@str.3 = private constant [34 x i8] c"After ~%d years of programming..\0A\00"

declare i32 @printf(i8*, ...)

define i32 @foo(i32 %0) {
entry:
  %x = alloca i32
  store i32 %0, i32* %x
  %1 = load i32, i32* %x
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @str, i32 0, i32 0), i32 %1)
  ret i32 0
}

define i32 @bar(i32 %0) {
entry:
  %x = alloca i32
  store i32 %0, i32* %x
  %1 = load i32, i32* %x
  ret i32 %1
}

define i32 @main() {
entry:
  %x = alloca i32
  store i32 3, i32* %x
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @str.1, i32 0, i32 0))
  %1 = load i32, i32* %x
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @str.2, i32 0, i32 0), i32 %1)
  store i32 4, i32* %x
  %3 = load i32, i32* %x
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @str.3, i32 0, i32 0), i32 %3)
  store i32 0, i32* %x
  %5 = call i32 @bar(i32 6)
  %6 = call i32 @foo(i32 %5)
  store i32 %6, i32* %x
  %7 = load i32, i32* %x
  ret i32 %7
}
