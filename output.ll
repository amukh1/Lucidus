; ModuleID = 'amukh'
source_filename = "amukh"

%Car = type { i8*, i8*, i32, i32 }

@Car = external global %Car
@str = private constant [14 x i8] c"Car name: %s\0A\00"
@str.1 = private constant [15 x i8] c"Car brand: %s\0A\00"
@str.2 = private constant [14 x i8] c"Car year: %d\0A\00"
@str.3 = private constant [15 x i8] c"Car price: %d\0A\00"

declare i32 @printf(i8*, ...)

define i32 @car(i8* %0, i8* %1, i32 %2, i32 %3) {
entry:
  %name = alloca i8*
  store i8* %0, i8** %name
  %brand = alloca i8*
  store i8* %1, i8** %brand
  %year = alloca i32
  store i32 %2, i32* %year
  %price = alloca i32
  store i32 %3, i32* %price
  %Camaro = alloca %Car*
  %4 = load %Car*, %Car** %Camaro
  %5 = getelementptr inbounds %Car, %Car* %4, i32 0, i32 0
  %6 = load i8*, i8** %name
  store i8* %6, i8** %5
  %7 = load %Car*, %Car** %Camaro
  %8 = getelementptr inbounds %Car, %Car* %7, i32 0, i32 1
  %9 = load i8*, i8** %brand
  store i8* %9, i8** %8
  %10 = load %Car*, %Car** %Camaro
  %11 = getelementptr inbounds %Car, %Car* %10, i32 0, i32 2
  %12 = load i32, i32* %year
  store i32 %12, i32* %11
  %13 = load %Car*, %Car** %Camaro
  %14 = getelementptr inbounds %Car, %Car* %13, i32 0, i32 3
  %15 = load i32, i32* %price
  store i32 %15, i32* %14
  %16 = load %Car*, %Car** %Camaro
  %17 = getelementptr inbounds %Car, %Car* %16, i32 0, i32 0
  %18 = load i8*, i8** %17
  %19 = alloca i8*
  store i8* %18, i8** %19
  %20 = load i8*, i8** %19
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @str, i32 0, i32 0), i8* %20)
  %22 = load %Car*, %Car** %Camaro
  %23 = getelementptr inbounds %Car, %Car* %22, i32 0, i32 1
  %24 = load i8*, i8** %23
  %25 = alloca i8*
  store i8* %24, i8** %25
  %26 = load i8*, i8** %25
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @str.1, i32 0, i32 0), i8* %26)
  %28 = load %Car*, %Car** %Camaro
  %29 = getelementptr inbounds %Car, %Car* %28, i32 0, i32 2
  %30 = load i32, i32* %29
  %31 = alloca i32
  store i32 %30, i32* %31
  %32 = load i32, i32* %31
  %33 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @str.2, i32 0, i32 0), i32 %32)
  %34 = load %Car*, %Car** %Camaro
  %35 = getelementptr inbounds %Car, %Car* %34, i32 0, i32 3
  %36 = load i32, i32* %35
  %37 = alloca i32
  store i32 %36, i32* %37
  %38 = load i32, i32* %37
  %39 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @str.3, i32 0, i32 0), i32 %38)
  ret i32 0
}
