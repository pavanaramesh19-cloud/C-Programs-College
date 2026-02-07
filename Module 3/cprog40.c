#include <stdio.h>
#include <string.h>

int main() {
    char email[] = "john.doe@gmail.com";
    char *at = strchr(email, '@');
    for (int i = 0; i < at - email; i++)
        printf("%c", email[i]);
}