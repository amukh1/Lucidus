; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [6 x i8] c"\22485\22\00"

declare i32 @printf(i8*, ...)

define i32 @add(i32 %0, i32 %1) {
entry:
  ret i32 0
}

define i32 @main() {
entry:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @str, i32 0, i32 0))
  ret i32 5
}
