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
@str.1 = private constant [15 x i8] c"Hello, World!\0A\00"
@str.2 = private constant [17 x i8] c"x is equal to y\0A\00"
@str.3 = private constant [20 x i8] c"x is not equal to y\00"

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
  br label %while

while:                                            ; preds = %7, %entry
  %1 = load %Graph*, %Graph** %G
  %2 = getelementptr inbounds %Graph, %Graph* %1, i32 0, i32 1
  %3 = load i32, i32* %2
  %4 = load i32, i32* %i
  %5 = icmp eq i32 %4, %3
  br i1 %5, label %6, label %7

6:                                                ; preds = %while
  br label %while_end

7:                                                ; preds = %while
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
  br label %while

while_end:                                        ; preds = %6
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
  %10 = load i32, i32* %i
  %11 = mul i32 %10, 4
  %12 = load %Graph*, %Graph** %G
  %13 = getelementptr inbounds %Graph, %Graph* %12, i32 0, i32 2
  %14 = load i32**, i32*** %13
  %15 = ptrtoint i32** %14 to i32
  %16 = add i32 %15, %11
  %17 = inttoptr i32 %16 to i32*
  %edge = alloca i32**
  %18 = load i32*, i32** %edge_temp
  %19 = bitcast i32* %18 to i32**
  store i32** %19, i32*** %edge
  %20 = load i32*, i32** %edge_temp
  %21 = bitcast i32* %20 to i32**
  %22 = load i32**, i32*** %edge
  ret i32** %22
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
  %11 = load i32, i32* %i
  %12 = mul i32 %11, 4
  %13 = load %Graph*, %Graph** %G
  %14 = getelementptr inbounds %Graph, %Graph* %13, i32 0, i32 2
  %15 = load i32**, i32*** %14
  %16 = ptrtoint i32** %15 to i32
  %17 = add i32 %16, %12
  %18 = inttoptr i32 %17 to i32*
  %edge = alloca i32**
  %19 = load i32*, i32** %edge_temp
  %20 = bitcast i32* %19 to i32**
  store i32** %20, i32*** %edge
  %21 = load i32*, i32** %edge_temp
  %22 = bitcast i32* %21 to i32**
  %p = alloca i32*
  %23 = load i32, i32* %j
  %24 = mul i32 %23, 4
  %25 = load i32**, i32*** %edge
  %26 = load i32*, i32** %25
  %27 = ptrtoint i32* %26 to i32
  %28 = add i32 %27, %24
  %29 = inttoptr i32 %28 to i32*
  store i32* %29, i32** %p
  %30 = load i32, i32* %j
  %31 = mul i32 %30, 4
  %32 = load i32**, i32*** %edge
  %33 = load i32*, i32** %32
  %34 = ptrtoint i32* %33 to i32
  %35 = add i32 %34, %31
  %36 = inttoptr i32 %35 to i32*
  %37 = load i32*, i32** %p
  ret i32* %37
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
  %4 = call i8* @malloc(i32 8)
  %5 = bitcast i8* %4 to %Permutation*
  %6 = load %Permutation*, %Permutation** %p
  %7 = getelementptr inbounds %Permutation, %Permutation* %6, i32 0, i32 0
  %8 = load i32*, i32** %v
  store i32* %8, i32** %7
  %9 = load %Permutation*, %Permutation** %p
  %10 = getelementptr inbounds %Permutation, %Permutation* %9, i32 0, i32 1
  %11 = load i32, i32* %len
  store i32 %11, i32* %10
  %12 = load %Permutation*, %Permutation** %p
  ret %Permutation* %12
}

declare i32 @permute(%Permutation*, i32)

declare i32 @gen_all_permutations(i32)

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
  %22 = load %Graph*, %Graph** %G
  %23 = call i32** @edgeList(%Graph* %22)
  %H_edges = alloca i32**
  %24 = load %Graph*, %Graph** %H
  %25 = call i32** @edgeList(%Graph* %24)
  store i32** %25, i32*** %H_edges
  %26 = load %Graph*, %Graph** %H
  %27 = call i32** @edgeList(%Graph* %26)
  %i = alloca i32
  store i32 0, i32* %i
  br label %while_i

while_i:                                          ; preds = %95, %19
  %28 = load %Graph*, %Graph** %G
  %29 = getelementptr inbounds %Graph, %Graph* %28, i32 0, i32 1
  %30 = load i32, i32* %29
  %31 = load i32, i32* %i
  %32 = icmp eq i32 %31, %30
  br i1 %32, label %33, label %34

33:                                               ; preds = %while_i
  br label %while_i_end

34:                                               ; preds = %while_i
  %j = alloca i32
  store i32 0, i32* %j
  %firstsMatch = alloca i32
  store i32 0, i32* %firstsMatch
  %secondsMatch = alloca i32
  store i32 0, i32* %secondsMatch
  br label %while_i_two

while_i_end:                                      ; preds = %33
  ret i32 1

while_i_two:                                      ; preds = %87, %34
  %35 = load %Graph*, %Graph** %H
  %36 = getelementptr inbounds %Graph, %Graph* %35, i32 0, i32 1
  %37 = load i32, i32* %36
  %38 = load i32, i32* %j
  %39 = icmp eq i32 %38, %37
  br i1 %39, label %40, label %41

40:                                               ; preds = %while_i_two
  br label %while_i_two_end

41:                                               ; preds = %while_i_two
  %42 = load %Graph*, %Graph** %H
  %43 = load i32, i32* %j
  %44 = call i32* @getEdgeTuple(%Graph* %42, i32 %43, i32 0)
  %45 = load i32, i32* %44
  %46 = load %Graph*, %Graph** %G
  %47 = load i32, i32* %i
  %48 = call i32* @getEdgeTuple(%Graph* %46, i32 %47, i32 0)
  %49 = load i32, i32* %48
  %50 = icmp eq i32 %49, %45
  br i1 %50, label %53, label %54

while_i_two_end:                                  ; preds = %40
  %51 = load i32, i32* %firstsMatch
  %52 = icmp ne i32 %51, 1
  br i1 %52, label %90, label %91

53:                                               ; preds = %41
  store i32 1, i32* %firstsMatch
  br label %54

54:                                               ; preds = %53, %41
  %55 = load %Graph*, %Graph** %H
  %56 = load i32, i32* %j
  %57 = call i32* @getEdgeTuple(%Graph* %55, i32 %56, i32 1)
  %58 = load i32, i32* %57
  %59 = load %Graph*, %Graph** %G
  %60 = load i32, i32* %i
  %61 = call i32* @getEdgeTuple(%Graph* %59, i32 %60, i32 1)
  %62 = load i32, i32* %61
  %63 = icmp eq i32 %62, %58
  br i1 %63, label %64, label %65

64:                                               ; preds = %54
  store i32 1, i32* %secondsMatch
  br label %65

65:                                               ; preds = %64, %54
  %66 = load %Graph*, %Graph** %H
  %67 = load i32, i32* %j
  %68 = call i32* @getEdgeTuple(%Graph* %66, i32 %67, i32 1)
  %69 = load i32, i32* %68
  %70 = load %Graph*, %Graph** %G
  %71 = load i32, i32* %i
  %72 = call i32* @getEdgeTuple(%Graph* %70, i32 %71, i32 0)
  %73 = load i32, i32* %72
  %74 = icmp eq i32 %73, %69
  br i1 %74, label %75, label %76

75:                                               ; preds = %65
  store i32 1, i32* %firstsMatch
  br label %76

76:                                               ; preds = %75, %65
  %77 = load %Graph*, %Graph** %H
  %78 = load i32, i32* %j
  %79 = call i32* @getEdgeTuple(%Graph* %77, i32 %78, i32 0)
  %80 = load i32, i32* %79
  %81 = load %Graph*, %Graph** %G
  %82 = load i32, i32* %i
  %83 = call i32* @getEdgeTuple(%Graph* %81, i32 %82, i32 1)
  %84 = load i32, i32* %83
  %85 = icmp eq i32 %84, %80
  br i1 %85, label %86, label %87

86:                                               ; preds = %76
  store i32 1, i32* %secondsMatch
  br label %87

87:                                               ; preds = %86, %76
  %88 = load i32, i32* %j
  %89 = add i32 %88, 1
  store i32 %89, i32* %j
  br label %while_i_two

90:                                               ; preds = %while_i_two_end
  ret i32 0

91:                                               ; preds = %while_i_two_end
  %92 = load i32, i32* %secondsMatch
  %93 = icmp ne i32 %92, 1
  br i1 %93, label %94, label %95

94:                                               ; preds = %91
  ret i32 0

95:                                               ; preds = %91
  %96 = load i32, i32* %i
  %97 = add i32 %96, 1
  store i32 %97, i32* %i
  br label %while_i
}

declare i32 @isIsomorphic(%Graph*, %Graph*)

define i32 @main() {
entry:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @str.1, i32 0, i32 0))
  %x = alloca i32
  store i32 4, i32* %x
  %y = alloca i32
  store i32 5, i32* %y
  store i32 5, i32* %x
  %1 = load i32, i32* %y
  store i32 %1, i32* %x
  %2 = load i32, i32* %y
  %3 = load i32, i32* %x
  %4 = icmp eq i32 %3, %2
  br i1 %4, label %5, label %7

5:                                                ; preds = %entry
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @str.2, i32 0, i32 0))
  br label %7

7:                                                ; preds = %5, %entry
  %8 = load i32, i32* %y
  %9 = load i32, i32* %x
  %10 = icmp ne i32 %9, %8
  br i1 %10, label %11, label %13

11:                                               ; preds = %7
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @str.3, i32 0, i32 0))
  br label %13

13:                                               ; preds = %11, %7
  %z = alloca float
  store float 0x3FF3333340000000, float* %z
  %14 = load i32, i32* %x
  %15 = bitcast i32 %14 to float
  store float %15, float* %z
  ret i32 0
}
