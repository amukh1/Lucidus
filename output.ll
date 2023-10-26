; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [13 x i8] c"Hello World\0A\00"
@str.1 = private constant [21 x i8] c"Programming my %dth \00"
@str.2 = private constant [17 x i8] c", 3)\0A    printf(\00"

declare i32 @printf(i8*, ...)

define i32 @main() {
entry:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @str, i32 0, i32 0))
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @str.1, i32 0, i32 0))
}
