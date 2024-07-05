; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [8 x i8] c"(%d,%d)\00"
@str.1 = private constant [4 x i8] c"%d\0A\00"

declare i32 @printf(i8*, ...)

declare i8* @malloc(i32)

declare i8* @free(i8*)

declare i32 @fprintf(i8*, i8*, ...)

declare i32 @fputs(i8*, i8*)

declare i8* @fgets(i8*, i32, i8*)

declare i32 @fgetc(i8*)

declare i8* @fopen(i8*, i8*)

declare i32 @fclose(i8*)

declare i32 @strlen(i8*)

declare i8* @strcpy(i8*, i8*)

declare i8* @gets(i8*)

declare i32 @atoi(i8*)

declare i32 @fseek(i8*, i32, i32)

declare i32 @scanf(i8*, ...)

declare i8* @strcat(i8*, i8*)

define i32 @factorial(i32 %0) {
entry:
  %n = alloca i32, align 4
  store i32 %0, i32* %n, align 4
  %1 = load i32, i32* %n, align 4
  %2 = icmp ne i32 %1, 0
  br i1 %2, label %if, label %lse

if:                                               ; preds = %entry
  %3 = load i32, i32* %n, align 4
  %4 = sub i32 %3, 1
  %5 = call i32 @factorial(i32 %4)
  %6 = load i32, i32* %n, align 4
  %7 = mul i32 %6, %5
  ret i32 %7

lse:                                              ; preds = %entry
  br label %d

d:                                                ; preds = %lse
  ret i32 1
}

declare i32 @isdigit(i32)

define i32 @main() {
entry:
  %a = alloca i32*, align 8
  %0 = call i8* @malloc(i32 4)
  %1 = bitcast i8* %0 to i32*
  store i32* %1, i32** %a, align 8
  %b = alloca i32*, align 8
  %2 = call i8* @malloc(i32 4)
  %3 = bitcast i8* %2 to i32*
  store i32* %3, i32** %b, align 8
  %4 = load i32*, i32** %a, align 8
  %5 = load i32*, i32** %b, align 8
  %6 = call i32 (i8*, ...) @scanf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @str, i32 0, i32 0), i32* %4, i32* %5)
  %rk0 = alloca i32, align 4
  %7 = load i32*, i32** %a, align 8
  %8 = load i32, i32* %7, align 4
  store i32 %8, i32* %rk0, align 4
  %rk1 = alloca i32, align 4
  %9 = load i32*, i32** %b, align 8
  %10 = load i32, i32* %9, align 4
  store i32 %10, i32* %rk1, align 4
  %rk = alloca i32, align 4
  br label %loop

loop:                                             ; preds = %d, %entry
  %11 = load i32, i32* %rk1, align 4
  %12 = load i32, i32* %rk0, align 4
  %13 = srem i32 %12, %11
  store i32 %13, i32* %rk, align 4
  %14 = load i32, i32* %rk1, align 4
  store i32 %14, i32* %rk0, align 4
  %15 = load i32, i32* %rk, align 4
  store i32 %15, i32* %rk1, align 4
  %16 = load i32, i32* %rk, align 4
  %17 = icmp eq i32 %16, 0
  br i1 %17, label %if, label %lse

18:                                               ; No predecessors!
  unreachable

if:                                               ; preds = %loop
  br label %end

lse:                                              ; preds = %loop
  br label %d

d:                                                ; preds = %lse, %21
  br label %loop

end:                                              ; preds = %if
  %19 = load i32, i32* %rk0, align 4
  %20 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.1, i32 0, i32 0), i32 %19)
  ret i32 0

21:                                               ; No predecessors!
  br label %d

22:                                               ; No predecessors!
  unreachable
}
