#include <stdio.h>
#include <string.h>

int main() {
    char S[1000], T[1000];
    scanf("%s %s", S, T);
    int len1 = strlen(S), len2 = strlen(T);
    if (len1 != len2) {
        printf("No\n");
        return 0;
    }
    char temp[2000];
    strcpy(temp, S);
    strcat(temp, S);
    if (strstr(temp, T) != NULL) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}