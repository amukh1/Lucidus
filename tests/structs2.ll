; ModuleID = 'amukh'
source_filename = "amukh"

%Car = type { i8*, i8*, i32, i32, i32 }

@Car = external global %Car
@str = private constant [13 x i8] c"Car Make: %s\00"
@str.1 = private constant [14 x i8] c"Car Model: %s\00"
@str.2 = private constant [17 x i8] c"Car Mileage: %d\0A\00"
@str.3 = private constant [14 x i8] c"Car Year: %d\0A\00"
@str.4 = private constant [14 x i8] c"Car Cost: %d\0A\00"
@str.5 = private constant [16 x i8] c"Sizeof Car: %d\0A\00"
@str.6 = private constant [9 x i8] c"FCar.txt\00"
@str.7 = private constant [3 x i8] c"r+\00"

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

define i32 @printCarData(%Car* %0) {
entry:
  %car = alloca %Car*
  store %Car* %0, %Car** %car
  %1 = load %Car*, %Car** %car
  %2 = getelementptr inbounds %Car, %Car* %1, i32 0, i32 0
  %3 = load i8*, i8** %2
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @str, i32 0, i32 0), i8* %3)
  %5 = load %Car*, %Car** %car
  %6 = getelementptr inbounds %Car, %Car* %5, i32 0, i32 1
  %7 = load i8*, i8** %6
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @str.1, i32 0, i32 0), i8* %7)
  %9 = load %Car*, %Car** %car
  %10 = getelementptr inbounds %Car, %Car* %9, i32 0, i32 2
  %11 = load i32, i32* %10
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @str.2, i32 0, i32 0), i32 %11)
  %13 = load %Car*, %Car** %car
  %14 = getelementptr inbounds %Car, %Car* %13, i32 0, i32 3
  %15 = load i32, i32* %14
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @str.3, i32 0, i32 0), i32 %15)
  %17 = load %Car*, %Car** %car
  %18 = getelementptr inbounds %Car, %Car* %17, i32 0, i32 4
  %19 = load i32, i32* %18
  %20 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @str.4, i32 0, i32 0), i32 %19)
  ret i32 0
}

define i32 @main() {
entry:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @str.5, i32 0, i32 0), i32 ptrtoint (%Car* getelementptr (%Car, %Car* null, i32 1) to i32))
  %FCar = alloca %Car*
  %1 = call i8* @malloc(i32 28)
  %2 = bitcast i8* %1 to %Car*
  store %Car* %2, %Car** %FCar
  %3 = load %Car*, %Car** %FCar
  %4 = getelementptr inbounds %Car, %Car* %3, i32 0, i32 0
  %5 = call i8* @malloc(i32 100)
  store i8* %5, i8** %4
  %6 = load %Car*, %Car** %FCar
  %7 = getelementptr inbounds %Car, %Car* %6, i32 0, i32 1
  %8 = call i8* @malloc(i32 100)
  store i8* %8, i8** %7
  %mileage = alloca i8*
  %9 = call i8* @malloc(i32 100)
  store i8* %9, i8** %mileage
  %year = alloca i8*
  %10 = call i8* @malloc(i32 100)
  store i8* %10, i8** %year
  %cost = alloca i8*
  %11 = call i8* @malloc(i32 100)
  store i8* %11, i8** %cost
  %fstream = alloca i8*
  %12 = call i8* @fopen(i8* getelementptr inbounds ([9 x i8], [9 x i8]* @str.6, i32 0, i32 0), i8* getelementptr inbounds ([3 x i8], [3 x i8]* @str.7, i32 0, i32 0))
  store i8* %12, i8** %fstream
  %13 = load i8*, i8** %fstream
  %14 = call i32 @fseek(i8* %13, i32 0, i32 0)
  %15 = load %Car*, %Car** %FCar
  %16 = getelementptr inbounds %Car, %Car* %15, i32 0, i32 0
  %17 = load i8*, i8** %16
  %18 = load i8*, i8** %fstream
  %19 = call i8* @fgets(i8* %17, i32 100, i8* %18)
  %20 = load %Car*, %Car** %FCar
  %21 = getelementptr inbounds %Car, %Car* %20, i32 0, i32 1
  %22 = load i8*, i8** %21
  %23 = load i8*, i8** %fstream
  %24 = call i8* @fgets(i8* %22, i32 100, i8* %23)
  %25 = load i8*, i8** %mileage
  %26 = load i8*, i8** %fstream
  %27 = call i8* @fgets(i8* %25, i32 100, i8* %26)
  %28 = load i8*, i8** %year
  %29 = load i8*, i8** %fstream
  %30 = call i8* @fgets(i8* %28, i32 100, i8* %29)
  %31 = load i8*, i8** %cost
  %32 = load i8*, i8** %fstream
  %33 = call i8* @fgets(i8* %31, i32 100, i8* %32)
  %34 = load %Car*, %Car** %FCar
  %35 = getelementptr inbounds %Car, %Car* %34, i32 0, i32 2
  %36 = load i8*, i8** %mileage
  %37 = call i32 @atoi(i8* %36)
  store i32 %37, i32* %35
  %38 = load %Car*, %Car** %FCar
  %39 = getelementptr inbounds %Car, %Car* %38, i32 0, i32 3
  %40 = load i8*, i8** %year
  %41 = call i32 @atoi(i8* %40)
  store i32 %41, i32* %39
  %42 = load %Car*, %Car** %FCar
  %43 = getelementptr inbounds %Car, %Car* %42, i32 0, i32 4
  %44 = load i8*, i8** %cost
  %45 = call i32 @atoi(i8* %44)
  store i32 %45, i32* %43
  %46 = load %Car*, %Car** %FCar
  %47 = call i32 @printCarData(%Car* %46)
  ret i32 0
}
