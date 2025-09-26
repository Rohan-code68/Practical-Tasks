#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

bool isVowel(char ch){
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}