; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [4 x i8] c"%d\0A\00"
@str.1 = private constant [10 x i8] c"sum = %d\0A\00"
@str.2 = private constant [10 x i8] c"sum = %d\0A\00"

declare i32 @printf(i8*, ...)

declare i8* @malloc(i32)

declare i8* @gets(i8*)

declare i32 @atoi(i8*)

define i32 @partial(i32 %0, i32 %1) {
entry:
  %n = alloca i32
  store i32 %0, i32* %n
  %d = alloca i32
  store i32 %1, i32* %d
  %i = alloca i32
  store i32 0, i32* %i
  %sum = alloca i32
  store i32 0, i32* %sum
  br label %while

while:                                            ; preds = %endThen, %entry
  %2 = load i32, i32* %d
  %3 = load i32, i32* %n
  %4 = mul i32 %3, %2
  %5 = load i32, i32* %i
  %6 = icmp eq i32 %5, %4
  br i1 %6, label %then, label %endThen

then:                                             ; preds = %while
  br label %end

endThen:                                          ; preds = %while
  %7 = load i32, i32* %sum
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @str.1, i32 0, i32 0), i32 %7)
  %9 = load i32, i32* %d
  %10 = load i32, i32* %i
  %11 = add i32 %10, %9
  store i32 %11, i32* %i
  %12 = load i32, i32* %i
  %13 = load i32, i32* %sum
  %14 = add i32 %13, %12
  store i32 %14, i32* %sum
  br label %while

end:                                              ; preds = %then
  %15 = load i32, i32* %sum
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @str.2, i32 0, i32 0), i32 %15)
  %17 = load i32, i32* %sum
  ret i32 %17
}

define i32 @main() {
entry:
  %n = alloca i8*
  %0 = call i8* @malloc(i32 100)
  store i8* %0, i8** %n
  %d = alloca i8*
  %1 = call i8* @malloc(i32 100)
  store i8* %1, i8** %d
  %2 = load i8*, i8** %n
  %3 = call i8* @gets(i8* %2)
  %4 = load i8*, i8** %d
  %5 = call i8* @gets(i8* %4)
  %sum = alloca i32
  %6 = load i8*, i8** %n
  %7 = call i32 @atoi(i8* %6)
  %8 = load i8*, i8** %d
  %9 = call i32 @atoi(i8* %8)
  %10 = call i32 @partial(i32 %7, i32 %9)
  store i32 %10, i32* %sum
  %11 = load i32, i32* %sum
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str, i32 0, i32 0), i32 %11)
  ret i32 0
}
