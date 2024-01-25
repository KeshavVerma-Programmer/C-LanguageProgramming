#include<stdio.h>
int main()
{
    int age[100],i,n,count=0;
    printf("/n input age of 100 person:");
    for(i=0;i<=100;i++)
    {
        if(age[i]>=50&&age[i]<=60)
            count++;
        else
        {
        continue ;}
    }
    printf("these are %d person whose age is in between 50 and 60 years",count);

    return 0;
}
