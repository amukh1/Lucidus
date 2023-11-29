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
@str.4 = private constant [7 x i8] c"n: %d\0A\00"
@str.5 = private constant [7 x i8] c"i: %d\0A\00"
@str.6 = private constant [31 x i8] c"n: %d, perm: %d, j: %d, r: %d\0A\00"
@str.7 = private constant [22 x i8] c"--------------------\0A\00"
@str.8 = private constant [22 x i8] c"--------------------\0A\00"
@str.9 = private constant [12 x i8] c"(%d %d %d)\0A\00"

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
  br i1 %5, label %6, label %7

6:                                                ; preds = %while_loop
  br label %while_loop_end

7:                                                ; preds = %while_loop
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

define i32 @permute(%Permutation* %0, i32 %1) {
entry:
  %p = alloca %Permutation*
  store %Permutation* %0, %Permutation** %p
  %i = alloca i32
  store i32 %1, i32* %i
  %2 = load i32, i32* %i
  %3 = sub i32 %2, 1
  %4 = mul i32 %3, 4
  %5 = load %Permutation*, %Permutation** %p
  %6 = getelementptr inbounds %Permutation, %Permutation* %5, i32 0, i32 0
  %7 = ptrtoint i32** %6 to i32
  %8 = add i32 %7, %4
  %9 = inttoptr i32 %8 to i32*
  %10 = load i32, i32* %9
  ret i32 %10
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

define %Permutation** @gen_all_permutations(i32 %0) {
entry:
  %n = alloca i32
  store i32 %0, i32* %n
  %1 = load i32, i32* %n
  %2 = icmp eq i32 %1, 1
  br i1 %2, label %3, label %20

3:                                                ; preds = %entry
  %v = alloca %Permutation**
  %4 = call i8* @malloc(i32 4)
  %5 = bitcast i8* %4 to %Permutation**
  store %Permutation** %5, %Permutation*** %v
  %6 = load %Permutation**, %Permutation*** %v
  %7 = load %Permutation*, %Permutation** %6
  %8 = getelementptr inbounds %Permutation, %Permutation* %7, i32 0, i32 0
  %9 = call i8* @malloc(i32 4)
  %10 = bitcast i8* %9 to i32*
  store i32* %10, i32** %8
  %11 = load %Permutation**, %Permutation*** %v
  %12 = load %Permutation*, %Permutation** %11
  %13 = getelementptr inbounds %Permutation, %Permutation* %12, i32 0, i32 1
  store i32 1, i32* %13
  %14 = load %Permutation**, %Permutation*** %v
  %15 = load %Permutation*, %Permutation** %14
  %16 = getelementptr inbounds %Permutation, %Permutation* %15, i32 0, i32 0
  %17 = load i32*, i32** %16
  %18 = getelementptr i32, i32* %17, i32 0
  store i32 1, i32* %18
  %19 = load %Permutation**, %Permutation*** %v
  ret %Permutation** %19

20:                                               ; preds = %entry
  %21 = load i32, i32* %n
  %22 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str.4, i32 0, i32 0), i32 %21)
  %v1 = alloca %Permutation**
  %23 = load i32, i32* %n
  %24 = call i32 @factorial(i32 %23)
  %25 = mul i32 4, %24
  %26 = call i8* @malloc(i32 %25)
  %27 = bitcast i8* %26 to %Permutation**
  store %Permutation** %27, %Permutation*** %v1
  %28 = load i32, i32* %n
  %29 = sub i32 %28, 1
  %30 = call %Permutation** @gen_all_permutations(i32 %29)
  %recurse = alloca %Permutation**
  store %Permutation** %30, %Permutation*** %recurse
  %i = alloca i32
  store i32 0, i32* %i
  br label %31

31:                                               ; preds = %48, %20
  %j = alloca i32
  store i32 0, i32* %j
  br label %34

32:                                               ; preds = %48
  %33 = load %Permutation**, %Permutation*** %v1
  ret %Permutation** %33

34:                                               ; preds = %58, %31
  %permutation = alloca %Permutation*
  %35 = call i8* @malloc(i32 8)
  %36 = bitcast i8* %35 to %Permutation*
  store %Permutation* %36, %Permutation** %permutation
  %37 = load %Permutation*, %Permutation** %permutation
  %38 = getelementptr inbounds %Permutation, %Permutation* %37, i32 0, i32 0
  %39 = load i32, i32* %n
  %40 = mul i32 4, %39
  %41 = call i8* @malloc(i32 %40)
  %42 = bitcast i8* %41 to i32*
  store i32* %42, i32** %38
  %43 = load %Permutation*, %Permutation** %permutation
  %44 = getelementptr inbounds %Permutation, %Permutation* %43, i32 0, i32 1
  %45 = load i32, i32* %n
  store i32 %45, i32* %44
  %46 = load i32, i32* %i
  %47 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str.5, i32 0, i32 0), i32 %46)
  %k = alloca i32
  store i32 0, i32* %k
  %r = alloca i32
  store i32 0, i32* %r
  br label %54

48:                                               ; preds = %58
  %49 = load i32, i32* %i
  %50 = add i32 %49, 1
  store i32 %50, i32* %i
  %51 = load i32, i32* %n
  %52 = load i32, i32* %i
  %53 = icmp slt i32 %52, %51
  br i1 %53, label %31, label %32

54:                                               ; preds = %122, %34
  %55 = load i32, i32* %i
  %56 = load i32, i32* %k
  %57 = icmp eq i32 %56, %55
  br i1 %57, label %76, label %83

58:                                               ; preds = %122
  %59 = load %Permutation**, %Permutation*** %v1
  %60 = load i32, i32* %j
  %61 = load i32, i32* %n
  %62 = sub i32 %61, 1
  %63 = call i32 @factorial(i32 %62)
  %64 = load i32, i32* %i
  %65 = mul i32 %64, %63
  %66 = add i32 %65, %60
  %67 = getelementptr %Permutation*, %Permutation** %59, i32 %66
  %68 = load %Permutation*, %Permutation** %permutation
  store %Permutation* %68, %Permutation** %67
  %69 = load i32, i32* %j
  %70 = add i32 %69, 1
  store i32 %70, i32* %j
  %71 = load i32, i32* %n
  %72 = sub i32 %71, 1
  %73 = call i32 @factorial(i32 %72)
  %74 = load i32, i32* %j
  %75 = icmp slt i32 %74, %73
  br i1 %75, label %34, label %48

76:                                               ; preds = %54
  %77 = load %Permutation*, %Permutation** %permutation
  %78 = getelementptr inbounds %Permutation, %Permutation* %77, i32 0, i32 0
  %79 = load i32*, i32** %78
  %80 = load i32, i32* %k
  %81 = getelementptr i32, i32* %79, i32 %80
  %82 = load i32, i32* %n
  store i32 %82, i32* %81
  br label %83

83:                                               ; preds = %76, %54
  %84 = load i32, i32* %i
  %85 = load i32, i32* %k
  %86 = icmp ne i32 %85, %84
  br i1 %86, label %87, label %122

87:                                               ; preds = %83
  %88 = load %Permutation**, %Permutation*** %recurse
  %89 = load i32, i32* %j
  %90 = getelementptr %Permutation*, %Permutation** %88, i32 %89
  %91 = load %Permutation*, %Permutation** %90
  %92 = getelementptr inbounds %Permutation, %Permutation* %91, i32 0, i32 0
  %93 = load i32*, i32** %92
  %94 = load i32, i32* %r
  %95 = getelementptr i32, i32* %93, i32 %94
  %96 = load i32, i32* %95
  %u = alloca i32
  store i32 %96, i32* %u
  %97 = load i32, i32* %n
  %98 = load %Permutation**, %Permutation*** %recurse
  %99 = load i32, i32* %j
  %100 = getelementptr %Permutation*, %Permutation** %98, i32 %99
  %101 = load %Permutation*, %Permutation** %100
  %102 = load i32, i32* %r
  %103 = add i32 %102, 1
  %104 = call i32 @permute(%Permutation* %101, i32 %103)
  %105 = load i32, i32* %j
  %106 = load i32, i32* %r
  %107 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @str.6, i32 0, i32 0), i32 %97, i32 %104, i32 %105, i32 %106)
  %108 = load %Permutation*, %Permutation** %permutation
  %109 = getelementptr inbounds %Permutation, %Permutation* %108, i32 0, i32 0
  %110 = load i32*, i32** %109
  %111 = load i32, i32* %k
  %112 = getelementptr i32, i32* %110, i32 %111
  %113 = load %Permutation**, %Permutation*** %recurse
  %114 = load i32, i32* %j
  %115 = getelementptr %Permutation*, %Permutation** %113, i32 %114
  %116 = load %Permutation*, %Permutation** %115
  %117 = load i32, i32* %r
  %118 = add i32 %117, 1
  %119 = call i32 @permute(%Permutation* %116, i32 %118)
  store i32 %119, i32* %112
  %120 = load i32, i32* %r
  %121 = add i32 %120, 1
  store i32 %121, i32* %r
  br label %122

122:                                              ; preds = %87, %83
  %123 = load i32, i32* %k
  %124 = add i32 %123, 1
  store i32 %124, i32* %k
  %125 = load i32, i32* %n
  %126 = load i32, i32* %k
  %127 = icmp slt i32 %126, %125
  br i1 %127, label %54, label %58
}

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
  br i1 %8, label %9, label %10

9:                                                ; preds = %entry
  ret i32 0

10:                                               ; preds = %entry
  %11 = load %Graph*, %Graph** %H
  %12 = getelementptr inbounds %Graph, %Graph* %11, i32 0, i32 1
  %13 = load i32, i32* %12
  %14 = load %Graph*, %Graph** %G
  %15 = getelementptr inbounds %Graph, %Graph* %14, i32 0, i32 1
  %16 = load i32, i32* %15
  %17 = icmp ne i32 %16, %13
  br i1 %17, label %18, label %19

18:                                               ; preds = %10
  ret i32 0

19:                                               ; preds = %10
  %G_edges = alloca i32**
  %20 = load %Graph*, %Graph** %G
  %21 = call i32** @edgeList(%Graph* %20)
  store i32** %21, i32*** %G_edges
  %H_edges = alloca i32**
  %22 = load %Graph*, %Graph** %H
  %23 = call i32** @edgeList(%Graph* %22)
  store i32** %23, i32*** %H_edges
  %i = alloca i32
  store i32 0, i32* %i
  br label %while_i

while_i:                                          ; preds = %91, %19
  %24 = load %Graph*, %Graph** %G
  %25 = getelementptr inbounds %Graph, %Graph* %24, i32 0, i32 1
  %26 = load i32, i32* %25
  %27 = load i32, i32* %i
  %28 = icmp eq i32 %27, %26
  br i1 %28, label %29, label %30

29:                                               ; preds = %while_i
  br label %while_i_end

30:                                               ; preds = %while_i
  %j = alloca i32
  store i32 0, i32* %j
  %firstsMatch = alloca i32
  store i32 0, i32* %firstsMatch
  %secondsMatch = alloca i32
  store i32 0, i32* %secondsMatch
  br label %while_i_two

while_i_end:                                      ; preds = %29
  ret i32 1

while_i_two:                                      ; preds = %83, %30
  %31 = load %Graph*, %Graph** %H
  %32 = getelementptr inbounds %Graph, %Graph* %31, i32 0, i32 1
  %33 = load i32, i32* %32
  %34 = load i32, i32* %j
  %35 = icmp eq i32 %34, %33
  br i1 %35, label %36, label %37

36:                                               ; preds = %while_i_two
  br label %while_i_two_end

37:                                               ; preds = %while_i_two
  %38 = load %Graph*, %Graph** %H
  %39 = load i32, i32* %j
  %40 = call i32* @getEdgeTuple(%Graph* %38, i32 %39, i32 0)
  %41 = load i32, i32* %40
  %42 = load %Graph*, %Graph** %G
  %43 = load i32, i32* %i
  %44 = call i32* @getEdgeTuple(%Graph* %42, i32 %43, i32 0)
  %45 = load i32, i32* %44
  %46 = icmp eq i32 %45, %41
  br i1 %46, label %49, label %50

while_i_two_end:                                  ; preds = %36
  %47 = load i32, i32* %firstsMatch
  %48 = icmp ne i32 %47, 1
  br i1 %48, label %86, label %87

49:                                               ; preds = %37
  store i32 1, i32* %firstsMatch
  br label %50

50:                                               ; preds = %49, %37
  %51 = load %Graph*, %Graph** %H
  %52 = load i32, i32* %j
  %53 = call i32* @getEdgeTuple(%Graph* %51, i32 %52, i32 1)
  %54 = load i32, i32* %53
  %55 = load %Graph*, %Graph** %G
  %56 = load i32, i32* %i
  %57 = call i32* @getEdgeTuple(%Graph* %55, i32 %56, i32 1)
  %58 = load i32, i32* %57
  %59 = icmp eq i32 %58, %54
  br i1 %59, label %60, label %61

60:                                               ; preds = %50
  store i32 1, i32* %secondsMatch
  br label %61

61:                                               ; preds = %60, %50
  %62 = load %Graph*, %Graph** %H
  %63 = load i32, i32* %j
  %64 = call i32* @getEdgeTuple(%Graph* %62, i32 %63, i32 1)
  %65 = load i32, i32* %64
  %66 = load %Graph*, %Graph** %G
  %67 = load i32, i32* %i
  %68 = call i32* @getEdgeTuple(%Graph* %66, i32 %67, i32 0)
  %69 = load i32, i32* %68
  %70 = icmp eq i32 %69, %65
  br i1 %70, label %71, label %72

71:                                               ; preds = %61
  store i32 1, i32* %firstsMatch
  br label %72

72:                                               ; preds = %71, %61
  %73 = load %Graph*, %Graph** %H
  %74 = load i32, i32* %j
  %75 = call i32* @getEdgeTuple(%Graph* %73, i32 %74, i32 0)
  %76 = load i32, i32* %75
  %77 = load %Graph*, %Graph** %G
  %78 = load i32, i32* %i
  %79 = call i32* @getEdgeTuple(%Graph* %77, i32 %78, i32 1)
  %80 = load i32, i32* %79
  %81 = icmp eq i32 %80, %76
  br i1 %81, label %82, label %83

82:                                               ; preds = %72
  store i32 1, i32* %secondsMatch
  br label %83

83:                                               ; preds = %82, %72
  %84 = load i32, i32* %j
  %85 = add i32 %84, 1
  store i32 %85, i32* %j
  br label %while_i_two

86:                                               ; preds = %while_i_two_end
  ret i32 0

87:                                               ; preds = %while_i_two_end
  %88 = load i32, i32* %secondsMatch
  %89 = icmp ne i32 %88, 1
  br i1 %89, label %90, label %91

90:                                               ; preds = %87
  ret i32 0

91:                                               ; preds = %87
  %92 = load i32, i32* %i
  %93 = add i32 %92, 1
  store i32 %93, i32* %i
  br label %while_i
}

declare i32 @isIsomorphic(%Graph*, %Graph*)

define i32 @main() {
entry:
  %G = alloca %Graph*
  %0 = call i8* @malloc(i32 16)
  %1 = bitcast i8* %0 to %Graph*
  store %Graph* %1, %Graph** %G
  %2 = load %Graph*, %Graph** %G
  %3 = getelementptr inbounds %Graph, %Graph* %2, i32 0, i32 0
  store i32 3, i32* %3
  %4 = load %Graph*, %Graph** %G
  %5 = getelementptr inbounds %Graph, %Graph* %4, i32 0, i32 1
  store i32 2, i32* %5
  %6 = load %Graph*, %Graph** %G
  %7 = getelementptr inbounds %Graph, %Graph* %6, i32 0, i32 2
  %8 = call i8* @malloc(i32 20)
  %9 = bitcast i8* %8 to i32**
  store i32** %9, i32*** %7
  %10 = load %Graph*, %Graph** %G
  %11 = call i32** @getEdge(%Graph* %10, i32 0)
  %12 = call i8* @malloc(i32 8)
  %13 = bitcast i8* %12 to i32*
  store i32* %13, i32** %11
  %14 = load %Graph*, %Graph** %G
  %15 = call i32** @getEdge(%Graph* %14, i32 1)
  %16 = call i8* @malloc(i32 8)
  %17 = bitcast i8* %16 to i32*
  store i32* %17, i32** %15
  %18 = load %Graph*, %Graph** %G
  %19 = call i32* @getEdgeTuple(%Graph* %18, i32 0, i32 0)
  store i32 4, i32* %19
  %20 = load %Graph*, %Graph** %G
  %21 = call i32* @getEdgeTuple(%Graph* %20, i32 0, i32 1)
  store i32 10, i32* %21
  %22 = load %Graph*, %Graph** %G
  %23 = call i32* @getEdgeTuple(%Graph* %22, i32 1, i32 0)
  store i32 1, i32* %23
  %24 = load %Graph*, %Graph** %G
  %25 = call i32* @getEdgeTuple(%Graph* %24, i32 1, i32 1)
  store i32 2, i32* %25
  %H = alloca %Graph*
  %26 = call i8* @malloc(i32 16)
  %27 = bitcast i8* %26 to %Graph*
  store %Graph* %27, %Graph** %H
  %28 = load %Graph*, %Graph** %H
  %29 = getelementptr inbounds %Graph, %Graph* %28, i32 0, i32 0
  store i32 3, i32* %29
  %30 = load %Graph*, %Graph** %H
  %31 = getelementptr inbounds %Graph, %Graph* %30, i32 0, i32 1
  store i32 2, i32* %31
  %32 = load %Graph*, %Graph** %H
  %33 = getelementptr inbounds %Graph, %Graph* %32, i32 0, i32 2
  %34 = call i8* @malloc(i32 20)
  %35 = bitcast i8* %34 to i32**
  store i32** %35, i32*** %33
  %36 = load %Graph*, %Graph** %H
  %37 = call i32** @getEdge(%Graph* %36, i32 0)
  %38 = call i8* @malloc(i32 8)
  %39 = bitcast i8* %38 to i32*
  store i32* %39, i32** %37
  %40 = load %Graph*, %Graph** %H
  %41 = call i32** @getEdge(%Graph* %40, i32 1)
  %42 = call i8* @malloc(i32 8)
  %43 = bitcast i8* %42 to i32*
  store i32* %43, i32** %41
  %44 = load %Graph*, %Graph** %H
  %45 = call i32* @getEdgeTuple(%Graph* %44, i32 0, i32 0)
  store i32 1, i32* %45
  %46 = load %Graph*, %Graph** %H
  %47 = call i32* @getEdgeTuple(%Graph* %46, i32 0, i32 1)
  store i32 2, i32* %47
  %48 = load %Graph*, %Graph** %H
  %49 = call i32* @getEdgeTuple(%Graph* %48, i32 1, i32 0)
  store i32 10, i32* %49
  %50 = load %Graph*, %Graph** %H
<<<<<<< HEAD
  %51 = call i32* @getEdgeTuple(%Graph* %50, i32 1, i32 1)
  store i32 4, i32* %51
  %52 = load %Graph*, %Graph** %G
  %53 = call i32 @printEdgeList(%Graph* %52)
  %54 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @str.7, i32 0, i32 0))
  %55 = load %Graph*, %Graph** %H
  %56 = call i32 @printEdgeList(%Graph* %55)
  %57 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @str.8, i32 0, i32 0))
  %k = alloca %Permutation**
  %58 = call %Permutation** @gen_all_permutations(i32 2)
  store %Permutation** %58, %Permutation*** %k
  %i = alloca i32
  store i32 0, i32* %i
  br label %59

59:                                               ; preds = %59, %entry
  %60 = load %Permutation**, %Permutation*** %k
  %61 = load i32, i32* %i
  %62 = getelementptr %Permutation*, %Permutation** %60, i32 %61
  %63 = load %Permutation*, %Permutation** %62
  %64 = call i32 @printPermutation(%Permutation* %63)
  %65 = load i32, i32* %i
  %66 = add i32 %65, 1
  store i32 %66, i32* %i
  %67 = call i32 @factorial(i32 2)
  %68 = load i32, i32* %i
  %69 = icmp ne i32 %68, %67
  br i1 %69, label %59, label %70

70:                                               ; preds = %59
  %71 = call %Permutation** @gen_all_permutations(i32 3)
  store %Permutation** %71, %Permutation*** %k
  store i32 0, i32* %i
  br label %72

72:                                               ; preds = %72, %70
  %perm = alloca %Permutation*
  %73 = load %Permutation**, %Permutation*** %k
  %74 = load i32, i32* %i
  %75 = getelementptr %Permutation*, %Permutation** %73, i32 %74
  %76 = load %Permutation*, %Permutation** %75
  store %Permutation* %76, %Permutation** %perm
  %77 = load %Permutation*, %Permutation** %perm
  %78 = getelementptr inbounds %Permutation, %Permutation* %77, i32 0, i32 0
  %79 = load i32*, i32** %78
  %80 = getelementptr i32, i32* %79, i32 0
  %81 = load i32, i32* %80
  %82 = load %Permutation*, %Permutation** %perm
  %83 = getelementptr inbounds %Permutation, %Permutation* %82, i32 0, i32 0
  %84 = load i32*, i32** %83
  %85 = getelementptr i32, i32* %84, i32 1
  %86 = load i32, i32* %85
  %87 = load %Permutation*, %Permutation** %perm
  %88 = getelementptr inbounds %Permutation, %Permutation* %87, i32 0, i32 0
  %89 = load i32*, i32** %88
  %90 = getelementptr i32, i32* %89, i32 2
  %91 = load i32, i32* %90
  %92 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @str.9, i32 0, i32 0), i32 %81, i32 %86, i32 %91)
  %93 = load i32, i32* %i
  %94 = add i32 %93, 1
  store i32 %94, i32* %i
  %95 = call i32 @factorial(i32 3)
  %96 = load i32, i32* %i
  %97 = icmp ne i32 %96, %95
  br i1 %97, label %72, label %98

98:                                               ; preds = %72
=======
  %51 = call i32* @getEdgeTuple(%Graph* %50, i32 0, i32 1)
  store i32 2, i32* %51
  %52 = load %Graph*, %Graph** %H
  %53 = call i32* @getEdgeTuple(%Graph* %52, i32 1, i32 0)
  store i32 10, i32* %53
  %54 = load %Graph*, %Graph** %H
  %55 = call i32* @getEdgeTuple(%Graph* %54, i32 1, i32 1)
  store i32 4, i32* %55
  %56 = load %Graph*, %Graph** %G
  %57 = call i32 @printEdgeList(%Graph* %56)
  %58 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @str.1, i32 0, i32 0))
  %59 = load %Graph*, %Graph** %H
  %60 = call i32 @printEdgeList(%Graph* %59)
  %61 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @str.2, i32 0, i32 0))
  %62 = call %Permutation** @gen_all_permutations(i32 1)
>>>>>>> 183fdc1 (.)
  ret i32 0
}
