; ModuleID = 'amukh'
source_filename = "amukh"

%Car = type { i8*, i8*, i32, i32, i32, i32 (%Car*)* }

@Car = external global %Car
@str = private constant [10 x i8] c"Make: %s\0A\00"
@str.1 = private constant [11 x i8] c"Model: %s\0A\00"
@str.2 = private constant [13 x i8] c"Mileage: %d\0A\00"
@str.3 = private constant [10 x i8] c"Year: %d\0A\00"
@str.4 = private constant [10 x i8] c"Cost: %d\0A\00"
@str.5 = private constant [10 x i8] c"Chevrolet\00"
@str.6 = private constant [7 x i8] c"Camaro\00"

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

define i32 @print(%Car* %0) {
entry:
  %car = alloca %Car*
  store %Car* %0, %Car** %car
  %1 = load %Car*, %Car** %car
  %2 = getelementptr inbounds %Car, %Car* %1, i32 0, i32 0
  %3 = load i8*, i8** %2
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @str, i32 0, i32 0), i8* %3)
  %5 = load %Car*, %Car** %car
  %6 = getelementptr inbounds %Car, %Car* %5, i32 0, i32 1
  %7 = load i8*, i8** %6
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @str.1, i32 0, i32 0), i8* %7)
  %9 = load %Car*, %Car** %car
  %10 = getelementptr inbounds %Car, %Car* %9, i32 0, i32 2
  %11 = load i32, i32* %10
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @str.2, i32 0, i32 0), i32 %11)
  %13 = load %Car*, %Car** %car
  %14 = getelementptr inbounds %Car, %Car* %13, i32 0, i32 3
  %15 = load i32, i32* %14
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @str.3, i32 0, i32 0), i32 %15)
  %17 = load %Car*, %Car** %car
  %18 = getelementptr inbounds %Car, %Car* %17, i32 0, i32 4
  %19 = load i32, i32* %18
  %20 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @str.4, i32 0, i32 0), i32 %19)
  ret i32 0
}

define i32 @main() {
entry:
  %camaro = alloca %Car*
  %0 = call i8* @malloc(i32 21)
  %1 = bitcast i8* %0 to %Car*
  store %Car* %1, %Car** %camaro
  %2 = call i8* @malloc(i32 21)
  %3 = bitcast i8* %2 to %Car*
  %4 = load %Car*, %Car** %camaro
  %5 = getelementptr inbounds %Car, %Car* %4, i32 0, i32 0
  store i8* getelementptr inbounds ([10 x i8], [10 x i8]* @str.5, i32 0, i32 0), i8** %5
  %6 = load %Car*, %Car** %camaro
  %7 = getelementptr inbounds %Car, %Car* %6, i32 0, i32 1
  store i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str.6, i32 0, i32 0), i8** %7
  %8 = load %Car*, %Car** %camaro
  %9 = getelementptr inbounds %Car, %Car* %8, i32 0, i32 2
  store i32 10000, i32* %9
  %10 = load %Car*, %Car** %camaro
  %11 = getelementptr inbounds %Car, %Car* %10, i32 0, i32 3
  store i32 2010, i32* %11
  %12 = load %Car*, %Car** %camaro
  %13 = getelementptr inbounds %Car, %Car* %12, i32 0, i32 4
  store i32 20000, i32* %13
  %14 = load %Car*, %Car** %camaro
  %15 = getelementptr inbounds %Car, %Car* %14, i32 0, i32 5
  store i32 (%Car*)* @print, i32 (%Car*)** %15
  %16 = load %Car*, %Car** %camaro
  %17 = getelementptr inbounds %Car, %Car* %16, i32 0, i32 5
  %18 = load i32 (%Car*)*, i32 (%Car*)** %17
  %19 = load %Car*, %Car** %camaro
  %20 = call i32 %18(%Car* %19)
  ret i32 0
}
