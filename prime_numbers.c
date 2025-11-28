#include <stdio.h>

int  main() {

    long int a, b, num, div;
    int i;
    printf("Enter the range (inclusive) separated by a space:");
    scanf("%ld %ld", &a, &b);
    if (a>b){
        printf("Invalid range.");
        return 0;
    }
    for (num = a; num <= b; num++){
        div = 0;
        for (i = 1; i<=num; i++){
            if (num % i ==0){
                div++;
            }
        }
        if (div == 2)
            printf("%ld ", num);
    }
         printf("\n");

    
    return 0;
    }
