#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getFile(char* fileName)
{
    // get file contents and return as char*
    FILE* file = fopen(fileName, "r");
    char* fileContents = malloc(1000);
    char* line = malloc(1000);
    while (fgets(line, 1000, file) != NULL)
    {
        strcat(fileContents, line);
    }
    fclose(file);
    return fileContents;
}

int outFile(char* fileName, char* contents)
{
    // write contents to file
    FILE* file = fopen(fileName, "w");
    fputs(contents, file);
    fclose(file);
    return 0;
}

// takes pointer && value and sets the value of the pointer to the value passed in
int set(int *x, int y, int i)
{
    *(x + i) = y;
    return 0;
}

int get(int *x, int i) {
    return *(x + i);
}

char* to_string(int x)
{
    int digits = 0;
    int temp = x;
    while (temp != 0)
    {
        temp /= 10;
        digits++;
    }
    char* str = malloc(digits * sizeof(char));
    sprintf(str, "%d", x);
    return str;
}

char* concat(char* f, char* b) {
    char* str = malloc(strlen(f) + strlen(b) + 1);
    strcpy(str, f);
    strcat(str, b);
    return str;
}