; ModuleID = 'amukh'
source_filename = "amukh"

%Graph = type { i32, i32, i32*, i32** }

@Graph = external global %Graph
@str = private constant [10 x i8] c"%d -- %d\0A\00"
@str.1 = private constant [10 x i8] c"%d -- %d\0A\00"

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
  %2 = getelementptr inbounds %Graph, %Graph* %1, i32 0, i32 3
  %3 = load i32**, i32*** %2
  ret i32** %3
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
  store i32 4, i32* %5
  %6 = load %Graph*, %Graph** %G
  %7 = getelementptr inbounds %Graph, %Graph* %6, i32 0, i32 1
  store i32 5, i32* %7
  %nodes = alloca i32*
  %8 = call i8* @malloc(i32 16)
  %9 = bitcast i8* %8 to i32*
  store i32* %9, i32** %nodes
  %10 = call i8* @malloc(i32 16)
  %11 = bitcast i8* %10 to i32*
  %12 = load %Graph*, %Graph** %G
  %13 = getelementptr inbounds %Graph, %Graph* %12, i32 0, i32 2
  %14 = load i32*, i32** %nodes
  store i32* %14, i32** %13
  %15 = load i32*, i32** %nodes
  store i32 0, i32* %15
  %16 = load i32*, i32** %nodes
  %17 = ptrtoint i32* %16 to i32
  %18 = add i32 %17, 4
  %19 = inttoptr i32 %18 to i32*
  store i32 1, i32* %19
  %20 = load i32*, i32** %nodes
  %21 = ptrtoint i32* %20 to i32
  %22 = add i32 %21, 8
  %23 = inttoptr i32 %22 to i32*
  store i32 2, i32* %23
  %24 = load i32*, i32** %nodes
  %25 = ptrtoint i32* %24 to i32
  %26 = add i32 %25, 12
  %27 = inttoptr i32 %26 to i32*
  store i32 3, i32* %27
  %edges = alloca i32**
  %28 = call i8* @malloc(i32 20)
  %29 = bitcast i8* %28 to i32**
  store i32** %29, i32*** %edges
  %30 = call i8* @malloc(i32 20)
  %31 = bitcast i8* %30 to i32**
  %32 = load %Graph*, %Graph** %G
  %33 = getelementptr inbounds %Graph, %Graph* %32, i32 0, i32 3
  %34 = load i32**, i32*** %edges
  store i32** %34, i32*** %33
  %35 = load i32**, i32*** %edges
  %36 = call i8* @malloc(i32 8)
  %37 = bitcast i8* %36 to i32*
  store i32* %37, i32** %35
  %edgesTupleOne = alloca i32*
  %38 = load i32**, i32*** %edges
  %39 = load i32*, i32** %38
  store i32* %39, i32** %edgesTupleOne
  %40 = load i32**, i32*** %edges
  %41 = load i32*, i32** %40
  %42 = load i32*, i32** %edgesTupleOne
  %43 = ptrtoint i32* %42 to i32
  %44 = add i32 %43, 0
  %45 = inttoptr i32 %44 to i32*
  store i32 0, i32* %45
  %46 = load i32*, i32** %edgesTupleOne
  %47 = ptrtoint i32* %46 to i32
  %48 = add i32 %47, 4
  %49 = inttoptr i32 %48 to i32*
  store i32 1, i32* %49
  %edgesTupleTwo = alloca i32*
  %50 = load i32**, i32*** %edges
  %51 = ptrtoint i32** %50 to i32
  %52 = add i32 %51, 4
  %53 = inttoptr i32 %52 to i32*
  store i32* %53, i32** %edgesTupleTwo
  %54 = load i32**, i32*** %edges
  %55 = ptrtoint i32** %54 to i32
  %56 = add i32 %55, 4
  %57 = inttoptr i32 %56 to i32*
  %58 = load i32*, i32** %edgesTupleTwo
  %59 = ptrtoint i32* %58 to i32
  %60 = add i32 %59, 0
  %61 = inttoptr i32 %60 to i32*
  store i32 1, i32* %61
  %62 = load i32*, i32** %edgesTupleTwo
  %63 = ptrtoint i32* %62 to i32
  %64 = add i32 %63, 4
  %65 = inttoptr i32 %64 to i32*
  store i32 2, i32* %65
  %66 = load %Graph*, %Graph** %G
  %67 = getelementptr inbounds %Graph, %Graph* %66, i32 0, i32 3
  %68 = load i32**, i32*** %67
  %69 = load i32*, i32** %68
  %70 = ptrtoint i32* %69 to i32
  %71 = add i32 %70, 0
  %72 = inttoptr i32 %71 to i32*
  %73 = load i32, i32* %72
  %74 = load %Graph*, %Graph** %G
  %75 = getelementptr inbounds %Graph, %Graph* %74, i32 0, i32 3
  %76 = load i32**, i32*** %75
  %77 = load i32*, i32** %76
  %78 = ptrtoint i32* %77 to i32
  %79 = add i32 %78, 4
  %80 = inttoptr i32 %79 to i32*
  %81 = load i32, i32* %80
  %82 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @str, i32 0, i32 0), i32 %73, i32 %81)
  %83 = load %Graph*, %Graph** %G
  %84 = getelementptr inbounds %Graph, %Graph* %83, i32 0, i32 3
  %85 = load i32**, i32*** %84
  %86 = load i32*, i32** %85
  %87 = ptrtoint i32* %86 to i32
  %88 = add i32 %87, 4
  %89 = inttoptr i32 %88 to i32*
  %90 = load i32, i32* %89
  %91 = load %Graph*, %Graph** %G
  %92 = getelementptr inbounds %Graph, %Graph* %91, i32 0, i32 3
  %93 = load i32**, i32*** %92
  %94 = ptrtoint i32** %93 to i32
  %95 = add i32 %94, 4
  %96 = inttoptr i32 %95 to i32*
  %97 = ptrtoint i32* %96 to i32
  %98 = add i32 %97, 4
  %99 = inttoptr i32 %98 to i32*
  %100 = load i32, i32* %99
  %101 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @str.1, i32 0, i32 0), i32 %90, i32 %100)
  ret i32 0
}
