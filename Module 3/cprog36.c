#include <stdio.h>

void caesarCipher(char s[], int k) {
    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = (s[i] - 'a' + k) % 26 + 'a';
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = (s[i] - 'A' + k) % 26 + 'A';
    }
}

int main() {
    char s[] = "Hello";
    caesarCipher(s, 3);
    printf("%s", s);
}