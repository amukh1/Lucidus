; ModuleID = 'amukh'
source_filename = "amukh"

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
  %0 = call i8* @malloc(i32 16)
  %1 = bitcast i8* %0 to i32*
  store i32* %1, i32** %x
  %2 = call i8* @malloc(i32 16)
  %3 = bitcast i8* %2 to i32*
  %y = alloca i32
  store i32 6, i32* %y
  store i32 5, i32* %y
  ret i32 0
}
