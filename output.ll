; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [7 x i8] c"Hello\0A\00"

declare i32 @printf(i8*, ...)

define i32 @main() {
entry:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str, i32 0, i32 0))
  ret i32 0
}
