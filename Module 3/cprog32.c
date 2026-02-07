#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp[100];
    int i, j = 0;

    fgets(str, sizeof(str), stdin);

    // remove spaces
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ')
            temp[j++] = str[i];
    }
    temp[j] = '\0';

    // check palindrome
    int len = strlen(temp);
    for (i = 0; i < len / 2; i++) {
        if (temp[i] != temp[len - i - 1]) {
            printf("Not a palindrome\n");
            return 0;
        }
    }

    printf("Palindrome\n");
    return 0;
}