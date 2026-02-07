#include <stdio.h>
#include <string.h>

int isRotation(char s1[], char s2[]) {
    if (strlen(s1) != strlen(s2)) return 0;
    char temp[200];
    strcpy(temp, s1);
    strcat(temp, s1);
    return strstr(temp, s2) != NULL;
}

int main() {
    printf("%d", isRotation("abcd", "cdab"));
}