#include <stdio.h>

int main () 
{
  int a[20],n,i,j,temp;
  printf("Enter the no. of elements:");
  scanf("%d",&n);
  printf("Enter the elements of the array:");
  //INPUT>.....
  for (i=0; i<n; i++){
    scanf("%d",&a[i]);
  }
  //SORTING>......
  for (i=0; i<n-1; i++){
    for(j=i+1; j<n; j++){
        if(a[i] > a[j])
        {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        }
    }
  }
    //OUTPUT>......
  for(i=0 ; i<n; i++)
  printf("%d\t",a[i]);
 return 0;   
}

