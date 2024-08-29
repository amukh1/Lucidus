; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [4 x i8] c"%d\0A\00"
@str.1 = private constant [8 x i8] c"x == y\0A\00"
@str.2 = private constant [8 x i8] c"x == 4\0A\00"
@str.3 = private constant [8 x i8] c"1 == 1\0A\00"
@str.4 = private constant [4 x i8] c"%d\0A\00"

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

lse:                                              ; preds = %entry
  br label %d

d:                                                ; preds = %lse
  ret i32 1
}

declare i32 @isdigit(i32)

define i32 @main() {
entry:
  %x = alloca i32
  store i32 4, i32* %x
  %y = alloca i32
  store i32 4, i32* %y
  %0 = load i32, i32* %x
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str, i32 0, i32 0), i32 %0)
  %2 = load i32, i32* %y
  %3 = load i32, i32* %x
  %4 = icmp eq i32 %3, %2
  br i1 %4, label %if, label %lse

if:                                               ; preds = %entry
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @str.1, i32 0, i32 0))
  br label %d

lse:                                              ; preds = %entry
  br label %d

d:                                                ; preds = %lse, %if
  %6 = load i32, i32* %x
  %7 = icmp eq i32 %6, 4
  br i1 %7, label %else, label %9

else:                                             ; preds = %d
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @str.2, i32 0, i32 0))
  br i1 true, label %e, label %d1

9:                                                ; preds = %d
  br label %hile

hile:                                             ; preds = %9, %13
  %10 = load i32, i32* %x
  %11 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.4, i32 0, i32 0), i32 %10)
  br label %end

e:                                                ; preds = %else
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @str.3, i32 0, i32 0))
  br label %e2

d1:                                               ; preds = %else
  br label %e2

e2:                                               ; preds = %d1, %e
  br label %end

end:                                              ; preds = %hile, %e2
  ret i32 0

13:                                               ; No predecessors!
  br label %hile

14:                                               ; No predecessors!
  unreachable
}
