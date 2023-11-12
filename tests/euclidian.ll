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

define i32 @main() {
entry:
  %a = alloca i32*
  %0 = call i8* @malloc(i32 4)
  %1 = bitcast i8* %0 to i32*
  store i32* %1, i32** %a
  %2 = call i8* @malloc(i32 4)
  %3 = bitcast i8* %2 to i32*
  %b = alloca i32*
  %4 = call i8* @malloc(i32 4)
  %5 = bitcast i8* %4 to i32*
  store i32* %5, i32** %b
  %6 = call i8* @malloc(i32 4)
  %7 = bitcast i8* %6 to i32*
  %8 = load i32*, i32** %a
  %9 = load i32*, i32** %b
  %10 = call i32 (i8*, ...) @scanf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @str, i32 0, i32 0), i32* %8, i32* %9)
  %rk0 = alloca i32
  %11 = load i32*, i32** %a
  %12 = load i32, i32* %11
  store i32 %12, i32* %rk0
  %13 = load i32*, i32** %a
  %14 = load i32, i32* %13
  %rk1 = alloca i32
  %15 = load i32*, i32** %b
  %16 = load i32, i32* %15
  store i32 %16, i32* %rk1
  %17 = load i32*, i32** %b
  %18 = load i32, i32* %17
  %rk = alloca i32
  br label %while

while:                                            ; preds = %27, %entry
  %19 = load i32, i32* %rk1
  %20 = load i32, i32* %rk0
  %21 = srem i32 %20, %19
  store i32 %21, i32* %rk
  %22 = load i32, i32* %rk1
  store i32 %22, i32* %rk0
  %23 = load i32, i32* %rk
  store i32 %23, i32* %rk1
  %24 = load i32, i32* %rk
  %25 = icmp eq i32 %24, 0
  br i1 %25, label %26, label %27

26:                                               ; preds = %while
  br label %end

27:                                               ; preds = %while
  br label %while

end:                                              ; preds = %26
  %28 = load i32, i32* %rk0
  %29 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.1, i32 0, i32 0), i32 %28)
  ret i32 0
}
