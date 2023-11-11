; ModuleID = 'amukh'
source_filename = "amukh"

%S = type { i32 ()* }

@S = external global %S
@str = private constant [7 x i8] c"hello\0A\00"
@str.1 = private constant [7 x i8] c"hello\0A\00"

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

define i32 @useless() {
entry:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str, i32 0, i32 0))
  ret i32 0
}

define i32 @caller(i32 ()* %0) {
entry:
  %callee = alloca i32 ()*
  store i32 ()* %0, i32 ()** %callee
  ret i32 0
}

define i32 @main() {
entry:
  %x = alloca i32 ()*
  store i32 ()* @useless, i32 ()** %x
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str.1, i32 0, i32 0))
  %1 = load i32 ()*, i32 ()** %x
  %2 = call i32 %1()
  %s = alloca %S*
  %3 = call i8* @malloc(i32 1)
  %4 = bitcast i8* %3 to %S*
  store %S* %4, %S** %s
  %5 = call i8* @malloc(i32 1)
  %6 = bitcast i8* %5 to %S*
  %7 = load %S*, %S** %s
  %8 = getelementptr inbounds %S, %S* %7, i32 0, i32 0
  store i32 ()* @useless, i32 ()** %8
  %9 = load %S*, %S** %s
  %10 = getelementptr inbounds %S, %S* %9, i32 0, i32 0
  %11 = load i32 ()*, i32 ()** %10
  %12 = call i32 %11()
  ret i32 0
}
