#include<stdio.h>

int seq_search(int arr[],int n,int key){
     int i;
     for(i=0; i<n;i++){
     if(arr[i] == key){
        return i;
     }
    }
    return -1;
}
int bin_search(int arr[],int n, int key){
    int i,j,temp;
    for (i=0; i<n-1; i++){
    for(j=i+1; j<n; j++){
        if(arr[i] > arr[j])
        {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        }
    }
   }
    int low,high,mid;
    low = 0;
    high = n-1;
    while(low <=high){
    mid = (low + high)/2;
    if(arr[mid] == key){
        return mid;
    }
    else if (arr[mid] < key){
        low = mid + 1;
    }
    else {
        high = mid - 1;
    }
 }
return -1;
}
int main(){
    int n,arr[100],key,choice,result;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    printf("Enter numbers:");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the key:");
    scanf("%d",&key);
    printf("Which search do you want to use,\n1.Sequential_search\n2.Binary search\n");
    scanf("%d",&choice);
    if (choice==2){
        result = bin_search(arr,n,key);
        if(result == -1){
            printf("The element is not found!");
        }
        else
        printf("The no. %d is at %d position.",key,result + 1);
    }
    else if(choice == 1){
        result = seq_search(arr,n,key);
        if(result == -1){
        printf("The element is not found!");
        }
        else
        printf("The no. %d is at %d position.",key,result + 1);
    }
    else
     printf("Invalid input!");
    
    
    return 0;
}