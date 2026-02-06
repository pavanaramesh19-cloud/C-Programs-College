#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, vowels = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {

        
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' ||
            str[i]=='o' || str[i]=='u' ||
            str[i]=='A' || str[i]=='E' || str[i]=='I' ||
            str[i]=='O' || str[i]=='U') {

            vowels++;
        }
    
        else if (isdigit(str[i])) {
            digits++;
        }
        
        else if (!isalpha(str[i]) && !isdigit(str[i]) && str[i] != ' ') {
            special++;
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", special);

    return 0;
}
