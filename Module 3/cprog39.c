#include <stdio.h>
#include <string.h>

int isValidEmail(char s[]) {
    char *at = strchr(s, '@');
    char *dot = strrchr(s, '.');
    return at && dot && at < dot;
}

int main() {
    printf("%d", isValidEmail("test@gmail.com"));
}