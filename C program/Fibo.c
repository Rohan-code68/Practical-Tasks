// 0 1 1 2 3 5

#include<stdio.h>

int Fibonacci (int n){
    if(n == 0) return 0;
    if (n== 1) return 1;

    return Fibonacci(n-1) + Fibonacci(n-2);
}

int main(){
    int n;
    printf("Enter the number up to which you want Fibonacci Series: ");
    scanf("%d",&n);

    printf("fibbonacci series up to %d terms: ",n);
    for(int i =0 ; i<n ; i++){
        printf("%d ", Fibonacci(i));
    }
    printf("/n");
return 0;
}
