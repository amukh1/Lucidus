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
@str.4 = private constant [22 x i8] c"--------------------\0A\00"
@str.5 = private constant [22 x i8] c"--------------------\0A\00"

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
  br label %11

10:                                               ; preds = %entry
  br label %11

11:                                               ; preds = %10, %9
  %12 = load %Graph*, %Graph** %H
  %13 = getelementptr inbounds %Graph, %Graph* %12, i32 0, i32 1
  %14 = load i32, i32* %13
  %15 = load %Graph*, %Graph** %G
  %16 = getelementptr inbounds %Graph, %Graph* %15, i32 0, i32 1
  %17 = load i32, i32* %16
  %18 = icmp ne i32 %17, %14
  br i1 %18, label %19, label %20

19:                                               ; preds = %11
  ret i32 0
  br label %21

20:                                               ; preds = %11
  br label %21

21:                                               ; preds = %20, %19
  %i = alloca i32
  store i32 0, i32* %i
  br label %22

22:                                               ; preds = %63, %21
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
  br i1 %39, label %41, label %42

40:                                               ; preds = %63
  ret i32 1

41:                                               ; preds = %22
  ret i32 0
  br label %43

42:                                               ; preds = %22
  br label %43

43:                                               ; preds = %42, %41
  %44 = load %Graph*, %Graph** %H
  %45 = getelementptr inbounds %Graph, %Graph* %44, i32 0, i32 2
  %46 = load i32**, i32*** %45
  %47 = load i32, i32* %i
  %48 = getelementptr i32*, i32** %46, i32 %47
  %49 = load i32*, i32** %48
  %50 = getelementptr i32, i32* %49, i32 1
  %51 = load i32, i32* %50
  %52 = load %Graph*, %Graph** %G
  %53 = getelementptr inbounds %Graph, %Graph* %52, i32 0, i32 2
  %54 = load i32**, i32*** %53
  %55 = load i32, i32* %i
  %56 = getelementptr i32*, i32** %54, i32 %55
  %57 = load i32*, i32** %56
  %58 = getelementptr i32, i32* %57, i32 1
  %59 = load i32, i32* %58
  %60 = icmp ne i32 %59, %51
  br i1 %60, label %61, label %62

61:                                               ; preds = %43
  ret i32 0
  br label %63

62:                                               ; preds = %43
  br label %63

63:                                               ; preds = %62, %61
  %64 = load i32, i32* %i
  %65 = add i32 %64, 1
  store i32 %65, i32* %i
  %66 = load %Graph*, %Graph** %G
  %67 = getelementptr inbounds %Graph, %Graph* %66, i32 0, i32 1
  %68 = load i32, i32* %67
  %69 = load i32, i32* %i
  %70 = icmp ne i32 %69, %68
  br i1 %70, label %22, label %40
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
  %10 = call i32** @getEdge(%Graph** %G, i32 0)
  %11 = call i8* @malloc(i32 8)
  %12 = bitcast i8* %11 to i32*
  store i32* %12, i32** %10
  %13 = call i32** @getEdge(%Graph** %G, i32 1)
  %14 = call i8* @malloc(i32 8)
  %15 = bitcast i8* %14 to i32*
  store i32* %15, i32** %13
  %16 = call i32* @getEdgeTuple(%Graph** %G, i32 0, i32 0)
  store i32 4, i32* %16
  %17 = call i32* @getEdgeTuple(%Graph** %G, i32 0, i32 1)
  store i32 10, i32* %17
  %18 = call i32* @getEdgeTuple(%Graph** %G, i32 1, i32 0)
  store i32 1, i32* %18
  %19 = call i32* @getEdgeTuple(%Graph** %G, i32 1, i32 1)
  store i32 2, i32* %19
  %H = alloca %Graph*
  %20 = call i8* @malloc(i32 16)
  %21 = bitcast i8* %20 to %Graph*
  store %Graph* %21, %Graph** %H
  %22 = load %Graph*, %Graph** %H
  %23 = getelementptr inbounds %Graph, %Graph* %22, i32 0, i32 0
  store i32 3, i32* %23
  %24 = load %Graph*, %Graph** %H
  %25 = getelementptr inbounds %Graph, %Graph* %24, i32 0, i32 1
  store i32 2, i32* %25
  %26 = load %Graph*, %Graph** %H
  %27 = getelementptr inbounds %Graph, %Graph* %26, i32 0, i32 2
  %28 = call i8* @malloc(i32 20)
  %29 = bitcast i8* %28 to i32**
  store i32** %29, i32*** %27
  %30 = call i32** @getEdge(%Graph** %H, i32 0)
  %31 = call i8* @malloc(i32 8)
  %32 = bitcast i8* %31 to i32*
  store i32* %32, i32** %30
  %33 = call i32** @getEdge(%Graph** %H, i32 1)
  %34 = call i8* @malloc(i32 8)
  %35 = bitcast i8* %34 to i32*
  store i32* %35, i32** %33
  %36 = call i32* @getEdgeTuple(%Graph** %H, i32 0, i32 0)
  store i32 1, i32* %36
  %37 = call i32* @getEdgeTuple(%Graph** %H, i32 0, i32 1)
  store i32 2, i32* %37
  %38 = call i32* @getEdgeTuple(%Graph** %H, i32 1, i32 0)
  store i32 10, i32* %38
  %39 = call i32* @getEdgeTuple(%Graph** %H, i32 1, i32 1)
  store i32 4, i32* %39
  %40 = load %Graph*, %Graph** %G
  %41 = call i32 @printEdgeList(%Graph* %40)
  %42 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @str.4, i32 0, i32 0))
  %43 = load %Graph*, %Graph** %H
  %44 = call i32 @printEdgeList(%Graph* %43)
  %45 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @str.5, i32 0, i32 0))
  ret i32 0
}
