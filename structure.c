#include<stdio.h>
struct mark_list
    {
     int roll;
     char name[25];
     float mark[10];
     float total;
     float avg;
    };
int main(){
    int i,j,n;
    printf("Enter the no. of students:");
    scanf("%d",&n);
    getchar();
    struct mark_list s[n];

    printf("Enter the rollno,name and mark of three subjects:\n");

    for(i=0; i<n; i++){
        printf("----Student%d---\n",i+1);

        printf("Enter the roll no:");
        scanf("%d",&s[i].roll);
        getchar();

        printf("Enter name:");
        fgets(s[i].name,sizeof(s[i].name),stdin);

        s[i].total = 0;
        printf("Enter marks:");
      for(j=0; j<3; j++){
        scanf("%f",&s[i].mark[j]);
        s[i].total += s[i].mark[j];
      }
      s[i].avg = s[i].total/3.0;
       getchar();
    }
    printf("MARKLIST\n");
    printf("| %-8s | %-25s | %-8s | %-8s | %-8s || %-8s | %-8s |\n",
           "Roll no", "Name", "Sub1", "Sub2", "Sub3", "Total", "Average");
    for(i=0;i<n;i++){
    printf("| %-8d | %-25s | %-8.2f | %-8.2f | %-8.2f || %-8.2f | %-8.2f |\n",s[i].roll,s[i].name,s[i].mark[0],s[i].mark[1],s[i].mark[2],s[i].total,s[i].avg);   
        
      if(i==n-1){
       printf("____________________________________________________\n");
      }
    }
    return 0;
    }
    