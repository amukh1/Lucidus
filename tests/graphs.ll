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

while_i:                                          ; preds = %123, %19
  %28 = load %Graph*, %Graph** %G
  %29 = getelementptr inbounds %Graph, %Graph* %28, i32 0, i32 1
  %30 = load i32, i32* %29
  %31 = load i32, i32* %i
  %32 = icmp eq i32 %31, %30
  br i1 %32, label %33, label %34

33:                                               ; preds = %while_i
  br label %while_i_end

34:                                               ; preds = %while_i
  %G_edge = alloca i32*
  %35 = load i32, i32* %i
  %36 = mul i32 %35, 4
  %37 = load i32**, i32*** %G_edges
  %38 = ptrtoint i32** %37 to i32
  %39 = add i32 %38, %36
  %40 = inttoptr i32 %39 to i32*
  store i32* %40, i32** %G_edge
  %41 = load i32, i32* %i
  %42 = mul i32 %41, 4
  %43 = load i32**, i32*** %G_edges
  %44 = ptrtoint i32** %43 to i32
  %45 = add i32 %44, %42
  %46 = inttoptr i32 %45 to i32*
  %G_edge_0 = alloca i32
  %47 = load i32*, i32** %G_edge
  %48 = ptrtoint i32* %47 to i32
  %49 = add i32 %48, 0
  %50 = inttoptr i32 %49 to i32*
  %51 = load i32, i32* %50
  store i32 %51, i32* %G_edge_0
  %52 = load i32*, i32** %G_edge
  %53 = ptrtoint i32* %52 to i32
  %54 = add i32 %53, 0
  %55 = inttoptr i32 %54 to i32*
  %56 = load i32, i32* %55
  %G_edge_1 = alloca i32
  %57 = load i32*, i32** %G_edge
  %58 = ptrtoint i32* %57 to i32
  %59 = add i32 %58, 4
  %60 = inttoptr i32 %59 to i32*
  %61 = load i32, i32* %60
  store i32 %61, i32* %G_edge_1
  %62 = load i32*, i32** %G_edge
  %63 = ptrtoint i32* %62 to i32
  %64 = add i32 %63, 4
  %65 = inttoptr i32 %64 to i32*
  %66 = load i32, i32* %65
  %j = alloca i32
  store i32 0, i32* %j
  %firstsMatch = alloca i32
  store i32 0, i32* %firstsMatch
  %secondsMatch = alloca i32
  store i32 0, i32* %secondsMatch
  br label %while_i_two

while_i_end:                                      ; preds = %33
  ret i32 1

while_i_two:                                      ; preds = %115, %34
  %67 = load %Graph*, %Graph** %H
  %68 = getelementptr inbounds %Graph, %Graph* %67, i32 0, i32 1
  %69 = load i32, i32* %68
  %70 = load i32, i32* %j
  %71 = icmp eq i32 %70, %69
  br i1 %71, label %72, label %73

72:                                               ; preds = %while_i_two
  br label %while_i_two_end

73:                                               ; preds = %while_i_two
  %H_edge = alloca i32*
  %74 = load i32, i32* %j
  %75 = mul i32 %74, 4
  %76 = load %Graph*, %Graph** %H
  %77 = getelementptr inbounds %Graph, %Graph* %76, i32 0, i32 2
  %78 = load i32**, i32*** %77
  %79 = ptrtoint i32** %78 to i32
  %80 = add i32 %79, %75
  %81 = inttoptr i32 %80 to i32*
  store i32* %81, i32** %H_edge
  %82 = load i32, i32* %j
  %83 = mul i32 %82, 4
  %84 = load %Graph*, %Graph** %H
  %85 = getelementptr inbounds %Graph, %Graph* %84, i32 0, i32 2
  %86 = load i32**, i32*** %85
  %87 = ptrtoint i32** %86 to i32
  %88 = add i32 %87, %83
  %89 = inttoptr i32 %88 to i32*
  %H_edge_0 = alloca i32
  %90 = load i32*, i32** %H_edge
  %91 = load i32, i32* %90
  store i32 %91, i32* %H_edge_0
  %92 = load i32*, i32** %H_edge
  %93 = load i32, i32* %92
  %H_edge_1 = alloca i32
  %94 = load i32*, i32** %H_edge
  %95 = ptrtoint i32* %94 to i32
  %96 = add i32 %95, 4
  %97 = inttoptr i32 %96 to i32*
  %98 = load i32, i32* %97
  store i32 %98, i32* %H_edge_1
  %99 = load i32*, i32** %H_edge
  %100 = ptrtoint i32* %99 to i32
  %101 = add i32 %100, 4
  %102 = inttoptr i32 %101 to i32*
  %103 = load i32, i32* %102
  %104 = load i32, i32* %H_edge_0
  %105 = load i32, i32* %G_edge_0
  %106 = icmp eq i32 %105, %104
  br i1 %106, label %109, label %110

while_i_two_end:                                  ; preds = %72
  %107 = load i32, i32* %firstsMatch
  %108 = icmp ne i32 %107, 1
  br i1 %108, label %118, label %119

109:                                              ; preds = %73
  store i32 1, i32* %firstsMatch
  br label %110

110:                                              ; preds = %109, %73
  %111 = load i32, i32* %H_edge_1
  %112 = load i32, i32* %G_edge_1
  %113 = icmp eq i32 %112, %111
  br i1 %113, label %114, label %115

114:                                              ; preds = %110
  store i32 1, i32* %secondsMatch
  br label %115

115:                                              ; preds = %114, %110
  %116 = load i32, i32* %j
  %117 = add i32 %116, 1
  store i32 %117, i32* %j
  br label %while_i_two

118:                                              ; preds = %while_i_two_end
  ret i32 0

119:                                              ; preds = %while_i_two_end
  %120 = load i32, i32* %secondsMatch
  %121 = icmp ne i32 %120, 1
  br i1 %121, label %122, label %123

122:                                              ; preds = %119
  ret i32 0

123:                                              ; preds = %119
  %124 = load i32, i32* %i
  %125 = add i32 %124, 1
  store i32 %125, i32* %i
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
  store i32 0, i32* %49
  %50 = load %Graph*, %Graph** %H
  %51 = call i32* @getEdgeTuple(%Graph* %50, i32 0, i32 1)
  store i32 2, i32* %51
  %52 = load %Graph*, %Graph** %H
  %53 = call i32* @getEdgeTuple(%Graph* %52, i32 1, i32 0)
  store i32 1, i32* %53
  %54 = load %Graph*, %Graph** %H
  %55 = call i32* @getEdgeTuple(%Graph* %54, i32 1, i32 1)
  store i32 2, i32* %55
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
