#include<stdio.h>
int main()
{
    int a,b,c,sum;
    float avg;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    printf("enter value of c:");
    scanf("%d",&c);
    sum=a+b+c;
    avg=sum/3;
    printf("\nsum of a,b,c = %d",sum);
    printf("\naverage of sum = %f",avg);
    return 0;
}
