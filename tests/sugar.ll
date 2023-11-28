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
@str.1 = private constant [22 x i8] c"pointer_to_thing: %d\0A\00"
@str.2 = private constant [4 x i8] c"%d\0A\00"

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
  br i1 %2, label %3, label %17

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
  ret %Permutation** %16

17:                                               ; preds = %entry
  %v1 = alloca %Permutation**
  %18 = load i32, i32* %n
  %19 = call i32 @factorial(i32 %18)
  %20 = mul i32 4, %19
  %21 = call i8* @malloc(i32 %20)
  %22 = bitcast i8* %21 to %Permutation**
  store %Permutation** %22, %Permutation*** %v1
  %23 = load i32, i32* %n
  %24 = call i32 @factorial(i32 %23)
  %25 = mul i32 4, %24
  %26 = call i8* @malloc(i32 %25)
  %27 = bitcast i8* %26 to %Permutation**
  %i = alloca i32
  store i32 1, i32* %i
  %last_permutations = alloca %Permutation**
  %28 = load i32, i32* %n
  %29 = sub i32 %28, 1
  %30 = call i32 @factorial(i32 %29)
  %31 = mul i32 4, %30
  %32 = call i8* @malloc(i32 %31)
  %33 = bitcast i8* %32 to %Permutation**
  store %Permutation** %33, %Permutation*** %last_permutations
  %34 = load i32, i32* %n
  %35 = sub i32 %34, 1
  %36 = call i32 @factorial(i32 %35)
  %37 = mul i32 4, %36
  %38 = call i8* @malloc(i32 %37)
  %39 = bitcast i8* %38 to %Permutation**
  %40 = load i32, i32* %n
  %41 = sub i32 %40, 1
  %42 = call %Permutation** @gen_all_permutations(i32 %41)
  store %Permutation** %42, %Permutation*** %last_permutations
  br label %43

43:                                               ; preds = %72, %17
  %perms = alloca %Permutation**
  %44 = load i32, i32* %n
  %45 = sub i32 %44, 1
  %46 = call i32 @factorial(i32 %45)
  %47 = mul i32 4, %46
  %48 = call i8* @malloc(i32 %47)
  %49 = bitcast i8* %48 to %Permutation**
  store %Permutation** %49, %Permutation*** %perms
  %50 = load i32, i32* %n
  %51 = sub i32 %50, 1
  %52 = call i32 @factorial(i32 %51)
  %53 = mul i32 4, %52
  %54 = call i8* @malloc(i32 %53)
  %55 = bitcast i8* %54 to %Permutation**
  %j = alloca i32
  store i32 1, i32* %j
  br label %58

56:                                               ; preds = %72
  %57 = load %Permutation**, %Permutation*** %v1
  ret %Permutation** %57

58:                                               ; preds = %83, %43
  %perm = alloca %Permutation*
  %59 = call i8* @malloc(i32 8)
  %60 = bitcast i8* %59 to %Permutation*
  store %Permutation* %60, %Permutation** %perm
  %61 = call i8* @malloc(i32 8)
  %62 = bitcast i8* %61 to %Permutation*
  %63 = load %Permutation*, %Permutation** %perm
  %64 = getelementptr inbounds %Permutation, %Permutation* %63, i32 0, i32 0
  %65 = load i32, i32* %n
  %66 = mul i32 4, %65
  %67 = call i8* @malloc(i32 %66)
  %68 = bitcast i8* %67 to i32*
  store i32* %68, i32** %64
  %69 = load %Permutation*, %Permutation** %perm
  %70 = getelementptr inbounds %Permutation, %Permutation* %69, i32 0, i32 1
  %71 = load i32, i32* %n
  store i32 %71, i32* %70
  %h = alloca i32
  store i32 1, i32* %h
  %k = alloca i32
  store i32 1, i32* %k
  br label %79

72:                                               ; preds = %83
  %73 = load i32, i32* %i
  %74 = add i32 %73, 1
  store i32 %74, i32* %i
  %75 = load i32, i32* %n
  %76 = add i32 %75, 1
  %77 = load i32, i32* %i
  %78 = icmp ne i32 %77, %76
  br i1 %78, label %43, label %56

79:                                               ; preds = %132, %58
  %80 = load i32, i32* %i
  %81 = load i32, i32* %k
  %82 = icmp eq i32 %81, %80
  br i1 %82, label %92, label %104

83:                                               ; preds = %132
  %84 = load i32, i32* %j
  %85 = add i32 %84, 1
  store i32 %85, i32* %j
  %86 = load i32, i32* %n
  %87 = sub i32 %86, 1
  %88 = call i32 @factorial(i32 %87)
  %89 = add i32 %88, 1
  %90 = load i32, i32* %j
  %91 = icmp ne i32 %90, %89
  br i1 %91, label %58, label %72

92:                                               ; preds = %79
  %93 = load i32, i32* %k
  %94 = sub i32 %93, 1
  %95 = mul i32 %94, 4
  %96 = load %Permutation*, %Permutation** %perm
  %97 = getelementptr inbounds %Permutation, %Permutation* %96, i32 0, i32 0
  %98 = ptrtoint i32** %97 to i32
  %99 = add i32 %98, %95
  %100 = inttoptr i32 %99 to i32*
  %101 = load i32, i32* %i
  store i32 %101, i32* %100
  %102 = load i32, i32* %k
  %103 = add i32 %102, 1
  store i32 %103, i32* %k
  br label %104

104:                                              ; preds = %92, %79
  %105 = load i32, i32* %i
  %106 = load i32, i32* %k
  %107 = icmp ne i32 %106, %105
  br i1 %107, label %108, label %132

108:                                              ; preds = %104
  %permutat = alloca %Permutation**
  %109 = load i32, i32* %j
  %110 = sub i32 %109, 1
  %111 = mul i32 %110, 4
  %112 = load %Permutation**, %Permutation*** %last_permutations
  %113 = ptrtoint %Permutation** %112 to i32
  %114 = add i32 %113, %111
  %115 = inttoptr i32 %114 to %Permutation**
  store %Permutation** %115, %Permutation*** %permutat
  %116 = load i32, i32* %j
  %117 = sub i32 %116, 1
  %118 = mul i32 %117, 4
  %119 = load %Permutation**, %Permutation*** %last_permutations
  %120 = ptrtoint %Permutation** %119 to i32
  %121 = add i32 %120, %118
  %122 = inttoptr i32 %121 to %Permutation**
  %123 = load %Permutation**, %Permutation*** %permutat
  %124 = load %Permutation*, %Permutation** %123
  %125 = load i32, i32* %h
  %126 = call i32 @permute(%Permutation* %124, i32 %125)
  %127 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @str.1, i32 0, i32 0), i32 %126)
  %128 = load i32, i32* %h
  %129 = add i32 %128, 1
  store i32 %129, i32* %h
  %130 = load i32, i32* %k
  %131 = add i32 %130, 1
  store i32 %131, i32* %k
  br label %132

132:                                              ; preds = %108, %104
  %133 = load i32, i32* %n
  %134 = call i32 @factorial(i32 %133)
  %135 = add i32 %134, 1
  %136 = load i32, i32* %h
  %137 = icmp ne i32 %136, %135
  br i1 %137, label %79, label %83
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
  %v = alloca i32*
  %0 = call i8* @malloc(i32 12)
  %1 = bitcast i8* %0 to i32*
  store i32* %1, i32** %v
  %2 = call i8* @malloc(i32 12)
  %3 = bitcast i8* %2 to i32*
  %4 = load i32*, i32** %v
  %5 = getelementptr i32, i32* %4, i32 0
  store i32 1, i32* %5
  %6 = load i32*, i32** %v
  %7 = getelementptr i32, i32* %6, i32 0
  %8 = load i32, i32* %7
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.2, i32 0, i32 0), i32 %8)
  ret i32 0
}
