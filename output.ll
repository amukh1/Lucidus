; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [13 x i8] c"Hello World\0A\00"
@str.1 = private constant [32 x i8] c"Programming my %dth 'compiler'\0A\00"
@str.2 = private constant [34 x i8] c"After ~%d years of programming..\0A\00"

declare i32 @printf(i8*, ...)

define i32 @add(i32 %0, i32 %1) {
entry:
  %a = alloca i32
  store i32 %0, i32* %a
  %b = alloca i32
  store i32 %1, i32* %b
  %2 = load i32, i32* %b
  %3 = load i32, i32* %a
  %4 = add i32 %3, %2
  ret i32 %4
}

define i32 @main() {
entry:
  %x = alloca i32
  %0 = call i32 @add(i32 1, i32 2)
  store i32 %0, i32* %x
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @str, i32 0, i32 0))
  %2 = load i32, i32* %x
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @str.1, i32 0, i32 0), i32 %2)
  store i32 4, i32* %x
  %4 = load i32, i32* %x
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @str.2, i32 0, i32 0), i32 %4)
  store i32 0, i32* %x
  %6 = load i32, i32* %x
  ret i32 %6
}
