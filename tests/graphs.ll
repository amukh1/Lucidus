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
@str.4 = private constant [4 x i8] c"%d\0A\00"
@str.5 = private constant [22 x i8] c"--------------------\0A\00"
@str.6 = private constant [22 x i8] c"--------------------\0A\00"
@str.7 = private constant [4 x i8] c"%d \00"
@str.8 = private constant [2 x i8] c"\0A\00"
@str.9 = private constant [24 x i8] c"G and H are isomorphic\0A\00"
@str.10 = private constant [28 x i8] c"G and H are not isomorphic\0A\00"

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

lse:                                              ; preds = %entry
  br label %d

d:                                                ; preds = %lse
  ret i32 1
}

declare i32 @isdigit(i32)

define i32 @printEdgeList(%Graph* %0) {
entry:
  %G = alloca %Graph*
  store %Graph* %0, %Graph** %G
  %i = alloca i32
  store i32 0, i32* %i
  br label %while

while:                                            ; preds = %while, %entry
  %1 = load %Graph*, %Graph** %G
  %2 = getelementptr inbounds %Graph, %Graph* %1, i32 0, i32 2
  %3 = load %Pair**, %Pair*** %2
  %4 = load i32, i32* %i
  %5 = getelementptr %Pair*, %Pair** %3, i32 %4
  %6 = load %Pair*, %Pair** %5
  %7 = getelementptr inbounds %Pair, %Pair* %6, i32 0, i32 0
  %8 = load i32, i32* %7
  %9 = load %Graph*, %Graph** %G
  %10 = getelementptr inbounds %Graph, %Graph* %9, i32 0, i32 2
  %11 = load %Pair**, %Pair*** %10
  %12 = load i32, i32* %i
  %13 = getelementptr %Pair*, %Pair** %11, i32 %12
  %14 = load %Pair*, %Pair** %13
  %15 = getelementptr inbounds %Pair, %Pair* %14, i32 0, i32 1
  %16 = load i32, i32* %15
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @str, i32 0, i32 0), i32 %8, i32 %16)
  %18 = load i32, i32* %i
  %19 = add i32 %18, 1
  store i32 %19, i32* %i
  %20 = load %Graph*, %Graph** %G
  %21 = getelementptr inbounds %Graph, %Graph* %20, i32 0, i32 1
  %22 = load i32, i32* %21
  %23 = load i32, i32* %i
  %24 = icmp ne i32 %23, %22
  br i1 %24, label %while, label %ndWhile

ndWhile:                                          ; preds = %while
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
  br label %while

while:                                            ; preds = %while, %entry
  %2 = load %Permutation*, %Permutation** %p
  %3 = getelementptr inbounds %Permutation, %Permutation* %2, i32 0, i32 0
  %4 = load i32*, i32** %3
  %5 = load i32, i32* %i
  %6 = getelementptr i32, i32* %4, i32 %5
  %7 = load i32, i32* %6
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.2, i32 0, i32 0), i32 %7)
  %9 = load i32, i32* %i
  %10 = add i32 %9, 1
  store i32 %10, i32* %i
  %11 = load %Permutation*, %Permutation** %p
  %12 = getelementptr inbounds %Permutation, %Permutation* %11, i32 0, i32 1
  %13 = load i32, i32* %12
  %14 = load i32, i32* %i
  %15 = icmp slt i32 %14, %13
  br i1 %15, label %while, label %ndWhile

ndWhile:                                          ; preds = %while
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @str.3, i32 0, i32 0))
  ret i32 0
}

define %Permutation** @gen_all_permutations(i32 %0) {
entry:
  %n = alloca i32
  store i32 %0, i32* %n
  %L = alloca %Permutation**
  %1 = call i8* @malloc(i32 8)
  %2 = bitcast i8* %1 to %Permutation**
  store %Permutation** %2, %Permutation*** %L
  %3 = load i32, i32* %n
  %4 = icmp eq i32 %3, 1
  br i1 %4, label %if, label %lse

if:                                               ; preds = %entry
  %v = alloca %Permutation*
  %5 = call i8* @malloc(i32 8)
  %6 = bitcast i8* %5 to %Permutation*
  store %Permutation* %6, %Permutation** %v
  %7 = load %Permutation*, %Permutation** %v
  %8 = getelementptr inbounds %Permutation, %Permutation* %7, i32 0, i32 0
  %9 = call i8* @malloc(i32 4)
  %10 = bitcast i8* %9 to i32*
  store i32* %10, i32** %8
  %11 = load %Permutation*, %Permutation** %v
  %12 = getelementptr inbounds %Permutation, %Permutation* %11, i32 0, i32 1
  store i32 1, i32* %12
  %13 = load %Permutation*, %Permutation** %v
  %14 = getelementptr inbounds %Permutation, %Permutation* %13, i32 0, i32 0
  %15 = load i32*, i32** %14
  %16 = getelementptr i32, i32* %15, i32 0
  store i32 1, i32* %16
  %17 = load %Permutation**, %Permutation*** %L
  %18 = getelementptr %Permutation*, %Permutation** %17, i32 0
  %19 = load %Permutation*, %Permutation** %v
  store %Permutation* %19, %Permutation** %18
  br label %end

lse:                                              ; preds = %entry
  br label %d

d:                                                ; preds = %lse, %27
  %k = alloca i32
  %20 = load i32, i32* %n
  %21 = sub i32 %20, 1
  %22 = call i32 @factorial(i32 %21)
  store i32 %22, i32* %k
  %recurse = alloca %Permutation**
  %23 = load i32, i32* %n
  %24 = sub i32 %23, 1
  %25 = call %Permutation** @gen_all_permutations(i32 %24)
  store %Permutation** %25, %Permutation*** %recurse
  %i = alloca i32
  store i32 0, i32* %i
  br label %le

end:                                              ; preds = %hile, %if
  %26 = load %Permutation**, %Permutation*** %L
  ret %Permutation** %26

27:                                               ; No predecessors!
  br label %d

le:                                               ; preds = %le1, %d
  %perm = alloca %Permutation*
  %28 = call i8* @malloc(i32 8)
  %29 = bitcast i8* %28 to %Permutation*
  store %Permutation* %29, %Permutation** %perm
  %30 = load %Permutation*, %Permutation** %perm
  %31 = getelementptr inbounds %Permutation, %Permutation* %30, i32 0, i32 0
  %32 = load i32, i32* %n
  %33 = mul i32 4, %32
  %34 = call i8* @malloc(i32 %33)
  %35 = bitcast i8* %34 to i32*
  store i32* %35, i32** %31
  %36 = load %Permutation*, %Permutation** %perm
  %37 = getelementptr inbounds %Permutation, %Permutation* %36, i32 0, i32 1
  %38 = load i32, i32* %n
  store i32 %38, i32* %37
  %j = alloca i32
  store i32 0, i32* %j
  br label %39

hile:                                             ; preds = %le1
  br label %end

39:                                               ; preds = %52, %le
  %rec = alloca %Permutation*
  %40 = load %Permutation**, %Permutation*** %recurse
  %41 = load i32, i32* %j
  %42 = getelementptr %Permutation*, %Permutation** %40, i32 %41
  %43 = load %Permutation*, %Permutation** %42
  store %Permutation* %43, %Permutation** %rec
  %r = alloca i32
  store i32 0, i32* %r
  %h = alloca i32
  store i32 0, i32* %h
  br label %ndWhile

le1:                                              ; preds = %52
  %44 = load i32, i32* %i
  %45 = add i32 %44, 1
  store i32 %45, i32* %i
  %46 = load i32, i32* %n
  %47 = load i32, i32* %i
  %48 = icmp ne i32 %47, %46
  br i1 %48, label %le, label %hile

ndWhile:                                          ; preds = %hile4, %39
  %49 = load i32, i32* %i
  %50 = load i32, i32* %h
  %51 = icmp eq i32 %50, %49
  br i1 %51, label %nd, label %hile2

52:                                               ; preds = %hile4
  %53 = load %Permutation**, %Permutation*** %L
  %54 = load i32, i32* %j
  %55 = load i32, i32* %k
  %56 = load i32, i32* %i
  %57 = mul i32 %56, %55
  %58 = add i32 %57, %54
  %59 = getelementptr %Permutation*, %Permutation** %53, i32 %58
  %60 = load %Permutation*, %Permutation** %perm
  store %Permutation* %60, %Permutation** %59
  %61 = load i32, i32* %j
  %62 = add i32 %61, 1
  store i32 %62, i32* %j
  %63 = load i32, i32* %k
  %64 = load i32, i32* %j
  %65 = icmp ne i32 %64, %63
  br i1 %65, label %39, label %le1

nd:                                               ; preds = %ndWhile
  %66 = load %Permutation*, %Permutation** %perm
  %67 = getelementptr inbounds %Permutation, %Permutation* %66, i32 0, i32 0
  %68 = load i32*, i32** %67
  %69 = load i32, i32* %h
  %70 = getelementptr i32, i32* %68, i32 %69
  %71 = load i32, i32* %n
  store i32 %71, i32* %70
  br label %ndWhile3

hile2:                                            ; preds = %ndWhile
  br label %ndWhile3

ndWhile3:                                         ; preds = %hile2, %nd
  %72 = load i32, i32* %i
  %73 = load i32, i32* %h
  %74 = icmp ne i32 %73, %72
  br i1 %74, label %while, label %e

while:                                            ; preds = %ndWhile3
  %75 = load %Permutation*, %Permutation** %perm
  %76 = getelementptr inbounds %Permutation, %Permutation* %75, i32 0, i32 0
  %77 = load i32*, i32** %76
  %78 = load i32, i32* %h
  %79 = getelementptr i32, i32* %77, i32 %78
  %80 = load %Permutation*, %Permutation** %rec
  %81 = getelementptr inbounds %Permutation, %Permutation* %80, i32 0, i32 0
  %82 = load i32*, i32** %81
  %83 = load i32, i32* %r
  %84 = getelementptr i32, i32* %82, i32 %83
  %85 = load i32, i32* %84
  store i32 %85, i32* %79
  %86 = load i32, i32* %r
  %87 = add i32 %86, 1
  store i32 %87, i32* %r
  br label %hile4

e:                                                ; preds = %ndWhile3
  br label %hile4

hile4:                                            ; preds = %e, %while
  %88 = load i32, i32* %h
  %89 = add i32 %88, 1
  store i32 %89, i32* %h
  %90 = load i32, i32* %n
  %91 = load i32, i32* %h
  %92 = icmp ne i32 %91, %90
  br i1 %92, label %ndWhile, label %52

93:                                               ; No predecessors!
  unreachable
}

define i32 @isEqual(%Graph* %0, %Graph* %1) {
entry:
  %G = alloca %Graph*
  store %Graph* %0, %Graph** %G
  %H = alloca %Graph*
  store %Graph* %1, %Graph** %H
  ret i32 1
}

define i32 @isIsomorphic(%Graph* %0, %Graph* %1) {
entry:
  %G = alloca %Graph*
  store %Graph* %0, %Graph** %G
  %H = alloca %Graph*
  store %Graph* %1, %Graph** %H
  %R = alloca i32
  store i32 0, i32* %R
  %2 = load %Graph*, %Graph** %H
  %3 = getelementptr inbounds %Graph, %Graph* %2, i32 0, i32 0
  %4 = load i32, i32* %3
  %5 = load %Graph*, %Graph** %G
  %6 = getelementptr inbounds %Graph, %Graph* %5, i32 0, i32 0
  %7 = load i32, i32* %6
  %8 = icmp ne i32 %7, %4
  br i1 %8, label %if, label %lse

if:                                               ; preds = %entry
  ret i32 0

lse:                                              ; preds = %entry
  br label %d

d:                                                ; preds = %lse
  %9 = load %Graph*, %Graph** %H
  %10 = getelementptr inbounds %Graph, %Graph* %9, i32 0, i32 1
  %11 = load i32, i32* %10
  %12 = load %Graph*, %Graph** %G
  %13 = getelementptr inbounds %Graph, %Graph* %12, i32 0, i32 1
  %14 = load i32, i32* %13
  %15 = icmp ne i32 %14, %11
  br i1 %15, label %else, label %16

else:                                             ; preds = %d
  ret i32 0

16:                                               ; preds = %d
  br label %hile

hile:                                             ; preds = %16
  %perms = alloca %Permutation**
  %17 = load %Graph*, %Graph** %G
  %18 = getelementptr inbounds %Graph, %Graph* %17, i32 0, i32 0
  %19 = load i32, i32* %18
  %20 = call %Permutation** @gen_all_permutations(i32 %19)
  store %Permutation** %20, %Permutation*** %perms
  %i = alloca i32
  store i32 0, i32* %i
  br label %endWhile

endWhile:                                         ; preds = %"ename llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::IntegerType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::IntegerType*]", %hile
  %p = alloca %Permutation*
  %21 = load %Permutation**, %Permutation*** %perms
  %22 = load i32, i32* %i
  %23 = getelementptr %Permutation*, %Permutation** %21, i32 %22
  %24 = load %Permutation*, %Permutation** %23
  store %Permutation* %24, %Permutation** %p
  %t = alloca i32
  store i32 1, i32* %t
  %j = alloca i32
  store i32 0, i32* %j
  br label %dWhile

e:                                                ; preds = %"ename llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::IntegerType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::IntegerType*]"
  %25 = load i32, i32* %R
  ret i32 %25

dWhile:                                           ; preds = %"typename llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::IntegerType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::IntegerType*]", %endWhile
  %a = alloca i32
  %26 = load %Graph*, %Graph** %G
  %27 = getelementptr inbounds %Graph, %Graph* %26, i32 0, i32 2
  %28 = load %Pair**, %Pair*** %27
  %29 = load i32, i32* %j
  %30 = getelementptr %Pair*, %Pair** %28, i32 %29
  %31 = load %Pair*, %Pair** %30
  %32 = getelementptr inbounds %Pair, %Pair* %31, i32 0, i32 0
  %33 = load i32, i32* %32
  store i32 %33, i32* %a
  %b = alloca i32
  %34 = load %Graph*, %Graph** %G
  %35 = getelementptr inbounds %Graph, %Graph* %34, i32 0, i32 2
  %36 = load %Pair**, %Pair*** %35
  %37 = load i32, i32* %j
  %38 = getelementptr %Pair*, %Pair** %36, i32 %37
  %39 = load %Pair*, %Pair** %38
  %40 = getelementptr inbounds %Pair, %Pair* %39, i32 0, i32 1
  %41 = load i32, i32* %40
  store i32 %41, i32* %b
  %pa = alloca i32
  %42 = load %Permutation*, %Permutation** %p
  %43 = getelementptr inbounds %Permutation, %Permutation* %42, i32 0, i32 0
  %44 = load i32*, i32** %43
  %45 = load i32, i32* %a
  %46 = getelementptr i32, i32* %44, i32 %45
  %47 = load i32, i32* %46
  store i32 %47, i32* %pa
  %ba = alloca i32
  %48 = load %Permutation*, %Permutation** %p
  %49 = getelementptr inbounds %Permutation, %Permutation* %48, i32 0, i32 0
  %50 = load i32*, i32** %49
  %51 = load i32, i32* %b
  %52 = getelementptr i32, i32* %50, i32 %51
  %53 = load i32, i32* %52
  store i32 %53, i32* %ba
  %f = alloca i32
  store i32 0, i32* %f
  %l = alloca i32
  store i32 0, i32* %l
  br label %hile1

54:                                               ; preds = %"typename llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::IntegerType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::IntegerType*]"
  %55 = load i32, i32* %t
  %56 = icmp eq i32 %55, 1
  br i1 %56, label %While, label %e7

hile1:                                            ; preds = %hile3, %dWhile
  %57 = load i32, i32* %pa
  %58 = load %Graph*, %Graph** %H
  %59 = getelementptr inbounds %Graph, %Graph* %58, i32 0, i32 2
  %60 = load %Pair**, %Pair*** %59
  %61 = load i32, i32* %l
  %62 = getelementptr %Pair*, %Pair** %60, i32 %61
  %63 = load %Pair*, %Pair** %62
  %64 = getelementptr inbounds %Pair, %Pair* %63, i32 0, i32 0
  %65 = load i32, i32* %64
  %66 = icmp eq i32 %65, %57
  br i1 %66, label %while, label %e2

"ypename llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::IntegerType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::IntegerType*]": ; preds = %hile3
  %67 = load i32, i32* %f
  %68 = icmp eq i32 %67, 0
  br i1 %68, label %endWhile5, label %hile6

while:                                            ; preds = %hile1
  %69 = load i32, i32* %ba
  %70 = load %Graph*, %Graph** %H
  %71 = getelementptr inbounds %Graph, %Graph* %70, i32 0, i32 2
  %72 = load %Pair**, %Pair*** %71
  %73 = load i32, i32* %l
  %74 = getelementptr %Pair*, %Pair** %72, i32 %73
  %75 = load %Pair*, %Pair** %74
  %76 = getelementptr inbounds %Pair, %Pair* %75, i32 0, i32 1
  %77 = load i32, i32* %76
  %78 = icmp eq i32 %77, %69
  br i1 %78, label %le, label %ndWhile

e2:                                               ; preds = %hile1
  br label %hile3

hile3:                                            ; preds = %e2, %e4
  %79 = load i32, i32* %l
  %80 = add i32 %79, 1
  store i32 %80, i32* %l
  %81 = load %Graph*, %Graph** %H
  %82 = getelementptr inbounds %Graph, %Graph* %81, i32 0, i32 1
  %83 = load i32, i32* %82
  %84 = load i32, i32* %l
  %85 = icmp ne i32 %84, %83
  br i1 %85, label %hile1, label %"ypename llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::IntegerType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::IntegerType*]"

le:                                               ; preds = %while
  store i32 1, i32* %f
  br label %e4

ndWhile:                                          ; preds = %while
  br label %e4

e4:                                               ; preds = %ndWhile, %le
  br label %hile3

endWhile5:                                        ; preds = %"ypename llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::IntegerType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::IntegerType*]"
  store i32 0, i32* %t
  br label %"typename llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::IntegerType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::IntegerType*]"

hile6:                                            ; preds = %"ypename llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::IntegerType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::IntegerType*]"
  br label %"typename llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::IntegerType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::IntegerType*]"

"typename llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::IntegerType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::IntegerType*]": ; preds = %hile6, %endWhile5
  %86 = load i32, i32* %j
  %87 = add i32 %86, 1
  store i32 %87, i32* %j
  %88 = load %Graph*, %Graph** %G
  %89 = getelementptr inbounds %Graph, %Graph* %88, i32 0, i32 1
  %90 = load i32, i32* %89
  %91 = load i32, i32* %j
  %92 = icmp ne i32 %91, %90
  br i1 %92, label %dWhile, label %54

While:                                            ; preds = %54
  %93 = load i32, i32* %i
  %94 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.4, i32 0, i32 0), i32 %93)
  ret i32 1

e7:                                               ; preds = %54
  br label %"ename llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::IntegerType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::IntegerType*]"

"ename llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::IntegerType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::IntegerType*]": ; preds = %e7
  %95 = load i32, i32* %i
  %96 = add i32 %95, 1
  store i32 %96, i32* %i
  %97 = load %Graph*, %Graph** %G
  %98 = getelementptr inbounds %Graph, %Graph* %97, i32 0, i32 0
  %99 = load i32, i32* %98
  %100 = call i32 @factorial(i32 %99)
  %101 = load i32, i32* %i
  %102 = icmp ne i32 %101, %100
  br i1 %102, label %endWhile, label %e
}

define i32 @main() {
entry:
  %G = alloca %Graph*
  %0 = call i8* @malloc(i32 16)
  %1 = bitcast i8* %0 to %Graph*
  store %Graph* %1, %Graph** %G
  %2 = load %Graph*, %Graph** %G
  %3 = getelementptr inbounds %Graph, %Graph* %2, i32 0, i32 0
  store i32 4, i32* %3
  %4 = load %Graph*, %Graph** %G
  %5 = getelementptr inbounds %Graph, %Graph* %4, i32 0, i32 1
  store i32 3, i32* %5
  %6 = load %Graph*, %Graph** %G
  %7 = getelementptr inbounds %Graph, %Graph* %6, i32 0, i32 2
  %8 = call i8* @malloc(i32 40)
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
  %25 = getelementptr %Pair*, %Pair** %24, i32 2
  %26 = call i8* @malloc(i32 8)
  %27 = bitcast i8* %26 to %Pair*
  store %Pair* %27, %Pair** %25
  %28 = load %Graph*, %Graph** %G
  %29 = getelementptr inbounds %Graph, %Graph* %28, i32 0, i32 2
  %30 = load %Pair**, %Pair*** %29
  %31 = getelementptr %Pair*, %Pair** %30, i32 0
  %32 = load %Pair*, %Pair** %31
  %33 = getelementptr inbounds %Pair, %Pair* %32, i32 0, i32 0
  store i32 1, i32* %33
  %34 = load %Graph*, %Graph** %G
  %35 = getelementptr inbounds %Graph, %Graph* %34, i32 0, i32 2
  %36 = load %Pair**, %Pair*** %35
  %37 = getelementptr %Pair*, %Pair** %36, i32 0
  %38 = load %Pair*, %Pair** %37
  %39 = getelementptr inbounds %Pair, %Pair* %38, i32 0, i32 1
  store i32 2, i32* %39
  %40 = load %Graph*, %Graph** %G
  %41 = getelementptr inbounds %Graph, %Graph* %40, i32 0, i32 2
  %42 = load %Pair**, %Pair*** %41
  %43 = getelementptr %Pair*, %Pair** %42, i32 1
  %44 = load %Pair*, %Pair** %43
  %45 = getelementptr inbounds %Pair, %Pair* %44, i32 0, i32 0
  store i32 1, i32* %45
  %46 = load %Graph*, %Graph** %G
  %47 = getelementptr inbounds %Graph, %Graph* %46, i32 0, i32 2
  %48 = load %Pair**, %Pair*** %47
  %49 = getelementptr %Pair*, %Pair** %48, i32 1
  %50 = load %Pair*, %Pair** %49
  %51 = getelementptr inbounds %Pair, %Pair* %50, i32 0, i32 1
  store i32 3, i32* %51
  %52 = load %Graph*, %Graph** %G
  %53 = getelementptr inbounds %Graph, %Graph* %52, i32 0, i32 2
  %54 = load %Pair**, %Pair*** %53
  %55 = getelementptr %Pair*, %Pair** %54, i32 2
  %56 = load %Pair*, %Pair** %55
  %57 = getelementptr inbounds %Pair, %Pair* %56, i32 0, i32 0
  store i32 3, i32* %57
  %58 = load %Graph*, %Graph** %G
  %59 = getelementptr inbounds %Graph, %Graph* %58, i32 0, i32 2
  %60 = load %Pair**, %Pair*** %59
  %61 = getelementptr %Pair*, %Pair** %60, i32 2
  %62 = load %Pair*, %Pair** %61
  %63 = getelementptr inbounds %Pair, %Pair* %62, i32 0, i32 1
  store i32 4, i32* %63
  %H = alloca %Graph*
  %64 = call i8* @malloc(i32 16)
  %65 = bitcast i8* %64 to %Graph*
  store %Graph* %65, %Graph** %H
  %66 = load %Graph*, %Graph** %H
  %67 = getelementptr inbounds %Graph, %Graph* %66, i32 0, i32 0
  store i32 4, i32* %67
  %68 = load %Graph*, %Graph** %H
  %69 = getelementptr inbounds %Graph, %Graph* %68, i32 0, i32 1
  store i32 3, i32* %69
  %70 = load %Graph*, %Graph** %H
  %71 = getelementptr inbounds %Graph, %Graph* %70, i32 0, i32 2
  %72 = call i8* @malloc(i32 40)
  %73 = bitcast i8* %72 to %Pair**
  store %Pair** %73, %Pair*** %71
  %74 = load %Graph*, %Graph** %H
  %75 = getelementptr inbounds %Graph, %Graph* %74, i32 0, i32 2
  %76 = load %Pair**, %Pair*** %75
  %77 = getelementptr %Pair*, %Pair** %76, i32 0
  %78 = call i8* @malloc(i32 8)
  %79 = bitcast i8* %78 to %Pair*
  store %Pair* %79, %Pair** %77
  %80 = load %Graph*, %Graph** %H
  %81 = getelementptr inbounds %Graph, %Graph* %80, i32 0, i32 2
  %82 = load %Pair**, %Pair*** %81
  %83 = getelementptr %Pair*, %Pair** %82, i32 1
  %84 = call i8* @malloc(i32 8)
  %85 = bitcast i8* %84 to %Pair*
  store %Pair* %85, %Pair** %83
  %86 = load %Graph*, %Graph** %H
  %87 = getelementptr inbounds %Graph, %Graph* %86, i32 0, i32 2
  %88 = load %Pair**, %Pair*** %87
  %89 = getelementptr %Pair*, %Pair** %88, i32 2
  %90 = call i8* @malloc(i32 8)
  %91 = bitcast i8* %90 to %Pair*
  store %Pair* %91, %Pair** %89
  %92 = load %Graph*, %Graph** %H
  %93 = getelementptr inbounds %Graph, %Graph* %92, i32 0, i32 2
  %94 = load %Pair**, %Pair*** %93
  %95 = getelementptr %Pair*, %Pair** %94, i32 0
  %96 = load %Pair*, %Pair** %95
  %97 = getelementptr inbounds %Pair, %Pair* %96, i32 0, i32 0
  store i32 1, i32* %97
  %98 = load %Graph*, %Graph** %H
  %99 = getelementptr inbounds %Graph, %Graph* %98, i32 0, i32 2
  %100 = load %Pair**, %Pair*** %99
  %101 = getelementptr %Pair*, %Pair** %100, i32 0
  %102 = load %Pair*, %Pair** %101
  %103 = getelementptr inbounds %Pair, %Pair* %102, i32 0, i32 1
  store i32 2, i32* %103
  %104 = load %Graph*, %Graph** %H
  %105 = getelementptr inbounds %Graph, %Graph* %104, i32 0, i32 2
  %106 = load %Pair**, %Pair*** %105
  %107 = getelementptr %Pair*, %Pair** %106, i32 1
  %108 = load %Pair*, %Pair** %107
  %109 = getelementptr inbounds %Pair, %Pair* %108, i32 0, i32 0
  store i32 1, i32* %109
  %110 = load %Graph*, %Graph** %H
  %111 = getelementptr inbounds %Graph, %Graph* %110, i32 0, i32 2
  %112 = load %Pair**, %Pair*** %111
  %113 = getelementptr %Pair*, %Pair** %112, i32 1
  %114 = load %Pair*, %Pair** %113
  %115 = getelementptr inbounds %Pair, %Pair* %114, i32 0, i32 1
  store i32 3, i32* %115
  %116 = load %Graph*, %Graph** %H
  %117 = getelementptr inbounds %Graph, %Graph* %116, i32 0, i32 2
  %118 = load %Pair**, %Pair*** %117
  %119 = getelementptr %Pair*, %Pair** %118, i32 2
  %120 = load %Pair*, %Pair** %119
  %121 = getelementptr inbounds %Pair, %Pair* %120, i32 0, i32 0
  store i32 3, i32* %121
  %122 = load %Graph*, %Graph** %H
  %123 = getelementptr inbounds %Graph, %Graph* %122, i32 0, i32 2
  %124 = load %Pair**, %Pair*** %123
  %125 = getelementptr %Pair*, %Pair** %124, i32 2
  %126 = load %Pair*, %Pair** %125
  %127 = getelementptr inbounds %Pair, %Pair* %126, i32 0, i32 1
  store i32 4, i32* %127
  %128 = load %Graph*, %Graph** %G
  %129 = call i32 @printEdgeList(%Graph* %128)
  %130 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @str.5, i32 0, i32 0))
  %131 = load %Graph*, %Graph** %H
  %132 = call i32 @printEdgeList(%Graph* %131)
  %133 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @str.6, i32 0, i32 0))
  %n = alloca i32
  store i32 3, i32* %n
  %k = alloca %Permutation**
  %134 = load i32, i32* %n
  %135 = call %Permutation** @gen_all_permutations(i32 %134)
  store %Permutation** %135, %Permutation*** %k
  %i = alloca i32
  store i32 0, i32* %i
  br label %while

while:                                            ; preds = %While, %entry
  %j = alloca i32
  store i32 0, i32* %j
  br label %ile

ndWhile:                                          ; preds = %While
  %136 = load %Graph*, %Graph** %G
  %137 = load %Graph*, %Graph** %H
  %138 = call i32 @isIsomorphic(%Graph* %136, %Graph* %137)
  %139 = icmp eq i32 %138, 1
  br i1 %139, label %lse, label %end

ile:                                              ; preds = %ile, %while
  %140 = load %Permutation**, %Permutation*** %k
  %141 = load i32, i32* %i
  %142 = getelementptr %Permutation*, %Permutation** %140, i32 %141
  %143 = load %Permutation*, %Permutation** %142
  %144 = getelementptr inbounds %Permutation, %Permutation* %143, i32 0, i32 0
  %145 = load i32*, i32** %144
  %146 = load i32, i32* %j
  %147 = getelementptr i32, i32* %145, i32 %146
  %148 = load i32, i32* %147
  %149 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.7, i32 0, i32 0), i32 %148)
  %150 = load i32, i32* %j
  %151 = add i32 %150, 1
  store i32 %151, i32* %j
  %152 = load i32, i32* %n
  %153 = load i32, i32* %j
  %154 = icmp slt i32 %153, %152
  br i1 %154, label %ile, label %While

While:                                            ; preds = %ile
  %155 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @str.8, i32 0, i32 0))
  %156 = load i32, i32* %i
  %157 = add i32 %156, 1
  store i32 %157, i32* %i
  %158 = load i32, i32* %n
  %159 = call i32 @factorial(i32 %158)
  %160 = load i32, i32* %i
  %161 = icmp slt i32 %160, %159
  br i1 %161, label %while, label %ndWhile

lse:                                              ; preds = %ndWhile
  %162 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @str.9, i32 0, i32 0))
  br label %ile1

end:                                              ; preds = %ndWhile
  br label %ile1

ile1:                                             ; preds = %end, %lse
  %163 = load %Graph*, %Graph** %G
  %164 = load %Graph*, %Graph** %H
  %165 = call i32 @isIsomorphic(%Graph* %163, %Graph* %164)
  %166 = icmp eq i32 %165, 0
  br i1 %166, label %167, label %169

167:                                              ; preds = %ile1
  %168 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @str.10, i32 0, i32 0))
  br label %170

169:                                              ; preds = %ile1
  br label %170

170:                                              ; preds = %169, %167
  ret i32 0
}
