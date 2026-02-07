#include <stdio.h>

int main() {
    char str[100];

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (i % 2 == 0 && str[i] != '\n') {
            printf("%c ", str[i]);
        }
    }

    return 0;
}