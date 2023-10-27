; ModuleID = 'amukh'
source_filename = "amukh"

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
