; ModuleID = 'amukh'
source_filename = "amukh"

%Car = type {}

@Car = external global %Car
@str = private constant [13 x i8] c"%d mod %d = \00"
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

define i32 @frog() {
entry:
  ret i32 42
}

define i32 @main() {
entry:
  %x = alloca %Car*
  %n_char = alloca i8*
  %0 = call i8* @malloc(i32 4)
  store i8* %0, i8** %n_char
  %1 = call i8* @malloc(i32 4)
  %k_char = alloca i8*
  %2 = call i8* @malloc(i32 4)
  store i8* %2, i8** %k_char
  %3 = call i8* @malloc(i32 4)
  %4 = load i8*, i8** %k_char
  %5 = call i8* @gets(i8* %4)
  %6 = load i8*, i8** %n_char
  %7 = call i8* @gets(i8* %6)
  %n = alloca i32
  %8 = load i8*, i8** %n_char
  %9 = call i32 @atoi(i8* %8)
  store i32 %9, i32* %n
  %10 = load i8*, i8** %n_char
  %11 = call i32 @atoi(i8* %10)
  %k = alloca i32
  %12 = load i8*, i8** %k_char
  %13 = call i32 @atoi(i8* %12)
  store i32 %13, i32* %k
  %14 = load i8*, i8** %k_char
  %15 = call i32 @atoi(i8* %14)
  %16 = load i32, i32* %k
  %17 = load i32, i32* %n
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @str, i32 0, i32 0), i32 %16, i32 %17)
  %r = alloca i32
  store i32 0, i32* %r
  %i = alloca i32
  %19 = load i32, i32* %k
  store i32 %19, i32* %i
  %20 = load i32, i32* %k
  br label %while

while:                                            ; preds = %34, %31, %entry
  %21 = load i32, i32* %i
  %22 = icmp eq i32 %21, 0
  br i1 %22, label %23, label %24

23:                                               ; preds = %while
  br label %end

24:                                               ; preds = %while
  %25 = load i32, i32* %n
  %26 = sub i32 %25, 1
  %27 = load i32, i32* %r
  %28 = icmp eq i32 %27, %26
  br i1 %28, label %31, label %34

end:                                              ; preds = %23
  %29 = load i32, i32* %r
  %30 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.1, i32 0, i32 0), i32 %29)
  ret i32 0

31:                                               ; preds = %24
  store i32 0, i32* %r
  %32 = load i32, i32* %i
  %33 = sub i32 %32, 1
  store i32 %33, i32* %i
  br label %while

34:                                               ; preds = %24
  %35 = load i32, i32* %r
  %36 = add i32 %35, 1
  store i32 %36, i32* %r
  %37 = load i32, i32* %i
  %38 = sub i32 %37, 1
  store i32 %38, i32* %i
  br label %while
}
