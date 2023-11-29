; ModuleID = 'amukh'
source_filename = "amukh"

%Graph = type { i32, i32, i32** }

@Graph = external global %Graph
@str = private constant [8 x i8] c"x = %d\0A\00"
@str.1 = private constant [9 x i8] c"*y = %d\0A\00"
@str.2 = private constant [8 x i8] c"x = %d\0A\00"

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

define i32 @factorial(i32 %0) {
entry:
  %n = alloca i32
  store i32 %0, i32* %n
  %1 = load i32, i32* %n
  %2 = icmp eq i32 %1, 0
  br i1 %2, label %3, label %4

3:                                                ; preds = %entry
  ret i32 1

4:                                                ; preds = %entry
  %5 = load i32, i32* %n
  %6 = sub i32 %5, 1
  %7 = call i32 @factorial(i32 %6)
  %8 = load i32, i32* %n
  %9 = mul i32 %8, %7
  ret i32 %9
}

define i32 @main() {
entry:
  %x = alloca i32
  store i32 5, i32* %x
  %y = alloca i32*
  store i32* %x, i32** %y
  %0 = load i32, i32* %x
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @str, i32 0, i32 0), i32 %0)
  %2 = load i32*, i32** %y
  %3 = load i32, i32* %2
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([9 x i8], [9 x i8]* @str.1, i32 0, i32 0), i32 %3)
  %5 = load i32*, i32** %y
  store i32 10, i32* %5
  %6 = load i32, i32* %x
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @str.2, i32 0, i32 0), i32 %6)
  %v = alloca i32*
  %8 = call i8* @malloc(i32 8)
  %9 = bitcast i8* %8 to i32*
  store i32* %9, i32** %v
  %10 = load i32*, i32** %v
  store i32 10, i32* %10
  %11 = getelementptr i32*, i32** %v, i32 1
  %12 = load i32*, i32** %11
  store i32 20, i32* %12
  ret i32 0
}
