; ModuleID = 'amukh'
source_filename = "amukh"

%Car = type { i8*, i8*, i32, i32 }

@Car = external global %Car
@str = private constant [7 x i8] c"Camaro\00"
@str.1 = private constant [7 x i8] c"Chevvy\00"
@str.2 = private constant [14 x i8] c"Car name: %s\0A\00"
@str.3 = private constant [15 x i8] c"Car brand: %s\0A\00"
@str.4 = private constant [14 x i8] c"Car year: %d\0A\00"
@str.5 = private constant [15 x i8] c"Car price: %d\0A\00"

declare i32 @printf(i8*, ...)

define i32 @main() {
entry:
  %Camaro = alloca %Car*
  %0 = load %Car*, %Car** %Camaro
  %1 = getelementptr inbounds %Car, %Car* %0, i32 0, i32 0
  store i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str, i32 0, i32 0), i8** %1
  %2 = load %Car*, %Car** %Camaro
  %3 = getelementptr inbounds %Car, %Car* %2, i32 0, i32 1
  store i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str.1, i32 0, i32 0), i8** %3
  %4 = load %Car*, %Car** %Camaro
  %5 = getelementptr inbounds %Car, %Car* %4, i32 0, i32 2
  store i32 1969, i32* %5
  %6 = load %Car*, %Car** %Camaro
  %7 = getelementptr inbounds %Car, %Car* %6, i32 0, i32 3
  store i32 50000, i32* %7
  %8 = load %Car*, %Car** %Camaro
  %9 = getelementptr inbounds %Car, %Car* %8, i32 0, i32 0
  %10 = load i8*, i8** %9
  %11 = alloca i8*
  store i8* %10, i8** %11
  %12 = load i8*, i8** %11
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @str.2, i32 0, i32 0), i8* %12)
  %14 = load %Car*, %Car** %Camaro
  %15 = getelementptr inbounds %Car, %Car* %14, i32 0, i32 1
  %16 = load i8*, i8** %15
  %17 = alloca i8*
  store i8* %16, i8** %17
  %18 = load i8*, i8** %17
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @str.3, i32 0, i32 0), i8* %18)
  %20 = load %Car*, %Car** %Camaro
  %21 = getelementptr inbounds %Car, %Car* %20, i32 0, i32 2
  %22 = load i32, i32* %21
  %23 = alloca i32
  store i32 %22, i32* %23
  %24 = load i32, i32* %23
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @str.4, i32 0, i32 0), i32 %24)
  %26 = load %Car*, %Car** %Camaro
  %27 = getelementptr inbounds %Car, %Car* %26, i32 0, i32 3
  %28 = load i32, i32* %27
  %29 = alloca i32
  store i32 %28, i32* %29
  %30 = load i32, i32* %29
  %31 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @str.5, i32 0, i32 0), i32 %30)
  ret i32 0
}
