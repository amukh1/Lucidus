; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [2 x i8] c"f\00"

define i8 @fun() {
entry:
  ret i8 ptrtoint ([2 x i8]* @str to i8)
}
