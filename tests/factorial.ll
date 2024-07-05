; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [4 x i8] c"%d\0A\00"

declare i32 @printf(i8*, ...)

declare i8* @malloc(i32)

declare i8* @gets(i8*)

declare i32 @atoi(i8*)

define i32 @factorial(i32 %0) {
entry:
  %n = alloca i32, align 4
  store i32 %0, i32* %n, align 4
  %x = alloca i32, align 4
  %1 = load i32, i32* %n, align 4
  store i32 %1, i32* %x, align 4
  %i = alloca i32, align 4
  store i32 1, i32* %i, align 4
  br label %wh

wh:                                               ; preds = %d, %entry
  %2 = load i32, i32* %n, align 4
  %3 = load i32, i32* %i, align 4
  %4 = icmp eq i32 %3, %2
  br i1 %4, label %if, label %lse

5:                                                ; No predecessors!
  unreachable

if:                                               ; preds = %wh
  br label %end

lse:                                              ; preds = %wh
  br label %d

d:                                                ; preds = %lse, %14
  %6 = load i32, i32* %i, align 4
  %7 = load i32, i32* %n, align 4
  %8 = sub i32 %7, %6
  %9 = load i32, i32* %x, align 4
  %10 = mul i32 %9, %8
  store i32 %10, i32* %x, align 4
  %11 = load i32, i32* %i, align 4
  %12 = add i32 %11, 1
  store i32 %12, i32* %i, align 4
  br label %wh

end:                                              ; preds = %if
  %13 = load i32, i32* %x, align 4
  ret i32 %13

14:                                               ; No predecessors!
  br label %d

15:                                               ; No predecessors!
  unreachable
}

define i32 @main() {
entry:
  %n = alloca i8*, align 8
  %0 = call i8* @malloc(i32 100)
  store i8* %0, i8** %n, align 8
  %1 = load i8*, i8** %n, align 8
  %2 = call i8* @gets(i8* %1)
  %3 = load i8*, i8** %n, align 8
  %4 = call i32 @atoi(i8* %3)
  %5 = call i32 @factorial(i32 %4)
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str, i32 0, i32 0), i32 %5)
  ret i32 0
}
