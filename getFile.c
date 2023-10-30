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