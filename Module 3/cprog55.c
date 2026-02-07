#include <stdio.h>

int main() {
    char str[1000];
    scanf("%[^\n]%*c", str);
    char old_char, new_char;
    scanf("%c %c", &old_char, &new_char);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == old_char) {
            str[i] = new_char;
        }
    }
    printf("%s\n", str);
    return 0;
}