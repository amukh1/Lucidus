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
@str.1 = private constant [22 x i8] c"--------------------\0A\00"
@str.2 = private constant [22 x i8] c"--------------------\0A\00"

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

define %Permutation** @gen_all_permutations(i32 %0) {
entry:
  %n = alloca i32
  store i32 %0, i32* %n
  %1 = load i32, i32* %n
  %2 = icmp eq i32 %1, 1
  br i1 %2, label %3, label %22

3:                                                ; preds = %entry
  %v = alloca %Permutation**
  %4 = call i8* @malloc(i32 4)
  %5 = bitcast i8* %4 to %Permutation**
  store %Permutation** %5, %Permutation*** %v
  %6 = call i8* @malloc(i32 4)
  %7 = bitcast i8* %6 to %Permutation**
  %8 = load %Permutation**, %Permutation*** %v
  %9 = load %Permutation*, %Permutation** %8
  %10 = getelementptr inbounds %Permutation, %Permutation* %9, i32 0, i32 0
  %11 = call i8* @malloc(i32 4)
  %12 = bitcast i8* %11 to i32*
  store i32* %12, i32** %10
  %13 = load %Permutation**, %Permutation*** %v
  %14 = load %Permutation*, %Permutation** %13
  %15 = getelementptr inbounds %Permutation, %Permutation* %14, i32 0, i32 1
  store i32 1, i32* %15
  %16 = load %Permutation**, %Permutation*** %v
  %17 = load %Permutation*, %Permutation** %16
  %18 = getelementptr inbounds %Permutation, %Permutation* %17, i32 0, i32 0
  %19 = load i32*, i32** %18
  %20 = getelementptr i32, i32* %19, i32 0
  store i32 1, i32* %20
  %21 = load %Permutation**, %Permutation*** %v
  ret %Permutation** %21

22:                                               ; preds = %entry
  %v1 = alloca %Permutation**
  %23 = load i32, i32* %n
  %24 = call i32 @factorial(i32 %23)
  %25 = mul i32 4, %24
  %26 = call i8* @malloc(i32 %25)
  %27 = bitcast i8* %26 to %Permutation**
  store %Permutation** %27, %Permutation*** %v1
  %28 = load i32, i32* %n
  %29 = call i32 @factorial(i32 %28)
  %30 = mul i32 4, %29
  %31 = call i8* @malloc(i32 %30)
  %32 = bitcast i8* %31 to %Permutation**
  %i = alloca i32
  store i32 1, i32* %i
  %last_permutations = alloca %Permutation**
  %33 = load i32, i32* %n
  %34 = sub i32 %33, 1
  %35 = call i32 @factorial(i32 %34)
  %36 = mul i32 4, %35
  %37 = call i8* @malloc(i32 %36)
  %38 = bitcast i8* %37 to %Permutation**
  store %Permutation** %38, %Permutation*** %last_permutations
  %39 = load i32, i32* %n
  %40 = sub i32 %39, 1
  %41 = call i32 @factorial(i32 %40)
  %42 = mul i32 4, %41
  %43 = call i8* @malloc(i32 %42)
  %44 = bitcast i8* %43 to %Permutation**
  %45 = load i32, i32* %n
  %46 = sub i32 %45, 1
  %47 = call %Permutation** @gen_all_permutations(i32 %46)
  store %Permutation** %47, %Permutation*** %last_permutations
  br label %48

48:                                               ; preds = %77, %22
  %perms = alloca %Permutation**
  %49 = load i32, i32* %n
  %50 = sub i32 %49, 1
  %51 = call i32 @factorial(i32 %50)
  %52 = mul i32 4, %51
  %53 = call i8* @malloc(i32 %52)
  %54 = bitcast i8* %53 to %Permutation**
  store %Permutation** %54, %Permutation*** %perms
  %55 = load i32, i32* %n
  %56 = sub i32 %55, 1
  %57 = call i32 @factorial(i32 %56)
  %58 = mul i32 4, %57
  %59 = call i8* @malloc(i32 %58)
  %60 = bitcast i8* %59 to %Permutation**
  %j = alloca i32
  store i32 1, i32* %j
  br label %63

61:                                               ; preds = %77
  %62 = load %Permutation**, %Permutation*** %v1
  ret %Permutation** %62

63:                                               ; preds = %88, %48
  %perm = alloca %Permutation*
  %64 = call i8* @malloc(i32 8)
  %65 = bitcast i8* %64 to %Permutation*
  store %Permutation* %65, %Permutation** %perm
  %66 = call i8* @malloc(i32 8)
  %67 = bitcast i8* %66 to %Permutation*
  %68 = load %Permutation*, %Permutation** %perm
  %69 = getelementptr inbounds %Permutation, %Permutation* %68, i32 0, i32 0
  %70 = load i32, i32* %n
  %71 = mul i32 4, %70
  %72 = call i8* @malloc(i32 %71)
  %73 = bitcast i8* %72 to i32*
  store i32* %73, i32** %69
  %74 = load %Permutation*, %Permutation** %perm
  %75 = getelementptr inbounds %Permutation, %Permutation* %74, i32 0, i32 1
  %76 = load i32, i32* %n
  store i32 %76, i32* %75
  %h = alloca i32
  store i32 1, i32* %h
  %k = alloca i32
  store i32 1, i32* %k
  br label %84

77:                                               ; preds = %88
  %78 = load i32, i32* %i
  %79 = add i32 %78, 1
  store i32 %79, i32* %i
  %80 = load i32, i32* %n
  %81 = add i32 %80, 1
  %82 = load i32, i32* %i
  %83 = icmp ne i32 %82, %81
  br i1 %83, label %48, label %61

84:                                               ; preds = %137, %63
  %85 = load i32, i32* %i
  %86 = load i32, i32* %k
  %87 = icmp eq i32 %86, %85
  br i1 %87, label %97, label %105

88:                                               ; preds = %137
  %89 = load i32, i32* %j
  %90 = add i32 %89, 1
  store i32 %90, i32* %j
  %91 = load i32, i32* %n
  %92 = sub i32 %91, 1
  %93 = call i32 @factorial(i32 %92)
  %94 = add i32 %93, 1
  %95 = load i32, i32* %j
  %96 = icmp ne i32 %95, %94
  br i1 %96, label %63, label %77

97:                                               ; preds = %84
  %98 = load %Permutation*, %Permutation** %perm
  %99 = getelementptr inbounds %Permutation, %Permutation* %98, i32 0, i32 0
  %100 = load i32*, i32** %99
  %101 = load i32, i32* %k
  %102 = sub i32 %101, 1
  %103 = getelementptr i32, i32* %100, i32 %102
  %104 = load i32, i32* %i
  store i32 %104, i32* %103
  br label %105

105:                                              ; preds = %97, %84
  %106 = load i32, i32* %i
  %107 = load i32, i32* %k
  %108 = icmp ne i32 %107, %106
  br i1 %108, label %109, label %137

109:                                              ; preds = %105
  %permutat = alloca %Permutation**
  %110 = load %Permutation**, %Permutation*** %last_permutations
  %111 = load i32, i32* %j
  %112 = sub i32 %111, 1
  %113 = getelementptr %Permutation*, %Permutation** %110, i32 %112
  store %Permutation** %113, %Permutation*** %permutat
  %114 = load %Permutation**, %Permutation*** %last_permutations
  %115 = load i32, i32* %j
  %116 = sub i32 %115, 1
  %117 = getelementptr %Permutation*, %Permutation** %114, i32 %116
  %118 = load %Permutation*, %Permutation** %perm
  %119 = getelementptr inbounds %Permutation, %Permutation* %118, i32 0, i32 0
  %120 = load i32*, i32** %119
  %121 = load i32, i32* %k
  %122 = sub i32 %121, 1
  %123 = getelementptr i32, i32* %120, i32 %122
  %124 = load %Permutation**, %Permutation*** %last_permutations
  %125 = load i32, i32* %j
  %126 = sub i32 %125, 1
  %127 = getelementptr %Permutation*, %Permutation** %124, i32 %126
  %128 = load %Permutation*, %Permutation** %127
  %129 = getelementptr inbounds %Permutation, %Permutation* %128, i32 0, i32 0
  %130 = load i32*, i32** %129
  %131 = load i32, i32* %h
  %132 = sub i32 %131, 1
  %133 = getelementptr i32, i32* %130, i32 %132
  %134 = load i32, i32* %133
  store i32 %134, i32* %123
  %135 = load i32, i32* %h
  %136 = add i32 %135, 1
  store i32 %136, i32* %h
  br label %137

137:                                              ; preds = %109, %105
  %138 = load i32, i32* %k
  %139 = add i32 %138, 1
  store i32 %139, i32* %k
  %140 = load i32, i32* %n
  %141 = call i32 @factorial(i32 %140)
  %142 = add i32 %141, 1
  %143 = load i32, i32* %k
  %144 = icmp ne i32 %143, %142
  br i1 %144, label %84, label %88
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
  %G = alloca %Graph*
  %0 = call i8* @malloc(i32 16)
  %1 = bitcast i8* %0 to %Graph*
  store %Graph* %1, %Graph** %G
  %2 = call i8* @malloc(i32 16)
  %3 = bitcast i8* %2 to %Graph*
  %4 = load %Graph*, %Graph** %G
  %5 = getelementptr inbounds %Graph, %Graph* %4, i32 0, i32 0
  store i32 3, i32* %5
  %6 = load %Graph*, %Graph** %G
  %7 = getelementptr inbounds %Graph, %Graph* %6, i32 0, i32 1
  store i32 2, i32* %7
  %8 = load %Graph*, %Graph** %G
  %9 = getelementptr inbounds %Graph, %Graph* %8, i32 0, i32 2
  %10 = call i8* @malloc(i32 20)
  %11 = bitcast i8* %10 to i32**
  store i32** %11, i32*** %9
  %12 = load %Graph*, %Graph** %G
  %13 = call i32** @getEdge(%Graph* %12, i32 0)
  %14 = call i8* @malloc(i32 8)
  %15 = bitcast i8* %14 to i32*
  store i32* %15, i32** %13
  %16 = load %Graph*, %Graph** %G
  %17 = call i32** @getEdge(%Graph* %16, i32 1)
  %18 = call i8* @malloc(i32 8)
  %19 = bitcast i8* %18 to i32*
  store i32* %19, i32** %17
  %20 = load %Graph*, %Graph** %G
  %21 = call i32* @getEdgeTuple(%Graph* %20, i32 0, i32 0)
  store i32 4, i32* %21
  %22 = load %Graph*, %Graph** %G
  %23 = call i32* @getEdgeTuple(%Graph* %22, i32 0, i32 1)
  store i32 10, i32* %23
  %24 = load %Graph*, %Graph** %G
  %25 = call i32* @getEdgeTuple(%Graph* %24, i32 1, i32 0)
  store i32 1, i32* %25
  %26 = load %Graph*, %Graph** %G
  %27 = call i32* @getEdgeTuple(%Graph* %26, i32 1, i32 1)
  store i32 2, i32* %27
  %H = alloca %Graph*
  %28 = call i8* @malloc(i32 16)
  %29 = bitcast i8* %28 to %Graph*
  store %Graph* %29, %Graph** %H
  %30 = call i8* @malloc(i32 16)
  %31 = bitcast i8* %30 to %Graph*
  %32 = load %Graph*, %Graph** %H
  %33 = getelementptr inbounds %Graph, %Graph* %32, i32 0, i32 0
  store i32 3, i32* %33
  %34 = load %Graph*, %Graph** %H
  %35 = getelementptr inbounds %Graph, %Graph* %34, i32 0, i32 1
  store i32 2, i32* %35
  %36 = load %Graph*, %Graph** %H
  %37 = getelementptr inbounds %Graph, %Graph* %36, i32 0, i32 2
  %38 = call i8* @malloc(i32 20)
  %39 = bitcast i8* %38 to i32**
  store i32** %39, i32*** %37
  %40 = load %Graph*, %Graph** %H
  %41 = call i32** @getEdge(%Graph* %40, i32 0)
  %42 = call i8* @malloc(i32 8)
  %43 = bitcast i8* %42 to i32*
  store i32* %43, i32** %41
  %44 = load %Graph*, %Graph** %H
  %45 = call i32** @getEdge(%Graph* %44, i32 1)
  %46 = call i8* @malloc(i32 8)
  %47 = bitcast i8* %46 to i32*
  store i32* %47, i32** %45
  %48 = load %Graph*, %Graph** %H
  %49 = call i32* @getEdgeTuple(%Graph* %48, i32 0, i32 0)
  store i32 1, i32* %49
  %50 = load %Graph*, %Graph** %H
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
  %k = alloca %Permutation**
  %63 = call %Permutation** @gen_all_permutations(i32 2)
  store %Permutation** %63, %Permutation*** %k
  %64 = call %Permutation** @gen_all_permutations(i32 2)
  %i = alloca i32
  store i32 0, i32* %i
  br label %65

65:                                               ; preds = %65, %entry
  %perm = alloca %Permutation*
  %66 = load %Permutation**, %Permutation*** %k
  %67 = load i32, i32* %i
  %68 = getelementptr %Permutation*, %Permutation** %66, i32 %67
  %69 = load %Permutation*, %Permutation** %68
  store %Permutation* %69, %Permutation** %perm
  %70 = load %Permutation**, %Permutation*** %k
  %71 = load i32, i32* %i
  %72 = getelementptr %Permutation*, %Permutation** %70, i32 %71
  %73 = load %Permutation*, %Permutation** %72
  %74 = load %Permutation*, %Permutation** %perm
  %75 = getelementptr inbounds %Permutation, %Permutation* %74, i32 0, i32 0
  %76 = load i32*, i32** %75
  %77 = getelementptr i32, i32* %76, i32 0
  %78 = load i32, i32* %i
  %79 = add i32 %78, 1
  store i32 %79, i32* %i
  %80 = load i32, i32* %i
  %81 = icmp ne i32 %80, 2
  br i1 %81, label %65, label %82

82:                                               ; preds = %65
  ret i32 0
}
