#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int visited[256];
    int start = 0, maxLen = 0, startIndex = 0;

    printf("Enter the string: ");
    gets(str);

    for (int i = 0; i < 256; i++)
        visited[i] = -1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (visited[str[i]] >= start) {
            start = visited[str[i]] + 1;
        }

        visited[str[i]] = i;

        int hasDigit = 0;
        for (int j = start; j <= i; j++) {
            if (isdigit(str[j])) {
                hasDigit = 1;
                break;
            }
        }

        int length = i - start + 1;
        if (hasDigit && length > maxLen) {
            maxLen = length;
            startIndex = start;
        }
    }

    if (maxLen > 0) {
        printf("Longest substring: ");
        for (int i = startIndex; i < startIndex + maxLen; i++)
            printf("%c", str[i]);
        printf("\nLength: %d\n", maxLen);
    } else {
        printf("No valid substring found.\n");
    }

    return 0;
}