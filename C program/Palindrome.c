#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(int n){
    int num = n;
    int rem,reversed = 0;
    if(n == 0){
        return true;
    }
    if(n>= 0 && n < 10) return true;
    while (n != 0) {
        rem = n % 10;
        reversed = reversed * 10 + rem;
        n = n/10;
    }
    if(n == num){
        return true;
    }
    return false;
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int check  = isPalindrome(n);
       printf("%d",check);


}