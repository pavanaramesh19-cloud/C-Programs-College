#include <stdio.h>
#include <string.h>

int main() {
    char emails[][50] = {"a@gmail.com","b@yahoo.com","c@gmail.com"};
    int n = 3, gmail = 0, yahoo = 0;

    for (int i = 0; i < n; i++) {
        if (strstr(emails[i], "gmail.com")) gmail++;
        if (strstr(emails[i], "yahoo.com")) yahoo++;
    }

    printf("Gmail: %d\nYahoo: %d", gmail, yahoo);
}