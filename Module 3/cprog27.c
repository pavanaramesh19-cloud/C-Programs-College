#include <stdio.h>

int main() {
    char str[100];

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            continue;   // skip newline if present
        printf("Character: %c  ASCII: %d\n", str[i], str[i]);
    }

    return 0;
}