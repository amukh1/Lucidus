; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [6 x i8] c"loop\0A\00"

declare i32 @printf(i8*, ...)

declare i32* @malloc(i32)

define i32* @loop(i32 %0) {
entry:
  %n = alloca i32
  store i32 %0, i32* %n
  br label %h

h:                                                ; preds = %h, %entry
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @str, i32 0, i32 0))

  %x = alloca i32
  store i32 4, i32* %x
  %y = alloca i32*
  store i32* %x, i32** %y
  %2 = load i32*, i32** %y
  ret i32* %2
}

define i32 @main() {
entry:
  %0 = call i32* @loop(i32 16)
  ret i32 0
}
