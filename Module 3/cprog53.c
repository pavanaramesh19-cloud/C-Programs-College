#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    char max_word[1000] = "";
    char min_word[1000] = "";
    int max_len = 0, min_len = INT_MAX;
    char word[1000];
    int word_len = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            word[word_len++] = str[i];
        } else {
            if (word_len > 0) {
                word[word_len] = '\0';
                if (word_len > max_len) {
                    max_len = word_len;
                    strcpy(max_word, word);
                }
                if (word_len < min_len) {
                    min_len = word_len;
                    strcpy(min_word, word);
                }
                word_len = 0;
            }
        }
    }
    // check last word
    if (word_len > 0) {
        word[word_len] = '\0';
        if (word_len > max_len) {
            max_len = word_len;
            strcpy(max_word, word);
        }
        if (word_len < min_len) {
            min_len = word_len;
            strcpy(min_word, word);
        }
    }
    printf("Largest word: %s\n", max_word);
    printf("Smallest word: %s\n", min_word);
    return 0;
}