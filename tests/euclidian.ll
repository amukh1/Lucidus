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

declare i32 @factorial(i32)

declare i32 @isdigit(i32)

define i32 @main() {
entry:
  %a = alloca i32*
  %0 = call i8* @malloc(i32 4)
  %1 = bitcast i8* %0 to i32*
  store i32* %1, i32** %a
  %b = alloca i32*
  %2 = call i8* @malloc(i32 4)
  %3 = bitcast i8* %2 to i32*
  store i32* %3, i32** %b
  %4 = load i32*, i32** %a
  %5 = load i32*, i32** %b
  %6 = call i32 (i8*, ...) @scanf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @str, i32 0, i32 0), i32* %4, i32* %5)
  %rk0 = alloca i32
  %7 = load i32*, i32** %a
  %8 = load i32, i32* %7
  store i32 %8, i32* %rk0
  %rk1 = alloca i32
  %9 = load i32*, i32** %b
  %10 = load i32, i32* %9
  store i32 %10, i32* %rk1
  %rk = alloca i32
  br label %loop

loop:                                             ; preds = %20, %entry
  %11 = load i32, i32* %rk1
  %12 = load i32, i32* %rk0
  %13 = srem i32 %12, %11
  store i32 %13, i32* %rk
  %14 = load i32, i32* %rk1
  store i32 %14, i32* %rk0
  %15 = load i32, i32* %rk
  store i32 %15, i32* %rk1
  %16 = load i32, i32* %rk
  %17 = icmp eq i32 %16, 0
  br i1 %17, label %18, label %19

18:                                               ; preds = %loop
  br label %end

19:                                               ; preds = %loop
  br label %20

20:                                               ; preds = %19
  br label %loop

end:                                              ; preds = %18
  %21 = load i32, i32* %rk0
  %22 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.1, i32 0, i32 0), i32 %21)
  ret i32 0
}
