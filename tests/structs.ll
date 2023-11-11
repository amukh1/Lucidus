; ModuleID = 'amukh'
source_filename = "amukh"

%Car = type { i8*, i8*, i32, i32, i32 }

@Car = external global %Car
@str = private constant [9 x i8] c"FCar.txt\00"
@str.1 = private constant [3 x i8] c"r+\00"
@str.2 = private constant [9 x i8] c"FCar.txt\00"
@str.3 = private constant [3 x i8] c"r+\00"
@str.4 = private constant [13 x i8] c"Car Make: %s\00"
@str.5 = private constant [14 x i8] c"Car Model: %s\00"
@str.6 = private constant [17 x i8] c"Car Mileage: %d\0A\00"
@str.7 = private constant [14 x i8] c"Car Year: %d\0A\00"
@str.8 = private constant [14 x i8] c"Car Cost: %d\0A\00"

declare i32 @printf(i8*, ...)

declare i8* @malloc(i32)

declare i8* @free(i8*)

declare i32 @fprintf(i8*, i8*, ...)

declare i32 @fputs(i8*, i8*)

declare i8* @fgets(i8*, i32, i8*)

declare i8* @fopen(i8*, i8*)

declare i32 @fclose(i8*)

declare i32 @strlen(i8*)

declare i8* @strcpy(i8*, i8*)

declare i8* @gets(i8*)

declare i32 @atoi(i8*)

declare i32 @fseek(i8*, i32, i32)

define i32 @main() {
entry:
  %FCar = alloca %Car*
  %0 = call i8* @malloc(i32 20)
  %1 = bitcast i8* %0 to %Car*
  store %Car* %1, %Car** %FCar
  %2 = call i8* @malloc(i32 20)
  %3 = bitcast i8* %2 to %Car*
  %4 = load %Car*, %Car** %FCar
  %5 = getelementptr inbounds %Car, %Car* %4, i32 0, i32 0
  %6 = call i8* @malloc(i32 100)
  store i8* %6, i8** %5
  %7 = load %Car*, %Car** %FCar
  %8 = getelementptr inbounds %Car, %Car* %7, i32 0, i32 1
  %9 = call i8* @malloc(i32 100)
  store i8* %9, i8** %8
  %mileage = alloca i8*
  %10 = call i8* @malloc(i32 100)
  store i8* %10, i8** %mileage
  %11 = call i8* @malloc(i32 100)
  %year = alloca i8*
  %12 = call i8* @malloc(i32 100)
  store i8* %12, i8** %year
  %13 = call i8* @malloc(i32 100)
  %cost = alloca i8*
  %14 = call i8* @malloc(i32 100)
  store i8* %14, i8** %cost
  %15 = call i8* @malloc(i32 100)
  %fstream = alloca i8*
  %16 = call i8* @fopen(i8* getelementptr inbounds ([9 x i8], [9 x i8]* @str, i32 0, i32 0), i8* getelementptr inbounds ([3 x i8], [3 x i8]* @str.1, i32 0, i32 0))
  store i8* %16, i8** %fstream
  %17 = call i8* @fopen(i8* getelementptr inbounds ([9 x i8], [9 x i8]* @str.2, i32 0, i32 0), i8* getelementptr inbounds ([3 x i8], [3 x i8]* @str.3, i32 0, i32 0))
  %18 = load i8*, i8** %fstream
  %19 = call i32 @fseek(i8* %18, i32 0, i32 0)
  %20 = load %Car*, %Car** %FCar
  %21 = getelementptr inbounds %Car, %Car* %20, i32 0, i32 0
  %22 = load i8*, i8** %21
  %23 = load i8*, i8** %fstream
  %24 = call i8* @fgets(i8* %22, i32 100, i8* %23)
  %25 = load %Car*, %Car** %FCar
  %26 = getelementptr inbounds %Car, %Car* %25, i32 0, i32 1
  %27 = load i8*, i8** %26
  %28 = load i8*, i8** %fstream
  %29 = call i8* @fgets(i8* %27, i32 100, i8* %28)
  %30 = load i8*, i8** %mileage
  %31 = load i8*, i8** %fstream
  %32 = call i8* @fgets(i8* %30, i32 100, i8* %31)
  %33 = load i8*, i8** %year
  %34 = load i8*, i8** %fstream
  %35 = call i8* @fgets(i8* %33, i32 100, i8* %34)
  %36 = load i8*, i8** %cost
  %37 = load i8*, i8** %fstream
  %38 = call i8* @fgets(i8* %36, i32 100, i8* %37)
  %39 = load %Car*, %Car** %FCar
  %40 = getelementptr inbounds %Car, %Car* %39, i32 0, i32 2
  %41 = load i8*, i8** %mileage
  %42 = call i32 @atoi(i8* %41)
  store i32 %42, i32* %40
  %43 = load %Car*, %Car** %FCar
  %44 = getelementptr inbounds %Car, %Car* %43, i32 0, i32 3
  %45 = load i8*, i8** %year
  %46 = call i32 @atoi(i8* %45)
  store i32 %46, i32* %44
  %47 = load %Car*, %Car** %FCar
  %48 = getelementptr inbounds %Car, %Car* %47, i32 0, i32 4
  %49 = load i8*, i8** %cost
  %50 = call i32 @atoi(i8* %49)
  store i32 %50, i32* %48
  %51 = load %Car*, %Car** %FCar
  %52 = getelementptr inbounds %Car, %Car* %51, i32 0, i32 0
  %53 = load i8*, i8** %52
  %54 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @str.4, i32 0, i32 0), i8* %53)
  %55 = load %Car*, %Car** %FCar
  %56 = getelementptr inbounds %Car, %Car* %55, i32 0, i32 1
  %57 = load i8*, i8** %56
  %58 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @str.5, i32 0, i32 0), i8* %57)
  %59 = load %Car*, %Car** %FCar
  %60 = getelementptr inbounds %Car, %Car* %59, i32 0, i32 2
  %61 = load i32, i32* %60
  %62 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @str.6, i32 0, i32 0), i32 %61)
  %63 = load %Car*, %Car** %FCar
  %64 = getelementptr inbounds %Car, %Car* %63, i32 0, i32 3
  %65 = load i32, i32* %64
  %66 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @str.7, i32 0, i32 0), i32 %65)
  %67 = load %Car*, %Car** %FCar
  %68 = getelementptr inbounds %Car, %Car* %67, i32 0, i32 4
  %69 = load i32, i32* %68
  %70 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @str.8, i32 0, i32 0), i32 %69)
  ret i32 0
}
