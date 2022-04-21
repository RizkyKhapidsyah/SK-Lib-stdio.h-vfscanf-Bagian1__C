#pragma warning(disable:4996)

#include <stdio.h>
#include <stdarg.h>
#include <conio.h>

/*
    Source by CPlusPlus (https://www.cplusplus.com)
    Modified For Learn by RK
    I.D.E : VS2019
*/

void ReadStuff(FILE* stream, const char* format, ...) {
    va_list args;
    va_start(args, format);
    vfscanf(stream, format, args);
    va_end(args);
}

int main() {
    FILE* pFile;
    int val;
    char str[100];

    pFile = fopen("myfile.txt", "r");

    if (pFile != NULL) {
        ReadStuff(pFile, " %s %d ", str, &val);
        printf("I have read %s and %d", str, val);
        fclose(pFile);
    }

    _getch();
    return 0;
}