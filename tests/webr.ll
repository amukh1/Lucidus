; ModuleID = 'amukh'
source_filename = "amukh"

@str = private constant [45 x i8] c"https://jsonplaceholder.typicode.com/posts/1\00"
@str.1 = private constant [29 x i8] c"GET / HTTP/1.1\0D\0AHost: %s\0D\0A\0D\0A\00"

declare i32 @printf(i8*, ...)

declare i8* @malloc(i32)

declare i8* @gets(i8*)

declare i32 @atoi(i8*)

declare i32 @socket(i32, i32, i32)

declare i32 @connect(i32, i8*, i32)

declare i32 @sprintf(i8*, ...)

declare i32 @read(i32, i8*, i32)

declare i32 @write(i32, i8*, i32)

declare i32 @close(i32)

declare i8* @memcpy(i8*, i8*, i32)

declare i8* @memset(i8*, i32, i32)

declare i8* @gethostbyname(i8*)

declare i32 @htons(i32)

declare i32 @inet_addr(i8*)

declare i32 @strlen(i8*)

define i32 @main() {
entry:
  %sockfd = alloca i32
  %serv_addr = alloca i32*
  %host = alloca i8*
  %port = alloca i32
  %tmp = alloca i8*
  %buf = alloca i8*
  %n = alloca i32
  store i8* getelementptr inbounds ([45 x i8], [45 x i8]* @str, i32 0, i32 0), i8** %host
  store i32 80, i32* %port
  %0 = call i8* @malloc(i32 1000)
  store i8* %0, i8** %tmp
  %1 = call i8* @malloc(i32 1000)
  store i8* %1, i8** %buf
  %2 = load i8*, i8** %host
  %3 = call i8* @gethostbyname(i8* %2)
  store i8* %3, i32** %serv_addr
  %4 = call i32 @socket(i32 2, i32 1, i32 0)
  store i32 %4, i32* %sockfd
  %5 = ptrtoint i32** %serv_addr to i32
  %6 = add i32 %5, 8
  %7 = inttoptr i32 %6 to i8*
  %8 = load i32, i32* %port
  %9 = call i32 @htons(i32 %8)
  store i32 %9, i8* %7
  %10 = ptrtoint i32** %serv_addr to i32
  %11 = add i32 %10, 16
  %12 = inttoptr i32 %11 to i8*
  %13 = load i8*, i8** %host
  %14 = call i32 @inet_addr(i8* %13)
  store i32 %14, i8* %12
  %15 = load i32, i32* %sockfd
  %16 = load i32*, i32** %serv_addr
  %17 = call i32 @connect(i32 %15, i32* %16, i32 16)
  %18 = load i8*, i8** %tmp
  %19 = load i8*, i8** %host
  %20 = call i32 (i8*, ...) @sprintf(i8* %18, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @str.1, i32 0, i32 0), i8* %19)
  %21 = load i32, i32* %sockfd
  %22 = load i8*, i8** %tmp
  %23 = load i8*, i8** %tmp
  %24 = call i32 @strlen(i8* %23)
  %25 = call i32 @write(i32 %21, i8* %22, i32 %24)
  %26 = load i8*, i8** %buf
  %27 = call i8* @memset(i8* %26, i32 0, i32 1000)
  br label %while

while:                                            ; preds = %then, %entry
  %28 = load i32, i32* %sockfd
  %29 = load i8*, i8** %buf
  %30 = call i32 @read(i32 %28, i8* %29, i32 1000)
  store i32 %30, i32* %n
  %31 = load i32, i32* %n
  %32 = icmp sgt i32 %31, 0
  br i1 %32, label %then, label %endThen

then:                                             ; preds = %while
  %33 = load i8*, i8** %buf
  %34 = load i32, i32* %n
  %35 = call i32 @write(i32 1, i8* %33, i32 %34)
  br label %while

endThen:                                          ; preds = %while
  %36 = load i32, i32* %sockfd
  %37 = call i32 @close(i32 %36)
  ret i32 0
}
