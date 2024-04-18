; ModuleID = 'amukh'
source_filename = "amukh"

%Car = type { i8*, i8*, i32, i32, i32 }

@Car = external global %Car
@str = private constant [13 x i8] c"Car Make: %s\00"
@str.1 = private constant [14 x i8] c"Car Model: %s\00"
@str.2 = private constant [17 x i8] c"Car Mileage: %d\0A\00"
@str.3 = private constant [14 x i8] c"Car Year: %d\0A\00"
@str.4 = private constant [14 x i8] c"Car Cost: %d\0A\00"
@str.5 = private constant [9 x i8] c"FCar.txt\00"
@str.6 = private constant [3 x i8] c"r+\00"

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
  %FCar = alloca %Car*
  %0 = call i8* @malloc(i32 20)
  %1 = bitcast i8* %0 to %Car*
  store %Car* %1, %Car** %FCar
  %2 = load %Car*, %Car** %FCar
  %3 = getelementptr inbounds %Car, %Car* %2, i32 0, i32 0
  %4 = call i8* @malloc(i32 100)
  store i8* %4, i8** %3
  %5 = load %Car*, %Car** %FCar
  %6 = getelementptr inbounds %Car, %Car* %5, i32 0, i32 1
  %7 = call i8* @malloc(i32 100)
  store i8* %7, i8** %6
  %mileage = alloca i8*
  %8 = call i8* @malloc(i32 100)
  store i8* %8, i8** %mileage
  %year = alloca i8*
  %9 = call i8* @malloc(i32 100)
  store i8* %9, i8** %year
  %cost = alloca i8*
  %10 = call i8* @malloc(i32 100)
  store i8* %10, i8** %cost
  %fstream = alloca i8*
  %11 = call i8* @fopen(i8* getelementptr inbounds ([9 x i8], [9 x i8]* @str.5, i32 0, i32 0), i8* getelementptr inbounds ([3 x i8], [3 x i8]* @str.6, i32 0, i32 0))
  store i8* %11, i8** %fstream
  %12 = load i8*, i8** %fstream
  %13 = call i32 @fseek(i8* %12, i32 0, i32 0)
  %14 = load %Car*, %Car** %FCar
  %15 = getelementptr inbounds %Car, %Car* %14, i32 0, i32 0
  %16 = load i8*, i8** %15
  %17 = load i8*, i8** %fstream
  %18 = call i8* @fgets(i8* %16, i32 100, i8* %17)
  %19 = load %Car*, %Car** %FCar
  %20 = getelementptr inbounds %Car, %Car* %19, i32 0, i32 1
  %21 = load i8*, i8** %20
  %22 = load i8*, i8** %fstream
  %23 = call i8* @fgets(i8* %21, i32 100, i8* %22)
  %24 = load i8*, i8** %mileage
  %25 = load i8*, i8** %fstream
  %26 = call i8* @fgets(i8* %24, i32 100, i8* %25)
  %27 = load i8*, i8** %year
  %28 = load i8*, i8** %fstream
  %29 = call i8* @fgets(i8* %27, i32 100, i8* %28)
  %30 = load i8*, i8** %cost
  %31 = load i8*, i8** %fstream
  %32 = call i8* @fgets(i8* %30, i32 100, i8* %31)
  %33 = load %Car*, %Car** %FCar
  %34 = getelementptr inbounds %Car, %Car* %33, i32 0, i32 2
  %35 = load i8*, i8** %mileage
  %36 = call i32 @atoi(i8* %35)
  store i32 %36, i32* %34
  %37 = load %Car*, %Car** %FCar
  %38 = getelementptr inbounds %Car, %Car* %37, i32 0, i32 3
  %39 = load i8*, i8** %year
  %40 = call i32 @atoi(i8* %39)
  store i32 %40, i32* %38
  %41 = load %Car*, %Car** %FCar
  %42 = getelementptr inbounds %Car, %Car* %41, i32 0, i32 4
  %43 = load i8*, i8** %cost
  %44 = call i32 @atoi(i8* %43)
  store i32 %44, i32* %42
  %45 = load %Car*, %Car** %FCar
  %46 = call i32 @printCarData(%Car* %45)
  ret i32 0
}
