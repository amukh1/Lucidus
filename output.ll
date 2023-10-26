; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [8 x i8] c"Hello\\n\00"

define i8* @out() {
entry:
  ret i8* getelementptr inbounds ([8 x i8], [8 x i8]* @str, i32 0, i32 0)
}
