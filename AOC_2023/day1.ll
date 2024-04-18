; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [2 x i8] c"0\00"
@str.1 = private constant [2 x i8] c"1\00"
@str.2 = private constant [2 x i8] c"2\00"
@str.3 = private constant [2 x i8] c"3\00"
@str.4 = private constant [2 x i8] c"4\00"
@str.5 = private constant [2 x i8] c"5\00"
@str.6 = private constant [2 x i8] c"6\00"
@str.7 = private constant [2 x i8] c"7\00"
@str.8 = private constant [2 x i8] c"8\00"
@str.9 = private constant [2 x i8] c"9\00"
@str.10 = private constant [6 x i8] c"input\00"
@str.11 = private constant [2 x i8] c"r\00"
@str.12 = private constant [4 x i8] c"%d\0A\00"

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
  %2 = icmp eq i32 %1, 0
  br i1 %2, label %3, label %4

3:                                                ; preds = %entry
  ret i32 1

4:                                                ; preds = %entry
  %5 = load i32, i32* %n
  %6 = sub i32 %5, 1
  %7 = call i32 @factorial(i32 %6)
  %8 = load i32, i32* %n
  %9 = mul i32 %8, %7
  ret i32 %9
}

declare i32 @isdigit(i32)

define i32 @isNumber(i8 %0) {
entry:
  %str = alloca i8
  store i8 %0, i8* %str
  %1 = load i8, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @str, i32 0, i32 0)
  %2 = load i8, i8* %str
  %3 = icmp eq i8 %2, %1
  br i1 %3, label %4, label %5

4:                                                ; preds = %entry
  ret i32 1

5:                                                ; preds = %entry
  %6 = load i8, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @str.1, i32 0, i32 0)
  %7 = load i8, i8* %str
  %8 = icmp eq i8 %7, %6
  br i1 %8, label %9, label %10

9:                                                ; preds = %5
  ret i32 1

10:                                               ; preds = %5
  %11 = load i8, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @str.2, i32 0, i32 0)
  %12 = load i8, i8* %str
  %13 = icmp eq i8 %12, %11
  br i1 %13, label %14, label %15

14:                                               ; preds = %10
  ret i32 1

15:                                               ; preds = %10
  %16 = load i8, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @str.3, i32 0, i32 0)
  %17 = load i8, i8* %str
  %18 = icmp eq i8 %17, %16
  br i1 %18, label %19, label %20

19:                                               ; preds = %15
  ret i32 1

20:                                               ; preds = %15
  %21 = load i8, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @str.4, i32 0, i32 0)
  %22 = load i8, i8* %str
  %23 = icmp eq i8 %22, %21
  br i1 %23, label %24, label %25

24:                                               ; preds = %20
  ret i32 1

25:                                               ; preds = %20
  %26 = load i8, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @str.5, i32 0, i32 0)
  %27 = load i8, i8* %str
  %28 = icmp eq i8 %27, %26
  br i1 %28, label %29, label %30

29:                                               ; preds = %25
  ret i32 1

30:                                               ; preds = %25
  %31 = load i8, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @str.6, i32 0, i32 0)
  %32 = load i8, i8* %str
  %33 = icmp eq i8 %32, %31
  br i1 %33, label %34, label %35

34:                                               ; preds = %30
  ret i32 1

35:                                               ; preds = %30
  %36 = load i8, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @str.7, i32 0, i32 0)
  %37 = load i8, i8* %str
  %38 = icmp eq i8 %37, %36
  br i1 %38, label %39, label %40

39:                                               ; preds = %35
  ret i32 1

40:                                               ; preds = %35
  %41 = load i8, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @str.8, i32 0, i32 0)
  %42 = load i8, i8* %str
  %43 = icmp eq i8 %42, %41
  br i1 %43, label %44, label %45

44:                                               ; preds = %40
  ret i32 1

45:                                               ; preds = %40
  %46 = load i8, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @str.9, i32 0, i32 0)
  %47 = load i8, i8* %str
  %48 = icmp eq i8 %47, %46
  br i1 %48, label %49, label %50

49:                                               ; preds = %45
  ret i32 1

50:                                               ; preds = %45
  ret i32 0
}

define i32 @main() {
entry:
  %input = alloca i8**
  %0 = call i8* @malloc(i32 100)
  %1 = bitcast i8* %0 to i8**
  store i8** %1, i8*** %input
  %stream = alloca i8*
  %2 = call i8* @fopen(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @str.10, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @str.11, i32 0, i32 0))
  store i8* %2, i8** %stream
  %3 = load i8*, i8** %stream
  %4 = call i32 @fseek(i8* %3, i32 0, i32 0)
  %line = alloca i8*
  %5 = call i8* @malloc(i32 100)
  store i8* %5, i8** %line
  %i = alloca i32
  store i32 0, i32* %i
  %6 = load i8*, i8** %line
  %7 = load i8*, i8** %stream
  %8 = call i8* @fgets(i8* %6, i32 100, i8* %7)
  br label %9

9:                                                ; preds = %9, %entry
  %10 = load i8**, i8*** %input
  %11 = load i32, i32* %i
  %12 = getelementptr i8*, i8** %10, i32 %11
  %13 = call i8* @malloc(i32 100)
  store i8* %13, i8** %12
  %14 = load i8**, i8*** %input
  %15 = load i32, i32* %i
  %16 = getelementptr i8*, i8** %14, i32 %15
  %17 = load i8*, i8** %16
  %18 = load i8*, i8** %line
  %19 = call i8* @strcpy(i8* %17, i8* %18)
  %20 = load i32, i32* %i
  %21 = add i32 %20, 1
  store i32 %21, i32* %i
  %22 = load i8*, i8** %line
  %23 = load i8*, i8** %stream
  %24 = call i8* @fgets(i8* %22, i32 100, i8* %23)
  %25 = ptrtoint i8* %24 to i32
  %26 = icmp ne i32 %25, 0
  br i1 %26, label %9, label %27

27:                                               ; preds = %9
  %28 = load i8*, i8** %stream
  %29 = call i32 @fclose(i8* %28)
  %sum = alloca i32
  store i32 0, i32* %sum
  %j = alloca i32
  store i32 0, i32* %j
  %first = alloca i32
  store i32 -1, i32* %first
  %last = alloca i32
  store i32 -1, i32* %last
  br i1 true, label %30, label %31

30:                                               ; preds = %27
  br i1 true, label %37, label %38

31:                                               ; preds = %27
  %32 = load i32, i32* %last
  %33 = load i32, i32* %first
  %34 = add i32 %33, %32
  store i32 %34, i32* %sum
  %35 = load i32, i32* %sum
  %36 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.12, i32 0, i32 0), i32 %35)
  ret i32 0

37:                                               ; preds = %30
  br label %38

38:                                               ; preds = %37, %30
}
