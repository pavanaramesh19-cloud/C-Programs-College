#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        
        if (str[i] == str[i + 1]) {
            count++;
        } else {
            
            printf("%c%d", str[i], count);
            count = 1; 
        }
    }

    return 0;
}
