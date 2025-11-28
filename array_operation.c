#include <stdio.h>
int main(){
 int a[10][10],b[10][10],c[10][10],i,j,k,r1,r2,c1,c2,choice;

 printf("Enter order of first matrix:\n");
 scanf("%d %d",&r1,&c1);
 printf("Enter order of second matrix:\n");
 scanf("%d %d",&r2,&c2);
     
printf("For matrix addition ; 1\nmultiplication ; 2:\n");
scanf("%d",&choice);

    // Split for multiplication and addition with if else statement.
    if (choice == 1){
         if (r1 != r2 || c1 != c2){
        printf("Matrix addition is not possible\n");
        return 0;
    }
    // input first matrix
     printf("Enter elements of  matrix A:\n");
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            scanf("%d",&a[i][j]);
        }
    }
    // Second matrix input 
    printf("Enter elements of matrix B:\n");
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            scanf("%d",&b[i][j]);
        }
    }

        //Addition operation
        for(i=0; i<r1; i++){
            for(j=0; j<c1; j++){
                c[i][j] = a[i][j] + b[i][j];
            }
        }
    // Displaying result
    printf("The sum of two matrices is:\n");
     for(int i = 0; i < r; i++) {
         for(int j = 0; j < c; j++) {
             printf("%d  ", m1[i][j]);
         }
         printf("\n");
     }

        
    }

else if (choice == 2){
    if (c1 != r2){
        printf("Multiplication is not possible.\n"); 
        return 0;
    }
    //input
     printf("Enter elements of first matrix:\n");
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Enter elements of second matrix:\n");
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            scanf("%d",&b[i][j]);
        }
    }
    // multiplication operation
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            c[i][j] = 0;
            for(k=0; k<c1; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("The product of two matrices is:\n");
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    } 
}
else{
    printf("Invalid input\n");
}
 return 0;
}