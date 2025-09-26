#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

bool isVowel(char ch){
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

bool isConsonant(char ch){
    ch = tolower(ch);
    return (ch >= 'a' && ch <= 'z' && !isVowel(ch));
}

int main(){
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if(isVowel(ch)){
        printf("%c is a Vowel.\n", ch);
    } else if(isConsonant(ch)){
        printf("%c is a Consonant.\n", ch);
    } else {
        printf("%c is neither a Vowel nor a Consonant.\n", ch);
    }
    return 0;
}   