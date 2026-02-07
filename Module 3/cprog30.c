#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    int n = strlen(str);

    // remove newline if present
    if (str[n - 1] == '\n') {
        str[n - 1] = '\0';
        n--;
    }

    for (int i = 0; i < n; i++) {
        for (int len = 1; len <= n - i; len++) {
            for (int k = i; k < i + len; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}