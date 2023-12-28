; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [15 x i8] c"Hello, World!\0A\00"
@str.1 = private constant [17 x i8] c"x is equal to y\0A\00"
@str.2 = private constant [20 x i8] c"x is not equal to y\00"
@str.3 = private constant [17 x i8] c"1 is equal to 1\0A\00"

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

declare i32 @factorial(i32)

declare i32 @isdigit(i32)

define i32 @main() {
entry:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @str, i32 0, i32 0))
  %x = alloca i32
  store i32 4, i32* %x
  %y = alloca i32
  store i32 5, i32* %y
  store i32 5, i32* %x
  %1 = load i32, i32* %y
  %2 = add i32 %1, 1
  store i32 %2, i32* %x
  %3 = load i32, i32* %y
  %4 = load i32, i32* %x
  %5 = icmp eq i32 %4, %3
  br i1 %5, label %6, label %8

6:                                                ; preds = %entry
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @str.1, i32 0, i32 0))
  br label %9

8:                                                ; preds = %entry
  br label %9

9:                                                ; preds = %8, %6
  %10 = load i32, i32* %y
  %11 = load i32, i32* %x
  %12 = icmp ne i32 %11, %10
  br i1 %12, label %13, label %15

13:                                               ; preds = %9
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @str.2, i32 0, i32 0))
  br i1 true, label %17, label %19

15:                                               ; preds = %9
  br label %16

16:                                               ; preds = %15, %20
  br label %end

17:                                               ; preds = %13
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @str.3, i32 0, i32 0))
  br label %end
  br label %20

19:                                               ; preds = %13
  br label %20

20:                                               ; preds = %19, %17
  br label %16

end:                                              ; preds = %16, %17
  %z = alloca float
  store float 0x3FF3333340000000, float* %z
  %21 = load i32, i32* %x
  %22 = bitcast i32 %21 to float
  store float %22, float* %z
  ret i32 0
}
