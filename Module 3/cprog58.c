#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int seen[256] = {0};
    char result[1000];
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!seen[(unsigned char)str[i]]) {
            seen[(unsigned char)str[i]] = 1;
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    printf("%s", result);
    return 0;
}