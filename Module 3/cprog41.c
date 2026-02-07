#include <stdio.h>
#include <ctype.h>
#include <string.h>

int strongPassword(char s[]) {
    int u=0,l=0,d=0,sp=0;
    if (strlen(s) < 8) return 0;

    for (int i = 0; s[i]; i++) {
        if (isupper(s[i])) u=1;
        else if (islower(s[i])) l=1;
        else if (isdigit(s[i])) d=1;
        else sp=1;
    }
    return u && l && d && sp;
}

int main() {
    printf("%d", strongPassword("Abc@1234"));
}