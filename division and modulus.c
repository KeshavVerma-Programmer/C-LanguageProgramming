#include<stdio.h>
int main()
{
int a,b,division,modulus;
printf("enter the first value:");
scanf("%d",&a);
printf("enter the second value:");
scanf("%d",&b);
division=a/b;
modulus=a%b;
printf("\ndivision of a,b=%d",division);
printf("\nmodulus of a,b=%d",modulus);
 return 0;
 }
