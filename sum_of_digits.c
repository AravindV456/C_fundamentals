#include<stdio.h>
void main(){
    int n,digit,sum=0;
    scanf("%d",&n);
    while(n>0){
        digit = n % 10;
        sum += digit;
        n /= 10;
    }
    printf("The sum of digits is %d",sum);
}