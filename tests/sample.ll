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
@str.4 = private constant [15 x i8] c"Hello, World!\0A\00"
@str.5 = private constant [4 x i8] c"%d\0A\00"
@str.6 = private constant [4 x i8] c"%d\0A\00"
@str.7 = private constant [17 x i8] c"x is equal to y\0A\00"
@str.8 = private constant [21 x i8] c"x is not equal to y\0A\00"
@str.9 = private constant [4 x i8] c"%d\0A\00"
@str.10 = private constant [6 x i8] c"%d | \00"
@str.11 = private constant [2 x i8] c"\0A\00"

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

declare i32 @isIsomorphic(%Graph*, %Graph*)

define i32 @main() {
entry:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @str.4, i32 0, i32 0))
  %x = alloca i32
  store i32 4, i32* %x
  %y = alloca i32
  store i32 5, i32* %y
  store i32 5, i32* %x
  %1 = load i32, i32* %y
  %2 = add i32 %1, 1
  store i32 %2, i32* %x
  %3 = load i32, i32* %x
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.5, i32 0, i32 0), i32 %3)
  %5 = load i32, i32* %y
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.6, i32 0, i32 0), i32 %5)
  %7 = load i32, i32* %y
  %8 = load i32, i32* %x
  %9 = icmp eq i32 %8, %7
  br i1 %9, label %if, label %lse

if:                                               ; preds = %entry
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @str.7, i32 0, i32 0))
  br label %d

lse:                                              ; preds = %entry
  br label %d

d:                                                ; preds = %lse, %if
  %11 = load i32, i32* %y
  %12 = load i32, i32* %x
  %13 = icmp ne i32 %12, %11
  br i1 %13, label %else, label %15

else:                                             ; preds = %d
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @str.8, i32 0, i32 0))
  br label %hile

15:                                               ; preds = %d
  br label %hile

hile:                                             ; preds = %15, %else
  %z = alloca float
  store float 0x3FF3333340000000, float* %z
  %16 = load i32, i32* %x
  %17 = bitcast i32 %16 to float
  store float %17, float* %z
  %arr = alloca i32*
  %18 = call i8* @malloc(i32 mul (i32 ptrtoint (i32* getelementptr (i32, i32* null, i32 1) to i32), i32 10))
  %19 = bitcast i8* %18 to i32*
  store i32* %19, i32** %arr
  %20 = load i32*, i32** %arr
  %21 = getelementptr i32, i32* %20, i32 0
  store i32 1, i32* %21
  %22 = load i32*, i32** %arr
  %23 = getelementptr i32, i32* %22, i32 1
  store i32 2, i32* %23
  %i = alloca i32
  store i32 0, i32* %i
  br label %endWhile

endWhile:                                         ; preds = %endWhile, %hile
  %24 = load i32*, i32** %arr
  %25 = load i32, i32* %i
  %26 = getelementptr i32, i32* %24, i32 %25
  %27 = load i32, i32* %i
  store i32 %27, i32* %26
  %28 = load i32, i32* %i
  %29 = add i32 %28, 1
  store i32 %29, i32* %i
  %30 = load i32, i32* %i
  %31 = icmp slt i32 %30, 11
  br i1 %31, label %endWhile, label %e

e:                                                ; preds = %endWhile
  store i32 0, i32* %i
  br label %dWhile

dWhile:                                           ; preds = %dWhile, %e
  %32 = load i32*, i32** %arr
  %33 = load i32, i32* %i
  %34 = getelementptr i32, i32* %32, i32 %33
  %35 = load i32, i32* %34
  %36 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @str.9, i32 0, i32 0), i32 %35)
  %37 = load i32, i32* %i
  %38 = add i32 %37, 1
  store i32 %38, i32* %i
  %39 = load i32, i32* %i
  %40 = icmp slt i32 %39, 11
  br i1 %40, label %dWhile, label %41

41:                                               ; preds = %dWhile
  %arr2 = alloca i32**
  %42 = call i8* @malloc(i32 mul (i32 ptrtoint (i1** getelementptr (i1*, i1** null, i32 1) to i32), i32 10))
  %43 = bitcast i8* %42 to i32**
  store i32** %43, i32*** %arr2
  store i32 0, i32* %i
  %j = alloca i32
  store i32 0, i32* %j
  br label %hile1

hile1:                                            ; preds = %hile1, %41
  %44 = load i32**, i32*** %arr2
  %45 = load i32, i32* %i
  %46 = getelementptr i32*, i32** %44, i32 %45
  %47 = call i8* @malloc(i32 mul (i32 ptrtoint (i32* getelementptr (i32, i32* null, i32 1) to i32), i32 10))
  %48 = bitcast i8* %47 to i32*
  store i32* %48, i32** %46
  %49 = load i32, i32* %i
  %50 = add i32 %49, 1
  store i32 %50, i32* %i
  %51 = load i32, i32* %i
  %52 = icmp slt i32 %51, 10
  br i1 %52, label %hile1, label %"ypename llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::StructType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::StructType*]"

"ypename llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::StructType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::StructType*]": ; preds = %hile1
  store i32 0, i32* %i
  br label %le

le:                                               ; preds = %"ame llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::StructType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::StructType*]", %"ypename llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::StructType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::StructType*]"
  store i32 0, i32* %j
  br label %53

"ename llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::StructType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::StructType*]": ; preds = %"ame llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::StructType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::StructType*]"
  store i32 0, i32* %i
  br label %"typename llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::StructType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::StructType*]"

53:                                               ; preds = %53, %le
  %54 = load i32**, i32*** %arr2
  %55 = load i32, i32* %i
  %56 = getelementptr i32*, i32** %54, i32 %55
  %57 = load i32*, i32** %56
  %58 = load i32, i32* %j
  %59 = getelementptr i32, i32* %57, i32 %58
  %60 = load i32, i32* %j
  %61 = load i32, i32* %i
  %62 = add i32 %61, %60
  store i32 %62, i32* %59
  %63 = load i32, i32* %j
  %64 = add i32 %63, 1
  store i32 %64, i32* %j
  %65 = load i32, i32* %j
  %66 = icmp slt i32 %65, 10
  br i1 %66, label %53, label %"ame llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::StructType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::StructType*]"

"ame llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::StructType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::StructType*]": ; preds = %53
  %67 = load i32, i32* %i
  %68 = add i32 %67, 1
  store i32 %68, i32* %i
  %69 = load i32, i32* %i
  %70 = icmp slt i32 %69, 10
  br i1 %70, label %le, label %"ename llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::StructType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::StructType*]"

"typename llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::StructType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::StructType*]": ; preds = %"llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::StructType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::StructType*]", %"ename llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::StructType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::StructType*]"
  store i32 0, i32* %j
  br label %"pename llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::StructType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::StructType*]"

"e llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::StructType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::StructType*]": ; preds = %"llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::StructType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::StructType*]"
  ret i32 0

"pename llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::StructType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::StructType*]": ; preds = %"pename llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::StructType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::StructType*]", %"typename llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::StructType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::StructType*]"
  %71 = load i32**, i32*** %arr2
  %72 = load i32, i32* %i
  %73 = getelementptr i32*, i32** %71, i32 %72
  %74 = load i32*, i32** %73
  %75 = load i32, i32* %j
  %76 = getelementptr i32, i32* %74, i32 %75
  %77 = load i32, i32* %76
  %78 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @str.10, i32 0, i32 0), i32 %77)
  %79 = load i32, i32* %j
  %80 = add i32 %79, 1
  store i32 %80, i32* %j
  %81 = load i32, i32* %j
  %82 = icmp slt i32 %81, 10
  br i1 %82, label %"pename llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::StructType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::StructType*]", label %"llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::StructType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::StructType*]"

"llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::StructType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::StructType*]": ; preds = %"pename llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::StructType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::StructType*]"
  %83 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @str.11, i32 0, i32 0))
  %84 = load i32, i32* %i
  %85 = add i32 %84, 1
  store i32 %85, i32* %i
  %86 = load i32, i32* %i
  %87 = icmp slt i32 %86, 10
  br i1 %87, label %"typename llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::StructType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::StructType*]", label %"e llvm::cast_retty<X, Y*>::ret_type llvm::cast(Y*) [with X = llvm::StructType; Y = const llvm::Type; typename llvm::cast_retty<X, Y*>::ret_type = const llvm::StructType*]"
}
