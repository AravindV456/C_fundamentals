#include<stdio.h>

int main (){
int var;
char choice;
float base,h,a,Ar;
const float Pi=3.14;

do {
printf("Enter respective numbers to find area: 1 for square \n 2 for rectangle \n 3 for triangle \n 4 for circle.\n");
scanf("%d",&var);

switch(var){
    case 1:printf("Enter side of square:\n");
    scanf("%f",&a);
    Ar = a*a;
    printf("Area of square = %.2f\n",Ar);
    break;

    case 2:{printf("Enter breadth:");
    scanf("%f",&h);
    printf("Enter length:");
    scanf("%f",&a);
    Ar = h * a;  
    printf("Area of rectangle =%.2f\n",Ar);}
    break;

    case 3:printf("Enter base:");
    scanf("%f",&base);
    printf("Enter height:");
    scanf("%f",&h);
    Ar = 0.5* base *h;
    printf("Area of triangle =%.2f\n",Ar);
    break;

    case 4:printf("Enter radius:");
    scanf("%f",&h);
    Ar = Pi*h*h;
    printf("Area of the circle = %.2f\n",Ar);
    break;

    default:printf("Invalid input:/\n");
   
   }
    printf("\nDo you want to calculate another area? (y/n): ");
        scanf(" %c", &choice); // space before %c to consume leftover newline

    } while (choice == 'y' || choice == 'Y');

    printf("Thanks for using the area calculator. Goodbye!\n");


return 0;
}