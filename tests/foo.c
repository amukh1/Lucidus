#include <stdio.h>

int main() {
printf("Hello");
goto foo;
printf("World!");
foo: printf("Goodbye");
}