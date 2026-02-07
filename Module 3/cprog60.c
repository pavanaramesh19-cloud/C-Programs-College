#include <stdio.h>
#include <string.h>

void expand(char *str, int left, int right, int *start, int *max_len, int len) {
    while (left >= 0 && right < len && str[left] == str[right]) {
        left--;
        right++;
    }
    int current_len = right - left - 1;
    if (current_len > *max_len) {
        *max_len = current_len;
        *start = left + 1;
    }
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (str[len - 1] == '\n') str[--len] = '\0';
    int start = 0, max_len = 1;
    for (int i = 0; i < len; i++) {
        expand(str, i, i, &start, &max_len, len); // odd length
        expand(str, i, i + 1, &start, &max_len, len); // even length
    }
    printf("%.*s\n", max_len, &str[start]);
    return 0;
}