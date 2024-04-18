; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [7 x i8] c"%d, %d\00"
@str.1 = private constant [13 x i8] c"%d mod %d = \00"
@str.2 = private constant [4 x i8] c"%d\0A\00"

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
  %n_ptr = alloca i32*
  %0 = call i8* @malloc(i32 4)
  %1 = bitcast i8* %0 to i32*
  store i32* %1, i32** %n_ptr
  %2 = call i8* @malloc(i32 4)
  %3 = bitcast i8* %2 to i32*
  %k_ptr = alloca i32*
  %4 = call i8* @malloc(i32 4)
  %5 = bitcast i8* %4 to i32*
  store i32* %5, i32** %k_ptr
  %6 = call i8* @malloc(i32 4)
  %7 = bitcast i8* %6 to i32*
  %8 = load i32*, i32** %k_ptr
  %9 = load i32*, i32** %n_ptr
  %10 = call i32 (i8*, ...) @scanf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str, i32 0, i32 0), i32* %8, i32* %9)
  %k = alloca i32
  %11 = load i32*, i32** %k_ptr
  %12 = load i32, i32* %11
  store i32 %12, i32* %k
  %13 = load i32*, i32** %k_ptr
  %14 = load i32, i32* %13
  %n = alloca i32
  %15 = load i32*, i32** %n_ptr
  %16 = load i32, i32* %15
  store i32 %16, i32* %n
  %17 = load i32*, i32** %n_ptr
  %18 = load i32, i32* %17
  %19 = load i32, i32* %k
  %20 = load i32, i32* %n
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @str.1, i32 0, i32 0), i32 %19, i32 %20)
  %r = alloca i32
  store i32 0, i32* %r
  %i = alloca i32
  %22 = load i32, i32* %k
  store i32 %22, i32* %i
  %23 = load i32, i32* %k
  br label %while

while:                                            ; preds = %37, %34, %entry
  %24 = load i32, i32* %i
  %25 = icmp eq i32 %24, 0
  br i1 %25, label %26, label %27

26:                                               ; preds = %while
  br label %end

27:                                               ; preds = %while
  %28 = load i32, i32* %n
  %29 = sub i32 %28, 1
  %30 = load i32, i32* %r
  %31 = icmp eq i32 %30, %29
  br i1 %31, label %34, label %37

end:                                              ; preds = %26
  %32 = load i32, i32* %r
  %33 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.2, i32 0, i32 0), i32 %32)
  ret i32 0

34:                                               ; preds = %27
  store i32 0, i32* %r
  %35 = load i32, i32* %i
  %36 = sub i32 %35, 1
  store i32 %36, i32* %i
  br label %while

37:                                               ; preds = %27
  %38 = load i32, i32* %r
  %39 = add i32 %38, 1
  store i32 %39, i32* %r
  %40 = load i32, i32* %i
  %41 = sub i32 %40, 1
  store i32 %41, i32* %i
  br label %while
}
