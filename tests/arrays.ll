; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [4 x i8] c"%d\0A\00"
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
  %x = alloca i32*
  %0 = call i8* @malloc(i32 8)
  %1 = bitcast i8* %0 to i32*
  store i32* %1, i32** %x
  %2 = call i8* @malloc(i32 8)
  %3 = bitcast i8* %2 to i32*
  %4 = load i32*, i32** %x
  store i32 0, i32* %4
  %5 = load i32*, i32** %x
  %6 = ptrtoint i32* %5 to i32
  %7 = add i32 %6, 4
  %8 = inttoptr i32 %7 to i32*
  store i32 1, i32* %8
  %9 = load i32*, i32** %x
  %10 = load i32, i32* %9
  %11 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str, i32 0, i32 0), i32 %10)
  %12 = load i32*, i32** %x
  %13 = ptrtoint i32* %12 to i32
  %14 = add i32 %13, 4
  %15 = inttoptr i32 %14 to i32*
  %16 = load i32, i32* %15
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.1, i32 0, i32 0), i32 %16)
  ret i32 0
}
