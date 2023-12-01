; ModuleID = 'amukh'
source_filename = "amukh"

%Graph = type { i32, i32, i32** }

@Graph = external global %Graph
@str = private constant [8 x i8] c"x = %d\0A\00"
@str.1 = private constant [9 x i8] c"*y = %d\0A\00"
@str.2 = private constant [8 x i8] c"x = %d\0A\00"
@str.3 = private constant [15 x i8] c"G.nodesc = %d\0A\00"
@str.4 = private constant [8 x i8] c"v = %d\0A\00"

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
  %G = alloca %Graph*
  %11 = call i8* @malloc(i32 24)
  %12 = bitcast i8* %11 to %Graph*
  store %Graph* %12, %Graph** %G
  %13 = load %Graph*, %Graph** %G
  %14 = getelementptr inbounds %Graph, %Graph* %13, i32 0, i32 0
  store i32 5, i32* %14
  %15 = load %Graph*, %Graph** %G
  %16 = getelementptr inbounds %Graph, %Graph* %15, i32 0, i32 0
  %17 = load i32, i32* %16
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @str.3, i32 0, i32 0), i32 %17)
  %v1 = alloca i32*
  %19 = call i8* @malloc(i32 8)
  %20 = bitcast i8* %19 to i32*
  store i32* %20, i32** %v1
  %21 = load i32*, i32** %v1
  %22 = getelementptr i32, i32* %21, i32 0
  store i32 10, i32* %22
  %23 = load i32*, i32** %v1
  %24 = getelementptr i32, i32* %23, i32 0
  %25 = load i32, i32* %24
  %26 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @str.4, i32 0, i32 0), i32 %25)
  ret i32 0
}
