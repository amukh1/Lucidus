; ModuleID = 'amukh'
source_filename = "amukh"

%Vector_int = type { i32*, i32 }
%Vector_char = type { i32*, i32 }
%Vector_string = type { i32*, i32 }
%Graph = type { i32, i32, i32** }

@Vector_int = external global %Vector_int
@Vector_char = external global %Vector_char
@Vector_string = external global %Vector_string
@Graph = external global %Graph
@str = private constant [10 x i8] c"%d -- %d\0A\00"
@str.1 = private constant [22 x i8] c"--------------------\0A\00"
@str.2 = private constant [22 x i8] c"--------------------\0A\00"
@str.3 = private constant [24 x i8] c"G and H are isomorphic\0A\00"
@str.4 = private constant [28 x i8] c"G and H are not isomorphic\0A\00"

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

define i32 @isIsomorphic(%Graph* %0, %Graph* %1) {
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
  %62 = load %Graph*, %Graph** %G
  %63 = load %Graph*, %Graph** %H
  %64 = call i32 @isIsomorphic(%Graph* %62, %Graph* %63)
  %65 = icmp eq i32 %64, 1
  br i1 %65, label %66, label %68

66:                                               ; preds = %entry
  %67 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @str.3, i32 0, i32 0))
  br label %68

68:                                               ; preds = %66, %entry
  %69 = load %Graph*, %Graph** %G
  %70 = load %Graph*, %Graph** %H
  %71 = call i32 @isIsomorphic(%Graph* %69, %Graph* %70)
  %72 = icmp eq i32 %71, 0
  br i1 %72, label %73, label %75

73:                                               ; preds = %68
  %74 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @str.4, i32 0, i32 0))
  br label %75

75:                                               ; preds = %73, %68
  ret i32 0
}
