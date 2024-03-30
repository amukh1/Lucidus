; ModuleID = 'amukh'
source_filename = "amukh"

%Vector_int = type { i32*, i32 }
%Vector_char = type { i32*, i32 }
%Vector_string = type { i32*, i32 }
%Pair = type { i32, i32 }
%Graph = type { i32, i32, %Pair** }
%Permutation = type { i32*, i32 }

@Vector_int = external global %Vector_int
@Vector_char = external global %Vector_char
@Vector_string = external global %Vector_string
@Pair = external global %Pair
@Graph = external global %Graph
@str = private constant [10 x i8] c"%d -- %d\0A\00"
@Permutation = external global %Permutation
@str.1 = private constant [2 x i8] c"(\00"
@str.2 = private constant [4 x i8] c"%d \00"
@str.3 = private constant [3 x i8] c")\0A\00"
@str.4 = private constant [22 x i8] c"--------------------\0A\00"
@str.5 = private constant [22 x i8] c"--------------------\0A\00"
@str.6 = private constant [4 x i8] c"%d\0A\00"

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
  %2 = icmp ne i32 %1, 0
  br i1 %2, label %if, label %lse

if:                                               ; preds = %entry
  %3 = load i32, i32* %n
  %4 = sub i32 %3, 1
  %5 = call i32 @factorial(i32 %4)
  %6 = load i32, i32* %n
  %7 = mul i32 %6, %5
  ret i32 %7
  br label %d

lse:                                              ; preds = %entry
  br label %d

d:                                                ; preds = %lse, %if
  ret i32 1
}

declare i32 @isdigit(i32)

define i32 @printEdgeList(%Graph* %0) {
entry:
  %G = alloca %Graph*
  store %Graph* %0, %Graph** %G
  %i = alloca i32
  store i32 0, i32* %i
  br label %1

1:                                                ; preds = %1, %entry
  %2 = load %Graph*, %Graph** %G
  %3 = getelementptr inbounds %Graph, %Graph* %2, i32 0, i32 2
  %4 = load %Pair**, %Pair*** %3
  %5 = load i32, i32* %i
  %6 = getelementptr %Pair*, %Pair** %4, i32 %5
  %7 = load %Pair*, %Pair** %6
  %8 = getelementptr inbounds %Pair, %Pair* %7, i32 0, i32 0
  %9 = load i32, i32* %8
  %10 = load %Graph*, %Graph** %G
  %11 = getelementptr inbounds %Graph, %Graph* %10, i32 0, i32 2
  %12 = load %Pair**, %Pair*** %11
  %13 = load i32, i32* %i
  %14 = getelementptr %Pair*, %Pair** %12, i32 %13
  %15 = load %Pair*, %Pair** %14
  %16 = getelementptr inbounds %Pair, %Pair* %15, i32 0, i32 1
  %17 = load i32, i32* %16
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @str, i32 0, i32 0), i32 %9, i32 %17)
  %19 = load i32, i32* %i
  %20 = add i32 %19, 1
  store i32 %20, i32* %i
  %21 = load %Graph*, %Graph** %G
  %22 = getelementptr inbounds %Graph, %Graph* %21, i32 0, i32 1
  %23 = load i32, i32* %22
  %24 = load i32, i32* %i
  %25 = icmp ne i32 %24, %23
  br i1 %25, label %1, label %26

26:                                               ; preds = %1
  ret i32 0
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
  ret i32 1
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
  %9 = bitcast i8* %8 to %Pair**
  store %Pair** %9, %Pair*** %7
  %10 = load %Graph*, %Graph** %G
  %11 = getelementptr inbounds %Graph, %Graph* %10, i32 0, i32 2
  %12 = load %Pair**, %Pair*** %11
  %13 = getelementptr %Pair*, %Pair** %12, i32 0
  %14 = call i8* @malloc(i32 8)
  %15 = bitcast i8* %14 to %Pair*
  store %Pair* %15, %Pair** %13
  %16 = load %Graph*, %Graph** %G
  %17 = getelementptr inbounds %Graph, %Graph* %16, i32 0, i32 2
  %18 = load %Pair**, %Pair*** %17
  %19 = getelementptr %Pair*, %Pair** %18, i32 1
  %20 = call i8* @malloc(i32 8)
  %21 = bitcast i8* %20 to %Pair*
  store %Pair* %21, %Pair** %19
  %22 = load %Graph*, %Graph** %G
  %23 = getelementptr inbounds %Graph, %Graph* %22, i32 0, i32 2
  %24 = load %Pair**, %Pair*** %23
  %25 = getelementptr %Pair*, %Pair** %24, i32 0
  %26 = load %Pair*, %Pair** %25
  %27 = getelementptr inbounds %Pair, %Pair* %26, i32 0, i32 0
  store i32 1, i32* %27
  %28 = load %Graph*, %Graph** %G
  %29 = getelementptr inbounds %Graph, %Graph* %28, i32 0, i32 2
  %30 = load %Pair**, %Pair*** %29
  %31 = getelementptr %Pair*, %Pair** %30, i32 0
  %32 = load %Pair*, %Pair** %31
  %33 = getelementptr inbounds %Pair, %Pair* %32, i32 0, i32 1
  store i32 2, i32* %33
  %34 = load %Graph*, %Graph** %G
  %35 = getelementptr inbounds %Graph, %Graph* %34, i32 0, i32 2
  %36 = load %Pair**, %Pair*** %35
  %37 = getelementptr %Pair*, %Pair** %36, i32 1
  %38 = load %Pair*, %Pair** %37
  %39 = getelementptr inbounds %Pair, %Pair* %38, i32 0, i32 0
  store i32 4, i32* %39
  %40 = load %Graph*, %Graph** %G
  %41 = getelementptr inbounds %Graph, %Graph* %40, i32 0, i32 2
  %42 = load %Pair**, %Pair*** %41
  %43 = getelementptr %Pair*, %Pair** %42, i32 1
  %44 = load %Pair*, %Pair** %43
  %45 = getelementptr inbounds %Pair, %Pair* %44, i32 0, i32 1
  store i32 10, i32* %45
  %H = alloca %Graph*
  %46 = call i8* @malloc(i32 16)
  %47 = bitcast i8* %46 to %Graph*
  store %Graph* %47, %Graph** %H
  %48 = load %Graph*, %Graph** %H
  %49 = getelementptr inbounds %Graph, %Graph* %48, i32 0, i32 0
  store i32 3, i32* %49
  %50 = load %Graph*, %Graph** %H
  %51 = getelementptr inbounds %Graph, %Graph* %50, i32 0, i32 1
  store i32 2, i32* %51
  %52 = load %Graph*, %Graph** %H
  %53 = getelementptr inbounds %Graph, %Graph* %52, i32 0, i32 2
  %54 = call i8* @malloc(i32 20)
  %55 = bitcast i8* %54 to %Pair**
  store %Pair** %55, %Pair*** %53
  %56 = load %Graph*, %Graph** %H
  %57 = getelementptr inbounds %Graph, %Graph* %56, i32 0, i32 2
  %58 = load %Pair**, %Pair*** %57
  %59 = getelementptr %Pair*, %Pair** %58, i32 0
  %60 = call i8* @malloc(i32 8)
  %61 = bitcast i8* %60 to %Pair*
  store %Pair* %61, %Pair** %59
  %62 = load %Graph*, %Graph** %H
  %63 = getelementptr inbounds %Graph, %Graph* %62, i32 0, i32 2
  %64 = load %Pair**, %Pair*** %63
  %65 = getelementptr %Pair*, %Pair** %64, i32 1
  %66 = call i8* @malloc(i32 8)
  %67 = bitcast i8* %66 to %Pair*
  store %Pair* %67, %Pair** %65
  %68 = load %Graph*, %Graph** %H
  %69 = getelementptr inbounds %Graph, %Graph* %68, i32 0, i32 2
  %70 = load %Pair**, %Pair*** %69
  %71 = getelementptr %Pair*, %Pair** %70, i32 0
  %72 = load %Pair*, %Pair** %71
  %73 = getelementptr inbounds %Pair, %Pair* %72, i32 0, i32 0
  store i32 1, i32* %73
  %74 = load %Graph*, %Graph** %H
  %75 = getelementptr inbounds %Graph, %Graph* %74, i32 0, i32 2
  %76 = load %Pair**, %Pair*** %75
  %77 = getelementptr %Pair*, %Pair** %76, i32 0
  %78 = load %Pair*, %Pair** %77
  %79 = getelementptr inbounds %Pair, %Pair* %78, i32 0, i32 1
  store i32 2, i32* %79
  %80 = load %Graph*, %Graph** %H
  %81 = getelementptr inbounds %Graph, %Graph* %80, i32 0, i32 2
  %82 = load %Pair**, %Pair*** %81
  %83 = getelementptr %Pair*, %Pair** %82, i32 1
  %84 = load %Pair*, %Pair** %83
  %85 = getelementptr inbounds %Pair, %Pair* %84, i32 0, i32 0
  store i32 4, i32* %85
  %86 = load %Graph*, %Graph** %H
  %87 = getelementptr inbounds %Graph, %Graph* %86, i32 0, i32 2
  %88 = load %Pair**, %Pair*** %87
  %89 = getelementptr %Pair*, %Pair** %88, i32 1
  %90 = load %Pair*, %Pair** %89
  %91 = getelementptr inbounds %Pair, %Pair* %90, i32 0, i32 1
  store i32 10, i32* %91
  %92 = load %Graph*, %Graph** %G
  %93 = call i32 @printEdgeList(%Graph* %92)
  %94 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @str.4, i32 0, i32 0))
  %95 = load %Graph*, %Graph** %H
  %96 = call i32 @printEdgeList(%Graph* %95)
  %97 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @str.5, i32 0, i32 0))
  %98 = call i32 @factorial(i32 6)
  %99 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.6, i32 0, i32 0), i32 %98)
  ret i32 0
}
