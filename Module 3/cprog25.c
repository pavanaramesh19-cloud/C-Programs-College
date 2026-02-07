#include <stdio.h>
#include <ctype.h> // Required for character classification functions

int main() {
    char str[100];
    int i;
    int uppercase_count = 0, lowercase_count = 0, digit_count = 0, special_count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            uppercase_count++;
        } else if (islower(str[i])) {
            lowercase_count++;
        } else if (isdigit(str[i])) {
            digit_count++;
        } else {
            // This counts any character that is not upper, lower, or a digit.
            special_count++;
        }
    }

    printf("\n--- Character Counts ---\n");
    printf("Uppercase letters: %d\n", uppercase_count);
    printf("Lowercase letters: %d\n", lowercase_count);
    printf("Digits: %d\n", digit_count);
    printf("Special characters (including whitespace/newline): %d\n", special_count);

    return 0;
}