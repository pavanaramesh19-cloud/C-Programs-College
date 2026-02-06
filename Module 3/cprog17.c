#include <stdio.h>

int main() {
    char str[100];
    int i = 0, start, end;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    while (str[i] != '\0') {

        
        while (str[i] == ' ')
            i++;

        start = i;

        
        while (str[i] != ' ' && str[i] != '\0')
            i++;

        end = i - 1;

        while (start < end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }

        
        if (str[i] != '\0')
            i++;
    }

    printf("Output:\n%s", str);

    return 0;
}

