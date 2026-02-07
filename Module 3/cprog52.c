#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    scanf("%s %s", str1, str2);
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] > str2[i]) {
            printf("First is greater\n");
            return 0;
        } else if (str1[i] < str2[i]) {
            printf("Second is greater\n");
            return 0;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0') {
        printf("Equal\n");
    } else if (str1[i] == '\0') {
        printf("Second is greater\n");
    } else {
        printf("First is greater\n");
    }
    return 0;
}