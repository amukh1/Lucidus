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
@str.5 = private constant [4 x i8] c"%d\0A\00"
@str.6 = private constant [4 x i8] c"%d\0A\00"
@str.7 = private constant [17 x i8] c"x is equal to y\0A\00"
@str.8 = private constant [21 x i8] c"x is not equal to y\0A\00"
@str.9 = private constant [4 x i8] c"%d\0A\00"
@str.10 = private constant [6 x i8] c"%d | \00"
@str.11 = private constant [2 x i8] c"\0A\00"

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
  ret i32 1
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
  %3 = load i32, i32* %x
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.5, i32 0, i32 0), i32 %3)
  %5 = load i32, i32* %y
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.6, i32 0, i32 0), i32 %5)
  %7 = load i32, i32* %y
  %8 = load i32, i32* %x
  %9 = icmp eq i32 %8, %7
  br i1 %9, label %10, label %12

10:                                               ; preds = %entry
  %11 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @str.7, i32 0, i32 0))
  br label %13

12:                                               ; preds = %entry
  br label %13

13:                                               ; preds = %12, %10
  %14 = load i32, i32* %y
  %15 = load i32, i32* %x
  %16 = icmp ne i32 %15, %14
  br i1 %16, label %17, label %19

17:                                               ; preds = %13
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @str.8, i32 0, i32 0))
  br label %20

19:                                               ; preds = %13
  br label %20

20:                                               ; preds = %19, %17
  %z = alloca float
  store float 0x3FF3333340000000, float* %z
  %21 = load i32, i32* %x
  %22 = bitcast i32 %21 to float
  store float %22, float* %z
  %arr = alloca i32*
  %23 = call i8* @malloc(i32 40)
  %24 = bitcast i8* %23 to i32*
  store i32* %24, i32** %arr
  %25 = load i32*, i32** %arr
  %26 = getelementptr i32, i32* %25, i32 0
  store i32 1, i32* %26
  %27 = load i32*, i32** %arr
  %28 = getelementptr i32, i32* %27, i32 1
  store i32 2, i32* %28
  %i = alloca i32
  store i32 0, i32* %i
  br label %29

29:                                               ; preds = %29, %20
  %30 = load i32*, i32** %arr
  %31 = load i32, i32* %i
  %32 = getelementptr i32, i32* %30, i32 %31
  %33 = load i32, i32* %i
  store i32 %33, i32* %32
  %34 = load i32, i32* %i
  %35 = add i32 %34, 1
  store i32 %35, i32* %i
  %36 = load i32, i32* %i
  %37 = icmp slt i32 %36, 11
  br i1 %37, label %29, label %38

38:                                               ; preds = %29
  store i32 0, i32* %i
  br label %39

39:                                               ; preds = %39, %38
  %40 = load i32*, i32** %arr
  %41 = load i32, i32* %i
  %42 = getelementptr i32, i32* %40, i32 %41
  %43 = load i32, i32* %42
  %44 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.9, i32 0, i32 0), i32 %43)
  %45 = load i32, i32* %i
  %46 = add i32 %45, 1
  store i32 %46, i32* %i
  %47 = load i32, i32* %i
  %48 = icmp slt i32 %47, 11
  br i1 %48, label %39, label %49

49:                                               ; preds = %39
  %arr2 = alloca i32**
  %50 = call i8* @malloc(i32 80)
  %51 = bitcast i8* %50 to i32**
  store i32** %51, i32*** %arr2
  store i32 0, i32* %i
  %j = alloca i32
  store i32 0, i32* %j
  br label %52

52:                                               ; preds = %52, %49
  %53 = load i32**, i32*** %arr2
  %54 = load i32, i32* %i
  %55 = getelementptr i32*, i32** %53, i32 %54
  %56 = call i8* @malloc(i32 40)
  %57 = bitcast i8* %56 to i32*
  store i32* %57, i32** %55
  %58 = load i32, i32* %i
  %59 = add i32 %58, 1
  store i32 %59, i32* %i
  %60 = load i32, i32* %i
  %61 = icmp slt i32 %60, 10
  br i1 %61, label %52, label %62

62:                                               ; preds = %52
  store i32 0, i32* %i
  br label %63

63:                                               ; preds = %79, %62
  store i32 0, i32* %j
  br label %65

64:                                               ; preds = %79
  store i32 0, i32* %i
  br label %84

65:                                               ; preds = %65, %63
  %66 = load i32**, i32*** %arr2
  %67 = load i32, i32* %i
  %68 = getelementptr i32*, i32** %66, i32 %67
  %69 = load i32*, i32** %68
  %70 = load i32, i32* %j
  %71 = getelementptr i32, i32* %69, i32 %70
  %72 = load i32, i32* %j
  %73 = load i32, i32* %i
  %74 = add i32 %73, %72
  store i32 %74, i32* %71
  %75 = load i32, i32* %j
  %76 = add i32 %75, 1
  store i32 %76, i32* %j
  %77 = load i32, i32* %j
  %78 = icmp slt i32 %77, 10
  br i1 %78, label %65, label %79

79:                                               ; preds = %65
  %80 = load i32, i32* %i
  %81 = add i32 %80, 1
  store i32 %81, i32* %i
  %82 = load i32, i32* %i
  %83 = icmp slt i32 %82, 10
  br i1 %83, label %63, label %64

84:                                               ; preds = %99, %64
  store i32 0, i32* %j
  br label %86

85:                                               ; preds = %99
  ret i32 0

86:                                               ; preds = %86, %84
  %87 = load i32**, i32*** %arr2
  %88 = load i32, i32* %i
  %89 = getelementptr i32*, i32** %87, i32 %88
  %90 = load i32*, i32** %89
  %91 = load i32, i32* %j
  %92 = getelementptr i32, i32* %90, i32 %91
  %93 = load i32, i32* %92
  %94 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @str.10, i32 0, i32 0), i32 %93)
  %95 = load i32, i32* %j
  %96 = add i32 %95, 1
  store i32 %96, i32* %j
  %97 = load i32, i32* %j
  %98 = icmp slt i32 %97, 10
  br i1 %98, label %86, label %99

99:                                               ; preds = %86
  %100 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @str.11, i32 0, i32 0))
  %101 = load i32, i32* %i
  %102 = add i32 %101, 1
  store i32 %102, i32* %i
  %103 = load i32, i32* %i
  %104 = icmp slt i32 %103, 10
  br i1 %104, label %84, label %85
}
