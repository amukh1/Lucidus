; ModuleID = 'amukh'
source_filename = "amukh"

%Frog = type { i8*, i32 }

@Frog = external global %Frog
@str = private constant [7 x i8] c"Kermit\00"
@str.1 = private constant [15 x i8] c"Frog Name: %s\0A\00"
@str.2 = private constant [14 x i8] c"Frog Age: %d\0A\00"
@str.3 = private constant [7 x i8] c"Froggy\00"
@str.4 = private constant [17 x i8] c"Froggy Name: %s\0A\00"
@str.5 = private constant [16 x i8] c"Froggy Age: %d\0A\00"
@str.6 = private constant [17 x i8] c"Sizeof Frog: %d\0A\00"

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

define i32 @main() {
entry:
  %frog = alloca %Frog*
  %0 = call i8* @malloc(i32 ptrtoint (%Frog* getelementptr (%Frog, %Frog* null, i32 1) to i32))
  %1 = bitcast i8* %0 to %Frog*
  store %Frog* %1, %Frog** %frog
  %2 = load %Frog*, %Frog** %frog
  %3 = getelementptr inbounds %Frog, %Frog* %2, i32 0, i32 0
  %4 = call i8* @malloc(i32 100)
  store i8* %4, i8** %3
  %5 = load %Frog*, %Frog** %frog
  %6 = getelementptr inbounds %Frog, %Frog* %5, i32 0, i32 0
  store i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str, i32 0, i32 0), i8** %6
  %7 = load %Frog*, %Frog** %frog
  %8 = getelementptr inbounds %Frog, %Frog* %7, i32 0, i32 1
  store i32 5, i32* %8
  %9 = load %Frog*, %Frog** %frog
  %10 = getelementptr inbounds %Frog, %Frog* %9, i32 0, i32 0
  %11 = load i8*, i8** %10
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @str.1, i32 0, i32 0), i8* %11)
  %13 = load %Frog*, %Frog** %frog
  %14 = getelementptr inbounds %Frog, %Frog* %13, i32 0, i32 1
  %15 = load i32, i32* %14
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @str.2, i32 0, i32 0), i32 %15)
  %froggy = alloca %Frog**
  store %Frog** %frog, %Frog*** %froggy
  %name = alloca i8**
  %17 = load %Frog*, %Frog** %frog
  %18 = getelementptr inbounds %Frog, %Frog* %17, i32 0, i32 0
  store i8** %18, i8*** %name
  %19 = load i8**, i8*** %name
  store i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str.3, i32 0, i32 0), i8** %19
  %20 = load %Frog**, %Frog*** %froggy
  %21 = load %Frog*, %Frog** %20
  %22 = getelementptr inbounds %Frog, %Frog* %21, i32 0, i32 0
  %23 = load i8*, i8** %22
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @str.4, i32 0, i32 0), i8* %23)
  %25 = load %Frog**, %Frog*** %froggy
  %26 = load %Frog*, %Frog** %25
  %27 = getelementptr inbounds %Frog, %Frog* %26, i32 0, i32 1
  %28 = load i32, i32* %27
  %29 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @str.5, i32 0, i32 0), i32 %28)
  %30 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @str.6, i32 0, i32 0), i32 ptrtoint (%Frog* getelementptr (%Frog, %Frog* null, i32 1) to i32))
  ret i32 0
}
