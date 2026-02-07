#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp[100];
    int n, len;

    fgets(str, sizeof(str), stdin);
    scanf("%d", &n);

    len = strlen(str);

    // remove newline if present
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    n = n % len;   // handle large N

    // copy rotated string
    int k = 0;
    for (int i = n; i < len; i++)
        temp[k++] = str[i];

    for (int i = 0; i < n; i++)
        temp[k++] = str[i];

    temp[k] = '\0';

    printf("%s\n", temp);
    return 0;
}