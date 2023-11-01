#include <stdio.h>

// takes pointer && value and sets the value of the pointer to the value passed in
int set(int *x, int y)
{
    *x = y;
    return 0;
}