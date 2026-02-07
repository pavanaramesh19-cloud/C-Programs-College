#include <stdio.h>

int main() {
    char str[1000];
    scanf("%s", str);
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            printf("%.*s\n", j - i + 1, &str[i]);
        }
    }
    return 0;
}