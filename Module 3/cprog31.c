#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char *token;

    fgets(str, sizeof(str), stdin);

    token = strtok(str, " \n");

    char smallest[50], largest[50];
    strcpy(smallest, token);
    strcpy(largest, token);

    while ((token = strtok(NULL, " \n")) != NULL) {
        if (strlen(token) < strlen(smallest))
            strcpy(smallest, token);
        if (strlen(token) > strlen(largest))
            strcpy(largest, token);
    }

    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);

    return 0;
}