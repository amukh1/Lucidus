; ModuleID = 'amukh'
source_filename = "amukh"

declare i32 @printf(i8*, ...)

declare i32 @ptrtoint(i32*)

define i32 @main() {
entry:
  %v = alloca i32
  store i32 2, i32* %v
  %v_p = alloca i32*
  %0 = load i32, i32* %v
  %1 = alloca i32
  store i32 %0, i32* %1
  store i32* %1, i32** %v_p
  %2 = load i32*, i32** %v_p
  %3 = call i32 @ptrtoint(i32* %2)
  %4 = add i32 %3, 4
  %5 = alloca i32
  store i32 %4, i32* %5
  store i32 3, i32* %5
  %6 = load i32*, i32** %v_p
  %7 = call i32 @ptrtoint(i32* %6)
  %8 = add i32 %7, 8
  %9 = alloca i32
  store i32 %8, i32* %9
  store i32 4, i32* %9
  ret i32 0
}
