#include<stdio.h>
#include<stdbool.h>

bool prime(int n){
   for(int i = 2; i < n; i++){
    if(n%i == 0){
        return false;
    }
   }

   return true;
}



int main(){

    int n;
     printf(" Enter the Number: ");
     scanf("%d",&n);
    bool Check = prime(n);
    printf("%d is %d",n,Check);
    return 0;
}