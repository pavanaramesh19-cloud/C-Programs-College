#include <stdio.h>
#include <string.h>

int main() {
    char phone[] = "9876543210";
    int n = strlen(phone);

    for (int i = 0; i < n - 4; i++)
        phone[i] = '*';

    printf("%s", phone);
}