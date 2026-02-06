#include <stdio.h>
#include <string.h>

int main() {
    char url[200];
    int start = 0;

    printf("Enter URL: ");
    scanf("%s", url);


    if (strncmp(url, "http://", 7) == 0)
        start = 7;
    else if (strncmp(url, "https://", 8) == 0)
        start = 8;

    if (strncmp(&url[start], "www.", 4) == 0)
        start += 4;

    
    printf("Cleaned URL: ");
    for (int i = start; url[i] != '\0' && url[i] != '?'; i++) {
        if (url[i + 1] == '\0' && url[i] == '/')
            break;   
        printf("%c", url[i]);
    }

    return 0;
}
