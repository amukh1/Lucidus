; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [7 x i8] c"equal!\00"
@str.1 = private constant [7 x i8] c"equal!\00"

declare i32 @printf(i8*, ...)

declare i32* @malloc(i32)

define i1 @loop(i32 %0) {
entry:
  %n = alloca i32
  store i32 %0, i32* %n
  %1 = load i32, i32* %n
  %2 = icmp eq i32 %1, 16
  br i1 %2, label %then, label %endThen

then:                                             ; preds = %entry
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str, i32 0, i32 0))
  br label %endThen

endThen:                                          ; preds = %then, %entry
  %4 = load i32, i32* %n
  %5 = icmp eq i32 %4, 16
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str.1, i32 0, i32 0))
  %7 = load i32, i32* %n
  %8 = icmp eq i32 %7, 16
  ret i1 %8
}

define i32 @main() {
entry:
  %0 = call i1 @loop(i32 16)
  ret i32 0
}
