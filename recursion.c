#include<stdio.h>
int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else 
    return n * factorial(n-1);
}
int main(){
   int fact,n;
   printf("Enter the no:");
   scanf("%d",&n);
   fact = factorial(n);
   printf("The factorial of %d is %d:",n,fact); 
   return 0;
}