; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [15 x i8] c"Hello, World!\0A\00"
@str.1 = private constant [17 x i8] c"x is equal to y\0A\00"
@str.2 = private constant [21 x i8] c"x is not equal to y\0A\00"
@str.3 = private constant [4 x i8] c"%d\0A\00"
@str.4 = private constant [6 x i8] c"%d | \00"
@str.5 = private constant [2 x i8] c"\0A\00"

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
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @str.2, i32 0, i32 0))
  br label %16

15:                                               ; preds = %9
  br label %16

16:                                               ; preds = %15, %13
  %z = alloca float
  store float 0x3FF3333340000000, float* %z
  %17 = load i32, i32* %x
  %18 = bitcast i32 %17 to float
  store float %18, float* %z
  %arr = alloca i32*
  %19 = call i8* @malloc(i32 40)
  %20 = bitcast i8* %19 to i32*
  store i32* %20, i32** %arr
  %21 = load i32*, i32** %arr
  %22 = getelementptr i32, i32* %21, i32 0
  store i32 1, i32* %22
  %23 = load i32*, i32** %arr
  %24 = getelementptr i32, i32* %23, i32 1
  store i32 2, i32* %24
  %i = alloca i32
  store i32 0, i32* %i
  br label %25

25:                                               ; preds = %25, %16
  %26 = load i32*, i32** %arr
  %27 = load i32, i32* %i
  %28 = getelementptr i32, i32* %26, i32 %27
  %29 = load i32, i32* %i
  store i32 %29, i32* %28
  %30 = load i32, i32* %i
  %31 = add i32 %30, 1
  store i32 %31, i32* %i
  %32 = load i32, i32* %i
  %33 = icmp slt i32 %32, 11
  br i1 %33, label %25, label %34

34:                                               ; preds = %25
  store i32 0, i32* %i
  br label %35

35:                                               ; preds = %35, %34
  %36 = load i32*, i32** %arr
  %37 = load i32, i32* %i
  %38 = getelementptr i32, i32* %36, i32 %37
  %39 = load i32, i32* %38
  %40 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.3, i32 0, i32 0), i32 %39)
  %41 = load i32, i32* %i
  %42 = add i32 %41, 1
  store i32 %42, i32* %i
  %43 = load i32, i32* %i
  %44 = icmp slt i32 %43, 11
  br i1 %44, label %35, label %45

45:                                               ; preds = %35
  %arr2 = alloca i32**
  %46 = call i8* @malloc(i32 80)
  %47 = bitcast i8* %46 to i32**
  store i32** %47, i32*** %arr2
  store i32 0, i32* %i
  %j = alloca i32
  store i32 0, i32* %j
  br label %48

48:                                               ; preds = %48, %45
  %49 = load i32**, i32*** %arr2
  %50 = load i32, i32* %i
  %51 = getelementptr i32*, i32** %49, i32 %50
  %52 = call i8* @malloc(i32 40)
  %53 = bitcast i8* %52 to i32*
  store i32* %53, i32** %51
  %54 = load i32, i32* %i
  %55 = add i32 %54, 1
  store i32 %55, i32* %i
  %56 = load i32, i32* %i
  %57 = icmp slt i32 %56, 10
  br i1 %57, label %48, label %58

58:                                               ; preds = %48
  store i32 0, i32* %i
  br label %59

59:                                               ; preds = %75, %58
  store i32 0, i32* %j
  br label %61

60:                                               ; preds = %75
  store i32 0, i32* %i
  br label %80

61:                                               ; preds = %61, %59
  %62 = load i32**, i32*** %arr2
  %63 = load i32, i32* %i
  %64 = getelementptr i32*, i32** %62, i32 %63
  %65 = load i32*, i32** %64
  %66 = load i32, i32* %j
  %67 = getelementptr i32, i32* %65, i32 %66
  %68 = load i32, i32* %j
  %69 = load i32, i32* %i
  %70 = add i32 %69, %68
  store i32 %70, i32* %67
  %71 = load i32, i32* %j
  %72 = add i32 %71, 1
  store i32 %72, i32* %j
  %73 = load i32, i32* %j
  %74 = icmp slt i32 %73, 10
  br i1 %74, label %61, label %75

75:                                               ; preds = %61
  %76 = load i32, i32* %i
  %77 = add i32 %76, 1
  store i32 %77, i32* %i
  %78 = load i32, i32* %i
  %79 = icmp slt i32 %78, 10
  br i1 %79, label %59, label %60

80:                                               ; preds = %95, %60
  store i32 0, i32* %j
  br label %82

81:                                               ; preds = %95
  ret i32 0

82:                                               ; preds = %82, %80
  %83 = load i32**, i32*** %arr2
  %84 = load i32, i32* %i
  %85 = getelementptr i32*, i32** %83, i32 %84
  %86 = load i32*, i32** %85
  %87 = load i32, i32* %j
  %88 = getelementptr i32, i32* %86, i32 %87
  %89 = load i32, i32* %88
  %90 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @str.4, i32 0, i32 0), i32 %89)
  %91 = load i32, i32* %j
  %92 = add i32 %91, 1
  store i32 %92, i32* %j
  %93 = load i32, i32* %j
  %94 = icmp slt i32 %93, 10
  br i1 %94, label %82, label %95

95:                                               ; preds = %82
  %96 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @str.5, i32 0, i32 0))
  %97 = load i32, i32* %i
  %98 = add i32 %97, 1
  store i32 %98, i32* %i
  %99 = load i32, i32* %i
  %100 = icmp slt i32 %99, 10
  br i1 %100, label %80, label %81
}
