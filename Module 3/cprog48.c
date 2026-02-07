#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }
    str[len] = '\0'; // remove newline
    int is_pal = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            is_pal = 0;
            break;
        }
    }
    if (is_pal) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}