/****Write a function to find and replace a string using library functions [strstr(), strncpy(), strlen(),
strcat(), strcpy(), etc.].
Input :
Source : This is test time
Find
: is
Replace: was
Output:
Thwas was test time******/

#include <stdio.h>

void findAndReplace(char* source, char* find, char* replace) {
    char* ptr = source;
    while (*ptr != '\0') {
        if (*ptr == *find) {
            *ptr = *replace;
        }
        ptr++;
    }
}

int main() {
    char source[100] = "This is test time";
    char find[2] = "is";
    char replace[3] = "was";
    findAndReplace(source, &find, &replace);
    printf("%s\n", source);
    return 0;
}
