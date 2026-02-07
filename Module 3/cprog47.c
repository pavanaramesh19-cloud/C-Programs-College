#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }
    str[len] = '\0'; // remove newline
    // reverse the string
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    printf("%s\n", str);
    return 0;
}