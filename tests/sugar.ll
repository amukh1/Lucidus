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
@str.4 = private constant [7 x i8] c"Equal\0A\00"
@str.5 = private constant [9 x i8] c"Equal 2\0A\00"
@str.6 = private constant [9 x i8] c"Equal 3\0A\00"

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
  br i1 %2, label %3, label %10

3:                                                ; preds = %entry
  ret i32 1

4:                                                ; preds = %10
  %5 = load i32, i32* %n
  %6 = sub i32 %5, 1
  %7 = call i32 @factorial(i32 %6)
  %8 = load i32, i32* %n
  %9 = mul i32 %8, %7
  ret i32 %9

10:                                               ; preds = %entry
  br label %4
}

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
  br label %while_loop

while_loop:                                       ; preds = %7, %entry
  %1 = load %Graph*, %Graph** %G
  %2 = getelementptr inbounds %Graph, %Graph* %1, i32 0, i32 1
  %3 = load i32, i32* %2
  %4 = load i32, i32* %i
  %5 = icmp eq i32 %4, %3
  br i1 %5, label %6, label %19

6:                                                ; preds = %while_loop
  br label %while_loop_end

7:                                                ; preds = %19
  %8 = load %Graph*, %Graph** %G
  %9 = load i32, i32* %i
  %10 = call i32* @getEdgeTuple(%Graph* %8, i32 %9, i32 0)
  %11 = load i32, i32* %10
  %12 = load %Graph*, %Graph** %G
  %13 = load i32, i32* %i
  %14 = call i32* @getEdgeTuple(%Graph* %12, i32 %13, i32 1)
  %15 = load i32, i32* %14
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @str, i32 0, i32 0), i32 %11, i32 %15)
  %17 = load i32, i32* %i
  %18 = add i32 %17, 1
  store i32 %18, i32* %i
  br label %while_loop

19:                                               ; preds = %while_loop
  br label %7

while_loop_end:                                   ; preds = %6
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
  %2 = load %Graph*, %Graph** %H
  %3 = getelementptr inbounds %Graph, %Graph* %2, i32 0, i32 0
  %4 = load i32, i32* %3
  %5 = load %Graph*, %Graph** %G
  %6 = getelementptr inbounds %Graph, %Graph* %5, i32 0, i32 0
  %7 = load i32, i32* %6
  %8 = icmp ne i32 %7, %4
  br i1 %8, label %9, label %18

9:                                                ; preds = %entry
  ret i32 0

10:                                               ; preds = %18
  %11 = load %Graph*, %Graph** %H
  %12 = getelementptr inbounds %Graph, %Graph* %11, i32 0, i32 1
  %13 = load i32, i32* %12
  %14 = load %Graph*, %Graph** %G
  %15 = getelementptr inbounds %Graph, %Graph* %14, i32 0, i32 1
  %16 = load i32, i32* %15
  %17 = icmp ne i32 %16, %13
  br i1 %17, label %19, label %21

18:                                               ; preds = %entry
  br label %10

19:                                               ; preds = %10
  ret i32 0

20:                                               ; preds = %21
  %i = alloca i32
  store i32 0, i32* %i
  br label %22

21:                                               ; preds = %10
  br label %20

22:                                               ; preds = %62, %20
  %23 = load %Graph*, %Graph** %H
  %24 = getelementptr inbounds %Graph, %Graph* %23, i32 0, i32 2
  %25 = load i32**, i32*** %24
  %26 = load i32, i32* %i
  %27 = getelementptr i32*, i32** %25, i32 %26
  %28 = load i32*, i32** %27
  %29 = getelementptr i32, i32* %28, i32 0
  %30 = load i32, i32* %29
  %31 = load %Graph*, %Graph** %G
  %32 = getelementptr inbounds %Graph, %Graph* %31, i32 0, i32 2
  %33 = load i32**, i32*** %32
  %34 = load i32, i32* %i
  %35 = getelementptr i32*, i32** %33, i32 %34
  %36 = load i32*, i32** %35
  %37 = getelementptr i32, i32* %36, i32 0
  %38 = load i32, i32* %37
  %39 = icmp ne i32 %38, %30
  br i1 %39, label %41, label %60

40:                                               ; preds = %62
  ret i32 1

41:                                               ; preds = %22
  ret i32 0

42:                                               ; preds = %60
  %43 = load %Graph*, %Graph** %H
  %44 = getelementptr inbounds %Graph, %Graph* %43, i32 0, i32 2
  %45 = load i32**, i32*** %44
  %46 = load i32, i32* %i
  %47 = getelementptr i32*, i32** %45, i32 %46
  %48 = load i32*, i32** %47
  %49 = getelementptr i32, i32* %48, i32 1
  %50 = load i32, i32* %49
  %51 = load %Graph*, %Graph** %G
  %52 = getelementptr inbounds %Graph, %Graph* %51, i32 0, i32 2
  %53 = load i32**, i32*** %52
  %54 = load i32, i32* %i
  %55 = getelementptr i32*, i32** %53, i32 %54
  %56 = load i32*, i32** %55
  %57 = getelementptr i32, i32* %56, i32 1
  %58 = load i32, i32* %57
  %59 = icmp ne i32 %58, %50
  br i1 %59, label %61, label %70

60:                                               ; preds = %22
  br label %42

61:                                               ; preds = %42
  ret i32 0

62:                                               ; preds = %70
  %63 = load i32, i32* %i
  %64 = add i32 %63, 1
  store i32 %64, i32* %i
  %65 = load %Graph*, %Graph** %G
  %66 = getelementptr inbounds %Graph, %Graph* %65, i32 0, i32 1
  %67 = load i32, i32* %66
  %68 = load i32, i32* %i
  %69 = icmp ne i32 %68, %67
  br i1 %69, label %22, label %40

70:                                               ; preds = %42
  br label %62
}

declare i32 @isIsomorphic(%Graph*, %Graph*)

define i32 @main() {
entry:
  %G = alloca %Graph*
  %0 = call i8* @malloc(i32 8)
  %1 = bitcast i8* %0 to %Graph*
  store %Graph* %1, %Graph** %G
  %H = alloca %Graph*
  %2 = call i8* @malloc(i32 8)
  %3 = bitcast i8* %2 to %Graph*
  store %Graph* %3, %Graph** %H
  %4 = load %Graph*, %Graph** %G
  %5 = getelementptr inbounds %Graph, %Graph* %4, i32 0, i32 0
  store i32 4, i32* %5
  %6 = load %Graph*, %Graph** %H
  %7 = getelementptr inbounds %Graph, %Graph* %6, i32 0, i32 0
  store i32 4, i32* %7
  %8 = load %Graph*, %Graph** %G
  %9 = getelementptr inbounds %Graph, %Graph* %8, i32 0, i32 1
  store i32 2, i32* %9
  %10 = load %Graph*, %Graph** %H
  %11 = getelementptr inbounds %Graph, %Graph* %10, i32 0, i32 1
  store i32 2, i32* %11
  %12 = load %Graph*, %Graph** %G
  %13 = getelementptr inbounds %Graph, %Graph* %12, i32 0, i32 2
  %14 = call i8* @malloc(i32 8)
  %15 = bitcast i8* %14 to i32**
  store i32** %15, i32*** %13
  %16 = load %Graph*, %Graph** %G
  %17 = getelementptr inbounds %Graph, %Graph* %16, i32 0, i32 2
  %18 = load i32**, i32*** %17
  %19 = getelementptr i32*, i32** %18, i32 0
  %20 = call i8* @malloc(i32 8)
  %21 = bitcast i8* %20 to i32*
  store i32* %21, i32** %19
  %22 = load %Graph*, %Graph** %G
  %23 = getelementptr inbounds %Graph, %Graph* %22, i32 0, i32 2
  %24 = load i32**, i32*** %23
  %25 = getelementptr i32*, i32** %24, i32 1
  %26 = call i8* @malloc(i32 8)
  %27 = bitcast i8* %26 to i32*
  store i32* %27, i32** %25
  %28 = load %Graph*, %Graph** %G
  %29 = getelementptr inbounds %Graph, %Graph* %28, i32 0, i32 2
  %30 = load i32**, i32*** %29
  %31 = getelementptr i32*, i32** %30, i32 0
  %32 = load i32*, i32** %31
  %33 = getelementptr i32, i32* %32, i32 0
  store i32 1, i32* %33
  %34 = load %Graph*, %Graph** %G
  %35 = getelementptr inbounds %Graph, %Graph* %34, i32 0, i32 2
  %36 = load i32**, i32*** %35
  %37 = getelementptr i32*, i32** %36, i32 0
  %38 = load i32*, i32** %37
  %39 = getelementptr i32, i32* %38, i32 1
  store i32 2, i32* %39
  %40 = load %Graph*, %Graph** %G
  %41 = getelementptr inbounds %Graph, %Graph* %40, i32 0, i32 2
  %42 = load i32**, i32*** %41
  %43 = getelementptr i32*, i32** %42, i32 1
  %44 = load i32*, i32** %43
  %45 = getelementptr i32, i32* %44, i32 0
  store i32 3, i32* %45
  %46 = load %Graph*, %Graph** %G
  %47 = getelementptr inbounds %Graph, %Graph* %46, i32 0, i32 2
  %48 = load i32**, i32*** %47
  %49 = getelementptr i32*, i32** %48, i32 1
  %50 = load i32*, i32** %49
  %51 = getelementptr i32, i32* %50, i32 1
  store i32 4, i32* %51
  %52 = load %Graph*, %Graph** %H
  %53 = getelementptr inbounds %Graph, %Graph* %52, i32 0, i32 2
  %54 = call i8* @malloc(i32 8)
  %55 = bitcast i8* %54 to i32**
  store i32** %55, i32*** %53
  %56 = load %Graph*, %Graph** %H
  %57 = getelementptr inbounds %Graph, %Graph* %56, i32 0, i32 2
  %58 = load i32**, i32*** %57
  %59 = getelementptr i32*, i32** %58, i32 0
  %60 = call i8* @malloc(i32 8)
  %61 = bitcast i8* %60 to i32*
  store i32* %61, i32** %59
  %62 = load %Graph*, %Graph** %H
  %63 = getelementptr inbounds %Graph, %Graph* %62, i32 0, i32 2
  %64 = load i32**, i32*** %63
  %65 = getelementptr i32*, i32** %64, i32 1
  %66 = call i8* @malloc(i32 8)
  %67 = bitcast i8* %66 to i32*
  store i32* %67, i32** %65
  %68 = load %Graph*, %Graph** %H
  %69 = getelementptr inbounds %Graph, %Graph* %68, i32 0, i32 2
  %70 = load i32**, i32*** %69
  %71 = getelementptr i32*, i32** %70, i32 0
  %72 = load i32*, i32** %71
  %73 = getelementptr i32, i32* %72, i32 0
  store i32 1, i32* %73
  %74 = load %Graph*, %Graph** %H
  %75 = getelementptr inbounds %Graph, %Graph* %74, i32 0, i32 2
  %76 = load i32**, i32*** %75
  %77 = getelementptr i32*, i32** %76, i32 0
  %78 = load i32*, i32** %77
  %79 = getelementptr i32, i32* %78, i32 1
  store i32 2, i32* %79
  %80 = load %Graph*, %Graph** %H
  %81 = getelementptr inbounds %Graph, %Graph* %80, i32 0, i32 2
  %82 = load i32**, i32*** %81
  %83 = getelementptr i32*, i32** %82, i32 1
  %84 = load i32*, i32** %83
  %85 = getelementptr i32, i32* %84, i32 0
  store i32 3, i32* %85
  %86 = load %Graph*, %Graph** %H
  %87 = getelementptr inbounds %Graph, %Graph* %86, i32 0, i32 2
  %88 = load i32**, i32*** %87
  %89 = getelementptr i32*, i32** %88, i32 1
  %90 = load i32*, i32** %89
  %91 = getelementptr i32, i32* %90, i32 1
  store i32 4, i32* %91
  %92 = load %Graph*, %Graph** %G
  %93 = load %Graph*, %Graph** %H
  %94 = call i32 @isEqual(%Graph* %92, %Graph* %93)
  %95 = icmp eq i32 %94, 1
  br i1 %95, label %96, label %99

96:                                               ; preds = %entry
  %97 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str.4, i32 0, i32 0))
  br label %98

98:                                               ; preds = %99, %96
  br i1 true, label %100, label %103

99:                                               ; preds = %entry
  br label %98

100:                                              ; preds = %98
  %101 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([9 x i8], [9 x i8]* @str.5, i32 0, i32 0))
  br i1 true, label %104, label %107

102:                                              ; preds = %103
  ret i32 0

103:                                              ; preds = %98
  br label %102

104:                                              ; preds = %100
  %105 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([9 x i8], [9 x i8]* @str.6, i32 0, i32 0))
  br label %106

106:                                              ; preds = %107, %104
  br label %103
107:                                              ; preds = %100
  br label %106
}
