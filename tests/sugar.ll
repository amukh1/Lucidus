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

declare i8* @strcat(i8*, i8*)

define i32 @factorial(i32 %0) {
entry:
  %n = alloca i32
  store i32 %0, i32* %n
  %1 = load i32, i32* %n
  %2 = icmp ne i32 %1, 0
  br i1 %2, label %if, label %lse

if:                                               ; preds = %entry
  %3 = load i32, i32* %n
  %4 = sub i32 %3, 1
  %5 = call i32 @factorial(i32 %4)
  %6 = load i32, i32* %n
  %7 = mul i32 %6, %5
  ret i32 %7
  br label %d

lse:                                              ; preds = %entry
  br label %d

d:                                                ; preds = %lse, %if
  ret i32 1
}

declare i32 @isdigit(i32)

define i32 @main() {
entry:
  br i1 true, label %if, label %lse

if:                                               ; preds = %entry
  ret i32 1
  br label %d

lse:                                              ; preds = %entry
  br label %d

d:                                                ; preds = %lse, %if
  ret i32 2
  ret i32 0
}
