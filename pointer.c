#include<stdio.h>
int occurrances(int *arr_start,int size, int target){
  int *arr_end = arr_start + size;
  int count = 0;
  for(int *i = arr_start; i<arr_end;i++){
    if(*i == target){
     count++;   
    }
    
  }
  if(count == 0){
    return -1;
  }
  return count;
}
int main(){
int numbers[25],key,n,i;
int result;

printf("-----PROGRAM TO FIND THE COUNT OF GIVEN ELEMENT.-----\n");
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the numbers:");
for(i=0;i<n;i++){
    scanf("%d",&numbers[i]);
}

printf("Enter the number you want to count:");
scanf("%d",&key);
result = occurrances(numbers,n,key);

if(result == -1){
    printf("Key not found.");
}
else{
    printf("The %d occurs %d times.",key,result);
}


return 0;
}