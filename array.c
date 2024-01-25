#include<stdio.h>
 int main()
 {
     int avg,sum=0;
     int i;
     int marks[5];
     for(i=0;i<=5;i++)
     {

         printf(" enter marks");
         scanf("%d",&marks[i]);

     }
     for (i=0;i<=4;i++)
        sum=sum+marks[i];
     avg=sum/4;
     printf(" average marks=%d\n",avg);


     return 0;

 }