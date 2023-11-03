#include "stdio.h"

int main() {
    int x = 3;

    *(&x) = 5;

    printf("%d\n", x);
    
}