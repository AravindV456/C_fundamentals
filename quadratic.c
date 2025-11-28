#include<stdio.h>
#include<math.h>
void main(){
float a,b,c,d;
//Taking inputs.
printf("Quadratic Equation Solution Finder.\n");
printf("Given the quadratic equation of form:ax^2+bx+c=0:\nEnter a:");
scanf("%f",&a);
printf("Enter b:");
scanf("%f",&b);
printf("Enter c:");
scanf("%f",&c);

//Calculation for the solutions.
 if (a==0){
    printf("Equation is not quadratic.");
 }

 d = (b*b)-(4*a*c);

 if (d<0){
    printf("Imaginary solutions.");
    int i = sqrt(-1);
    d = sqrt(d);
    printf("Solution = %f,",(-b+(d))/(2*a));
    printf("%.2f",(-b-(d))/(2*a));
    
 }
 else {
    d = sqrt(d);
    printf("Real solution.");
    printf("Solution = %f",(-b+(d))/(2*a));
    printf("%.2f",(-b-(d))/(2*a));
 }

}