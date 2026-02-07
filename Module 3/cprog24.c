#include <stdio.h>
#include <string.h>
#include <ctype.h>
int is_vowel(char c) {
    c=tolower(c);
    if (c=='a'|| c=='e'||c=='i'||c=='o'||c=='u'){
        return 1;
    }
    return 0;
}
int main(){
    char str[100];
    int i;
    printf("enter a string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    for (i=0;str[i] != '\0'; i++){
        if(is_vowel(str[i])){
            str[i]='*';
        }
    }
    printf("\nNew String (after replacing vowels with '*') = %s\n", str);
    return 0;
}