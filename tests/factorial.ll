; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [4 x i8] c"%d\0A\00"

declare i32 @printf(i8*, ...)

declare i8* @malloc(i32)

declare i8* @gets(i8*)

declare i32 @atoi(i8*)

declare i32 @socket(i32, i32, i32)

define i32 @factorial(i32 %0) {
entry:
  %n = alloca i32
  store i32 %0, i32* %n
  %x = alloca i32
  %1 = load i32, i32* %n
  store i32 %1, i32* %x
  %i = alloca i32
  store i32 1, i32* %i
  br label %while

while:                                            ; preds = %endThen, %entry
  %2 = load i32, i32* %n
  %3 = load i32, i32* %i
  %4 = icmp eq i32 %3, %2
  br i1 %4, label %then, label %endThen

then:                                             ; preds = %while
  br label %end

endThen:                                          ; preds = %while
  %5 = load i32, i32* %i
  %6 = load i32, i32* %n
  %7 = sub i32 %6, %5
  %8 = load i32, i32* %x
  %9 = mul i32 %8, %7
  store i32 %9, i32* %x
  %10 = load i32, i32* %i
  %11 = add i32 %10, 1
  store i32 %11, i32* %i
  br label %while

end:                                              ; preds = %then
  %12 = load i32, i32* %x
  ret i32 %12
}

define i32 @main() {
entry:
  %n = alloca i8*
  %0 = call i8* @malloc(i32 100)
  store i8* %0, i8** %n
  %1 = load i8*, i8** %n
  %2 = call i8* @gets(i8* %1)
  %3 = load i8*, i8** %n
  %4 = call i32 @atoi(i8* %3)
  %5 = call i32 @factorial(i32 %4)
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str, i32 0, i32 0), i32 %5)
  ret i32 0
}
