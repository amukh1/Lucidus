; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [12 x i8] c"hello world\00"

declare i32 @printf(i8*, ...)

declare i8* @getFile(i8*)

declare i32* @malloc(i32)

declare i32 @atoi(i8*)

declare i32 @set(i32*, i32)

declare i32 @print(i32*)

declare void @free(i8*)

define i32 @main() {
entry:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @str, i32 0, i32 0))
  ret i32 0
}
