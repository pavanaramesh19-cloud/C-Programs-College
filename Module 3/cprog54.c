#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    scanf("%s %s", str1, str2);
    int freq1[256] = {0}, freq2[256] = {0};
    for (int i = 0; str1[i] != '\0'; i++) {
        freq1[(unsigned char)str1[i]]++;
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        freq2[(unsigned char)str2[i]]++;
    }
    int is_anagram = 1;
    for (int i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) {
            is_anagram = 0;
            break;
        }
    }
    if (is_anagram) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}