; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [10 x i8] c"sum = %d\0A\00"

declare i32 @printf(i8*, ...)

declare i32* @malloc(i32)

define i1 @loop(i32 %0) {
entry:
  %n = alloca i32
  store i32 %0, i32* %n
  %i = alloca i32
  store i32 0, i32* %i
  %sum = alloca i32
  store i32 0, i32* %sum
  br label %while

while:                                            ; preds = %endThen, %entry
  %1 = load i32, i32* %n
  %2 = load i32, i32* %i
  %3 = icmp sgt i32 %2, %1
  br i1 %3, label %then, label %endThen

then:                                             ; preds = %while
  br label %end
  br label %endThen

endThen:                                          ; preds = %then, %while
  %4 = load i32, i32* %sum
  %5 = load i32, i32* %i
  %6 = load i32, i32* %sum
  %7 = add i32 %6, %5
  store i32 %7, i32 %4
  %8 = load i32, i32* %i
  %9 = load i32, i32* %i
  %10 = add i32 %9, 1
  store i32 %10, i32 %8
  br label %while

end:                                              ; preds = %then
  %11 = load i32, i32* %sum
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @str, i32 0, i32 0), i32 %11)
  ret i32* null
}

define i32 @main() {
entry:
  %0 = call i1 @loop(i32 16)
  ret i32 0
}
