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
  %5 = ptrtoint i32* %4 to i32
  %6 = add i32 %5, 4
  %7 = inttoptr i32 %6 to i32*
  store i32 1, i32* %7
  %8 = load i32*, i32** %x
  %9 = load i32, i32* %8
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str, i32 0, i32 0), i32 %9)
  %11 = load i32*, i32** %x
  %12 = ptrtoint i32* %11 to i32
  %13 = add i32 %12, 4
  %14 = inttoptr i32 %13 to i32*
  %15 = load i32, i32* %14
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.1, i32 0, i32 0), i32 %15)
  ret i32 0
}
