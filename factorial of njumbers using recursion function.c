#include<stdio.h>
int  fact(int num)
{
    if(num)
        return(num*fact(num-1));
        else
        return 1;
}
int main(){
int num;
printf("enter the factorial number:");
scanf("%d",&num);
printf("factorial number of %d is = %d",num,fact(num));
return 0;
}
