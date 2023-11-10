; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [4 x i8] c"%d\0A\00"

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

define i32 @main() {
entry:
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
  %r = alloca i32
  store i32 0, i32* %r
  %i = alloca i32
  %16 = load i32, i32* %k
  store i32 %16, i32* %i
  %17 = load i32, i32* %k
  br label %while

while:                                            ; preds = %32, %29, %entry
  %18 = load i32, i32* %i
  %19 = icmp eq i32 %18, 0
  br i1 %19, label %20, label %21

20:                                               ; preds = %while
  br label %end

21:                                               ; preds = %while
  %22 = load i32, i32* %n
  %23 = sub i32 %22, 1
  %24 = load i32, i32* %r
  %25 = icmp eq i32 %24, %23
  br i1 %25, label %29, label %32

end:                                              ; preds = %20
  %26 = load i32, i32* %r
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str, i32 0, i32 0), i32 %26)
  %28 = load i32, i32* %r
  ret i32 %28

29:                                               ; preds = %21
  store i32 0, i32* %r
  %30 = load i32, i32* %i
  %31 = sub i32 %30, 1
  store i32 %31, i32* %i
  br label %while

32:                                               ; preds = %21
  %33 = load i32, i32* %r
  %34 = add i32 %33, 1
  store i32 %34, i32* %r
  %35 = load i32, i32* %i
  %36 = sub i32 %35, 1
  store i32 %36, i32* %i
  br label %while
}
