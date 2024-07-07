; ModuleID = 'amukh'
source_filename = "amukh"

%Frog = type { i32, float }

@Frog = external global %Frog

declare %Frog** @frog(i32)

define i32 @main() {
entry:
  %x = alloca i32
  store i32 5, i32* %x
  ret i32 0
}
