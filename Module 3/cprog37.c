#include <stdio.h>
#include <string.h>

int rearrange(char s[]) {
    int freq[26] = {0};
    int n = strlen(s);

    for (int i = 0; i < n; i++)
        freq[s[i] - 'a']++;

    int max = 0;
    for (int i = 0; i < 26; i++)
        if (freq[i] > (n + 1) / 2)
            return 0;

    char res[n + 1];
    int idx = 0;

    for (int i = 0; i < 26; i++) {
        while (freq[i] > 0) {
            res[idx] = i + 'a';
            idx += 2;
            freq[i]--;
            if (idx >= n) idx = 1;
        }
    }
    res[n] = '\0';
    strcpy(s, res);
    return 1;
}

int main() {
    char s[] = "aaabb";
    if (rearrange(s))
        printf("%s", s);
    else
        printf("Not possible");
}