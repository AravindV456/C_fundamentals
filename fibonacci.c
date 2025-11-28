#include<stdio.h>
//0 1 1 2 3 5 8 13 21 34 55
// f(n) = f(n-1) + f(n-2)
int fib(int n){
    if(n == 1){
        return 0;
    }
    else if(n == 2){
        return 1;
    }
    else
    return fib(n-1) + fib(n-2);
}

int main(){
    int n;
    printf("Enter the no. of terms of the fibonacci series you want to print:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
    printf("%d\t",fib(i));
    }
    return 0;
}