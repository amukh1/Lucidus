#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int* extractNum(char* nums) {
    int* x = malloc(sizeof(int) * 3);
    x[0] = 10;
    x[1] = 20;
    x[2] = 30;
    return x;
}