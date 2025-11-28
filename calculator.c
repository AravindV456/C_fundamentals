#include<stdio.h>
#include<math.h>
void main(){
float a,b;
char op;
char choice;
do {
printf("CALCULATOR.\nEnter the operation which you want to do.\n '/' for division,\n'*' for multiplication,\n '+' for addition,\n '-' for subtraction:");
scanf("%c",&op);
printf("Enter number1:");
scanf("%f",&a);
printf("Enter number2:");
scanf("%f",&b);

switch(op) {
    case '+':
    printf("The sum = %f",a+b);
    break;

    case '-':
    printf("The subtracted value = %f",a-b);
    break;

    case '*':
    printf("Product = %f",a*b);
    break;

    case '/':
    printf("Quotient = %f",a/b);
    break;

    default:printf("Entered operation is invalid:/\n Enter operations:+,-,*,/.");
    
   }
    printf("\nDo you want to use the calculator again?(Y/N)\n");
    scanf(" %c",&choice);

    } while (choice == 'Y' || choice == 'y');

    printf("Thank you for using the calculator.");

}