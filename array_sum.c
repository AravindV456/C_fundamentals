#include<stdio.h>
int main() {
    int  i, a[20],sum = 0;
    float avg;
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  printf("Enter the elements: ");
  for(i = 0; i < n; i++) {
      scanf("%d", &a[i]);
      sum = sum + a[i];
  }
   printf("Sum is %d", sum);
   avg = (float)sum/n;
   printf("\nAverage is %f", avg);
   

 return 0;
}