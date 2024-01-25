#include<stdio.h>
int main()
{
    int l,b,area,peri;
    printf("length :");
    scanf("%d",&l);
    printf("breath :");
    scanf("%d",&b);
    area = l*b;
    peri = (2*b)+(2*l);
    printf("\narea :%d",area);
    printf("\nperameter :%d",peri);
    return 0;
}
