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
@str.1 = private constant [16 x i8] c"edge match (1)\0A\00"
@str.2 = private constant [16 x i8] c"edge match (2)\0A\00"
@str.3 = private constant [22 x i8] c"--------------------\0A\00"
@str.4 = private constant [22 x i8] c"--------------------\0A\00"
@str.5 = private constant [24 x i8] c"G and H are isomorphic\0A\00"
@str.6 = private constant [28 x i8] c"G and H are not isomorphic\0A\00"

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
  %8 = load i32, i32* %i
  %9 = mul i32 %8, 4
  %10 = load %Graph*, %Graph** %G
  %11 = getelementptr inbounds %Graph, %Graph* %10, i32 0, i32 2
  %12 = load i32**, i32*** %11
  %13 = load i32*, i32** %12
  %14 = ptrtoint i32* %13 to i32
  %15 = add i32 %14, %9
  %16 = inttoptr i32 %15 to i32*
  %17 = load i32, i32* %16
  %18 = load i32, i32* %i
  %19 = mul i32 %18, 4
  %20 = load %Graph*, %Graph** %G
  %21 = getelementptr inbounds %Graph, %Graph* %20, i32 0, i32 2
  %22 = load i32**, i32*** %21
  %23 = ptrtoint i32** %22 to i32
  %24 = add i32 %23, %19
  %25 = inttoptr i32 %24 to i32*
  %26 = ptrtoint i32* %25 to i32
  %27 = add i32 %26, 4
  %28 = inttoptr i32 %27 to i32*
  %29 = load i32, i32* %28
  %30 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @str, i32 0, i32 0), i32 %17, i32 %29)
  %31 = load i32, i32* %i
  %32 = add i32 %31, 1
  store i32 %32, i32* %i
  br label %while

while_end:                                        ; preds = %6
  ret i32 0
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

while_i:                                          ; preds = %125, %19
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

while_i_two:                                      ; preds = %117, %34
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
  br i1 %106, label %109, label %111

while_i_two_end:                                  ; preds = %72
  %107 = load i32, i32* %firstsMatch
  %108 = icmp ne i32 %107, 1
  br i1 %108, label %120, label %121

109:                                              ; preds = %73
  %110 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @str.1, i32 0, i32 0))
  store i32 1, i32* %firstsMatch
  br label %111

111:                                              ; preds = %109, %73
  %112 = load i32, i32* %H_edge_1
  %113 = load i32, i32* %G_edge_1
  %114 = icmp eq i32 %113, %112
  br i1 %114, label %115, label %117

115:                                              ; preds = %111
  %116 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @str.2, i32 0, i32 0))
  store i32 1, i32* %secondsMatch
  br label %117

117:                                              ; preds = %115, %111
  %118 = load i32, i32* %j
  %119 = add i32 %118, 1
  store i32 %119, i32* %j
  br label %while_i_two

120:                                              ; preds = %while_i_two_end
  ret i32 0

121:                                              ; preds = %while_i_two_end
  %122 = load i32, i32* %secondsMatch
  %123 = icmp ne i32 %122, 1
  br i1 %123, label %124, label %125

124:                                              ; preds = %121
  ret i32 0

125:                                              ; preds = %121
  %126 = load i32, i32* %i
  %127 = add i32 %126, 1
  store i32 %127, i32* %i
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
  %edges = alloca i32**
  %8 = call i8* @malloc(i32 20)
  %9 = bitcast i8* %8 to i32**
  store i32** %9, i32*** %edges
  %10 = call i8* @malloc(i32 20)
  %11 = bitcast i8* %10 to i32**
  %12 = load %Graph*, %Graph** %G
  %13 = getelementptr inbounds %Graph, %Graph* %12, i32 0, i32 2
  %14 = load i32**, i32*** %edges
  store i32** %14, i32*** %13
  %15 = load i32**, i32*** %edges
  %16 = call i8* @malloc(i32 8)
  %17 = bitcast i8* %16 to i32*
  store i32* %17, i32** %15
  %edgesTupleOne = alloca i32*
  %18 = load i32**, i32*** %edges
  %19 = load i32*, i32** %18
  store i32* %19, i32** %edgesTupleOne
  %20 = load i32**, i32*** %edges
  %21 = load i32*, i32** %20
  %22 = load i32*, i32** %edgesTupleOne
  %23 = ptrtoint i32* %22 to i32
  %24 = add i32 %23, 0
  %25 = inttoptr i32 %24 to i32*
  store i32 0, i32* %25
  %26 = load i32*, i32** %edgesTupleOne
  %27 = ptrtoint i32* %26 to i32
  %28 = add i32 %27, 4
  %29 = inttoptr i32 %28 to i32*
  store i32 1, i32* %29
  %edgesTupleTwo = alloca i32*
  %30 = load i32**, i32*** %edges
  %31 = ptrtoint i32** %30 to i32
  %32 = add i32 %31, 4
  %33 = inttoptr i32 %32 to i32*
  store i32* %33, i32** %edgesTupleTwo
  %34 = load i32**, i32*** %edges
  %35 = ptrtoint i32** %34 to i32
  %36 = add i32 %35, 4
  %37 = inttoptr i32 %36 to i32*
  %38 = load i32*, i32** %edgesTupleTwo
  %39 = ptrtoint i32* %38 to i32
  %40 = add i32 %39, 0
  %41 = inttoptr i32 %40 to i32*
  store i32 1, i32* %41
  %42 = load i32*, i32** %edgesTupleTwo
  %43 = ptrtoint i32* %42 to i32
  %44 = add i32 %43, 4
  %45 = inttoptr i32 %44 to i32*
  store i32 2, i32* %45
  %H = alloca %Graph*
  %46 = call i8* @malloc(i32 16)
  %47 = bitcast i8* %46 to %Graph*
  store %Graph* %47, %Graph** %H
  %48 = call i8* @malloc(i32 16)
  %49 = bitcast i8* %48 to %Graph*
  %50 = load %Graph*, %Graph** %H
  %51 = getelementptr inbounds %Graph, %Graph* %50, i32 0, i32 0
  store i32 3, i32* %51
  %52 = load %Graph*, %Graph** %H
  %53 = getelementptr inbounds %Graph, %Graph* %52, i32 0, i32 1
  store i32 2, i32* %53
  %edges2 = alloca i32**
  %54 = call i8* @malloc(i32 20)
  %55 = bitcast i8* %54 to i32**
  store i32** %55, i32*** %edges2
  %56 = call i8* @malloc(i32 20)
  %57 = bitcast i8* %56 to i32**
  %58 = load %Graph*, %Graph** %H
  %59 = getelementptr inbounds %Graph, %Graph* %58, i32 0, i32 2
  %60 = load i32**, i32*** %edges2
  store i32** %60, i32*** %59
  %61 = load i32**, i32*** %edges2
  %62 = call i8* @malloc(i32 8)
  %63 = bitcast i8* %62 to i32*
  store i32* %63, i32** %61
  %edgesTupleOne2 = alloca i32*
  %64 = load i32**, i32*** %edges
  %65 = load i32*, i32** %64
  store i32* %65, i32** %edgesTupleOne2
  %66 = load i32**, i32*** %edges
  %67 = load i32*, i32** %66
  %68 = load i32*, i32** %edgesTupleOne2
  %69 = ptrtoint i32* %68 to i32
  %70 = add i32 %69, 0
  %71 = inttoptr i32 %70 to i32*
  store i32 0, i32* %71
  %72 = load i32*, i32** %edgesTupleOne2
  %73 = ptrtoint i32* %72 to i32
  %74 = add i32 %73, 4
  %75 = inttoptr i32 %74 to i32*
  store i32 1, i32* %75
  %edgesTupleTwo2 = alloca i32*
  %76 = load i32**, i32*** %edges
  %77 = ptrtoint i32** %76 to i32
  %78 = add i32 %77, 4
  %79 = inttoptr i32 %78 to i32*
  store i32* %79, i32** %edgesTupleTwo2
  %80 = load i32**, i32*** %edges
  %81 = ptrtoint i32** %80 to i32
  %82 = add i32 %81, 4
  %83 = inttoptr i32 %82 to i32*
  %84 = load i32*, i32** %edgesTupleTwo2
  %85 = ptrtoint i32* %84 to i32
  %86 = add i32 %85, 0
  %87 = inttoptr i32 %86 to i32*
  store i32 1, i32* %87
  %88 = load i32*, i32** %edgesTupleTwo2
  %89 = ptrtoint i32* %88 to i32
  %90 = add i32 %89, 4
  %91 = inttoptr i32 %90 to i32*
  store i32 2, i32* %91
  %92 = load %Graph*, %Graph** %G
  %93 = call i32 @printEdgeList(%Graph* %92)
  %94 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @str.3, i32 0, i32 0))
  %95 = load %Graph*, %Graph** %H
  %96 = call i32 @printEdgeList(%Graph* %95)
  %97 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @str.4, i32 0, i32 0))
  %98 = load %Graph*, %Graph** %G
  %99 = load %Graph*, %Graph** %H
  %100 = call i32 @isIsomorphic(%Graph* %98, %Graph* %99)
  %101 = icmp eq i32 %100, 1
  br i1 %101, label %102, label %104

102:                                              ; preds = %entry
  %103 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @str.5, i32 0, i32 0))
  br label %104

104:                                              ; preds = %102, %entry
  %105 = load %Graph*, %Graph** %G
  %106 = load %Graph*, %Graph** %H
  %107 = call i32 @isIsomorphic(%Graph* %105, %Graph* %106)
  %108 = icmp eq i32 %107, 0
  br i1 %108, label %109, label %111

109:                                              ; preds = %104
  %110 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @str.6, i32 0, i32 0))
  br label %111

111:                                              ; preds = %109, %104
  ret i32 0
}
