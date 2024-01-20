; ModuleID = 'amukh'
source_filename = "amukh"

%Vector_int = type { i32*, i32 }
%Vector_char = type { i32*, i32 }
%Vector_string = type { i32*, i32 }
%Graph = type { i32, i32, i32** }
%Permutation = type { i32*, i32 }

@Vector_int = external global %Vector_int
@Vector_char = external global %Vector_char
@Vector_string = external global %Vector_string
@Graph = external global %Graph
@str = private constant [10 x i8] c"%d -- %d\0A\00"
@Permutation = external global %Permutation
@str.1 = private constant [2 x i8] c"(\00"
@str.2 = private constant [4 x i8] c"%d \00"
@str.3 = private constant [3 x i8] c")\0A\00"
@str.4 = private constant [15 x i8] c"Hello, World!\0A\00"
@str.5 = private constant [17 x i8] c"x is equal to y\0A\00"
@str.6 = private constant [21 x i8] c"x is not equal to y\0A\00"
@str.7 = private constant [4 x i8] c"%d\0A\00"
@str.8 = private constant [6 x i8] c"%d | \00"
@str.9 = private constant [2 x i8] c"\0A\00"

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

define i32** @edgeList(%Graph* %0) {
entry:
  %G = alloca %Graph*
  store %Graph* %0, %Graph** %G
  %1 = load %Graph*, %Graph** %G
  %2 = getelementptr inbounds %Graph, %Graph* %1, i32 0, i32 2
  %3 = load i32**, i32*** %2
  ret i32** %3
}

define i32 @printEdgeList(%Graph* %0) {
entry:
  %G = alloca %Graph*
  store %Graph* %0, %Graph** %G
  %i = alloca i32
  store i32 0, i32* %i
  br label %1

1:                                                ; preds = %1, %entry
  %2 = load %Graph*, %Graph** %G
  %3 = load i32, i32* %i
  %4 = call i32* @getEdgeTuple(%Graph* %2, i32 %3, i32 0)
  %5 = load i32, i32* %4
  %6 = load %Graph*, %Graph** %G
  %7 = load i32, i32* %i
  %8 = call i32* @getEdgeTuple(%Graph* %6, i32 %7, i32 1)
  %9 = load i32, i32* %8
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @str, i32 0, i32 0), i32 %5, i32 %9)
  %11 = load i32, i32* %i
  %12 = add i32 %11, 1
  store i32 %12, i32* %i
  %13 = load %Graph*, %Graph** %G
  %14 = getelementptr inbounds %Graph, %Graph* %13, i32 0, i32 1
  %15 = load i32, i32* %14
  %16 = load i32, i32* %i
  %17 = icmp ne i32 %16, %15
  br i1 %17, label %1, label %18

18:                                               ; preds = %1
  ret i32 0
}

define i32** @getEdge(%Graph* %0, i32 %1) {
entry:
  %G = alloca %Graph*
  store %Graph* %0, %Graph** %G
  %i = alloca i32
  store i32 %1, i32* %i
  %edge_temp = alloca i32*
  %2 = load i32, i32* %i
  %3 = mul i32 %2, 4
  %4 = load %Graph*, %Graph** %G
  %5 = getelementptr inbounds %Graph, %Graph* %4, i32 0, i32 2
  %6 = load i32**, i32*** %5
  %7 = ptrtoint i32** %6 to i32
  %8 = add i32 %7, %3
  %9 = inttoptr i32 %8 to i32*
  store i32* %9, i32** %edge_temp
  %edge = alloca i32**
  %10 = load i32*, i32** %edge_temp
  %11 = bitcast i32* %10 to i32**
  store i32** %11, i32*** %edge
  %12 = load i32**, i32*** %edge
  ret i32** %12
}

define i32* @getEdgeTuple(%Graph* %0, i32 %1, i32 %2) {
entry:
  %G = alloca %Graph*
  store %Graph* %0, %Graph** %G
  %i = alloca i32
  store i32 %1, i32* %i
  %j = alloca i32
  store i32 %2, i32* %j
  %edge_temp = alloca i32*
  %3 = load i32, i32* %i
  %4 = mul i32 %3, 4
  %5 = load %Graph*, %Graph** %G
  %6 = getelementptr inbounds %Graph, %Graph* %5, i32 0, i32 2
  %7 = load i32**, i32*** %6
  %8 = ptrtoint i32** %7 to i32
  %9 = add i32 %8, %4
  %10 = inttoptr i32 %9 to i32*
  store i32* %10, i32** %edge_temp
  %edge = alloca i32**
  %11 = load i32*, i32** %edge_temp
  %12 = bitcast i32* %11 to i32**
  store i32** %12, i32*** %edge
  %p = alloca i32*
  %13 = load i32, i32* %j
  %14 = mul i32 %13, 4
  %15 = load i32**, i32*** %edge
  %16 = load i32*, i32** %15
  %17 = ptrtoint i32* %16 to i32
  %18 = add i32 %17, %14
  %19 = inttoptr i32 %18 to i32*
  store i32* %19, i32** %p
  %20 = load i32*, i32** %p
  ret i32* %20
}

define %Permutation* @new_Permutation(i32* %0, i32 %1) {
entry:
  %v = alloca i32*
  store i32* %0, i32** %v
  %len = alloca i32
  store i32 %1, i32* %len
  %p = alloca %Permutation*
  %2 = call i8* @malloc(i32 8)
  %3 = bitcast i8* %2 to %Permutation*
  store %Permutation* %3, %Permutation** %p
  %4 = load %Permutation*, %Permutation** %p
  %5 = getelementptr inbounds %Permutation, %Permutation* %4, i32 0, i32 0
  %6 = load i32*, i32** %v
  store i32* %6, i32** %5
  %7 = load %Permutation*, %Permutation** %p
  %8 = getelementptr inbounds %Permutation, %Permutation* %7, i32 0, i32 1
  %9 = load i32, i32* %len
  store i32 %9, i32* %8
  %10 = load %Permutation*, %Permutation** %p
  ret %Permutation* %10
}

define i32 @printPermutation(%Permutation* %0) {
entry:
  %p = alloca %Permutation*
  store %Permutation* %0, %Permutation** %p
  %i = alloca i32
  store i32 0, i32* %i
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @str.1, i32 0, i32 0))
  br label %2

2:                                                ; preds = %2, %entry
  %3 = load %Permutation*, %Permutation** %p
  %4 = getelementptr inbounds %Permutation, %Permutation* %3, i32 0, i32 0
  %5 = load i32*, i32** %4
  %6 = load i32, i32* %i
  %7 = getelementptr i32, i32* %5, i32 %6
  %8 = load i32, i32* %7
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.2, i32 0, i32 0), i32 %8)
  %10 = load i32, i32* %i
  %11 = add i32 %10, 1
  store i32 %11, i32* %i
  %12 = load %Permutation*, %Permutation** %p
  %13 = getelementptr inbounds %Permutation, %Permutation* %12, i32 0, i32 1
  %14 = load i32, i32* %13
  %15 = load i32, i32* %i
  %16 = icmp slt i32 %15, %14
  br i1 %16, label %2, label %17

17:                                               ; preds = %2
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @str.3, i32 0, i32 0))
  ret i32 0
}

declare %Permutation** @gen_all_permutations(i32)

define i32 @isEqual(%Graph* %0, %Graph* %1) {
entry:
  %G = alloca %Graph*
  store %Graph* %0, %Graph** %G
  %H = alloca %Graph*
  store %Graph* %1, %Graph** %H
  %i = alloca i32
  store i32 0, i32* %i
  br label %2

2:                                                ; preds = %43, %entry
  %3 = load %Graph*, %Graph** %H
  %4 = getelementptr inbounds %Graph, %Graph* %3, i32 0, i32 2
  %5 = load i32**, i32*** %4
  %6 = load i32, i32* %i
  %7 = getelementptr i32*, i32** %5, i32 %6
  %8 = load i32*, i32** %7
  %9 = getelementptr i32, i32* %8, i32 0
  %10 = load i32, i32* %9
  %11 = load %Graph*, %Graph** %G
  %12 = getelementptr inbounds %Graph, %Graph* %11, i32 0, i32 2
  %13 = load i32**, i32*** %12
  %14 = load i32, i32* %i
  %15 = getelementptr i32*, i32** %13, i32 %14
  %16 = load i32*, i32** %15
  %17 = getelementptr i32, i32* %16, i32 0
  %18 = load i32, i32* %17
  %19 = icmp ne i32 %18, %10
  br i1 %19, label %21, label %22

20:                                               ; preds = %43
  ret i32 1

21:                                               ; preds = %2
  ret i32 0
  br label %23

22:                                               ; preds = %2
  br label %23

23:                                               ; preds = %22, %21
  %24 = load %Graph*, %Graph** %H
  %25 = getelementptr inbounds %Graph, %Graph* %24, i32 0, i32 2
  %26 = load i32**, i32*** %25
  %27 = load i32, i32* %i
  %28 = getelementptr i32*, i32** %26, i32 %27
  %29 = load i32*, i32** %28
  %30 = getelementptr i32, i32* %29, i32 1
  %31 = load i32, i32* %30
  %32 = load %Graph*, %Graph** %G
  %33 = getelementptr inbounds %Graph, %Graph* %32, i32 0, i32 2
  %34 = load i32**, i32*** %33
  %35 = load i32, i32* %i
  %36 = getelementptr i32*, i32** %34, i32 %35
  %37 = load i32*, i32** %36
  %38 = getelementptr i32, i32* %37, i32 1
  %39 = load i32, i32* %38
  %40 = icmp ne i32 %39, %31
  br i1 %40, label %41, label %42

41:                                               ; preds = %23
  ret i32 0
  br label %43

42:                                               ; preds = %23
  br label %43

43:                                               ; preds = %42, %41
  %44 = load i32, i32* %i
  %45 = add i32 %44, 1
  store i32 %45, i32* %i
  %46 = load %Graph*, %Graph** %G
  %47 = getelementptr inbounds %Graph, %Graph* %46, i32 0, i32 1
  %48 = load i32, i32* %47
  %49 = load i32, i32* %i
  %50 = icmp ne i32 %49, %48
  br i1 %50, label %2, label %20
}

declare i32 @isIsomorphic(%Graph*, %Graph*)

define i32 @main() {
entry:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @str.4, i32 0, i32 0))
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
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @str.5, i32 0, i32 0))
  br label %9

8:                                                ; preds = %entry
  br label %9

9:                                                ; preds = %8, %6
  %10 = load i32, i32* %y
  %11 = load i32, i32* %x
  %12 = icmp ne i32 %11, %10
  br i1 %12, label %13, label %15

13:                                               ; preds = %9
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @str.6, i32 0, i32 0))
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
  %40 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.7, i32 0, i32 0), i32 %39)
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
  %90 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @str.8, i32 0, i32 0), i32 %89)
  %91 = load i32, i32* %j
  %92 = add i32 %91, 1
  store i32 %92, i32* %j
  %93 = load i32, i32* %j
  %94 = icmp slt i32 %93, 10
  br i1 %94, label %82, label %95

95:                                               ; preds = %82
  %96 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @str.9, i32 0, i32 0))
  %97 = load i32, i32* %i
  %98 = add i32 %97, 1
  store i32 %98, i32* %i
  %99 = load i32, i32* %i
  %100 = icmp slt i32 %99, 10
  br i1 %100, label %80, label %81
}
