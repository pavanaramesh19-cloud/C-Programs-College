#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int count = 0;
    char word[1000];
    int word_len = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            word[word_len++] = str[i];
        } else {
            if (word_len > 0) {
                int valid = 1;
                for (int k = 0; k < word_len; k++) {
                    if (!isalpha(word[k])) {
                        valid = 0;
                        break;
                    }
                }
                if (valid) count++;
                word_len = 0;
            }
        }
    }
    // check last word
    if (word_len > 0) {
        int valid = 1;
        for (int k = 0; k < word_len; k++) {
            if (!isalpha(word[k])) {
                valid = 0;
                break;
            }
        }
        if (valid) count++;
    }
    printf("%d\n", count);
    return 0;
}