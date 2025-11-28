#include <stdio.h>
#include<string.h>

int main() {
    int n, i;
    printf("Enter the number of names to sort: ");
    scanf("%d", &n);
    char names[n][50];
    getchar();

    printf("Enter %d names one by one:\n", n);
    for (i = 0; i <n; i++) {
        fgets(names[i],sizeof(names[i]),stdin);
    }

    // Sorting names in alphabetical order using bubble sort
     for(i=0; i<n-1; i++) {
        for(int j = 0;j<n-i-1;j++){
        if (strcmp(names[j], names[j + 1]) > 0) {
            char temp[50];
            strcpy(temp,names[j]);
            strcpy(names[j], names[j + 1]);
            strcpy(names[j + 1], temp);
        }
      }
    }


    printf("\nNames arranged in alphabetical order:\n");
    for (i = 0; i <n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}