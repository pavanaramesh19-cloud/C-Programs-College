#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0};  

    printf("Enter a string: ");
    scanf("%s", str);


    for (int i = 0; i < strlen(str); i++) {
        count[(int)str[i]]++;
    }

    
    for (int i = 0; i < strlen(str); i++) {
        if (count[(int)str[i]] == 1) {
            printf("First non-repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.\n");
    return 0;
}
