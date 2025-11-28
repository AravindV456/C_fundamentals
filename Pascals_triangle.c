#include <stdio.h>
#include<math.h>

int main() {
    int n, i , j,space,coef=1;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        for(space = 0; space < n - i; space++) 
            printf(" ");
        for (j=0; j<=i; j++) {
            if (j==0 || i==0)
            coef = 1;
            printf("%d ",coef);
        else
            coef = coef * (i-j+1)/j;
            printf("%d ", coef);
        
        }
        printf("\n");
    
    }
    return 0;
}