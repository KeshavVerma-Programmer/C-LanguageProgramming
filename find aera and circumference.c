#include<stdio.h>
int main(){
  float radius,circum,area;
  printf("enter the radius of circle:");
  scanf("%f",&radius);
  area=3.14*radius*radius;
  circum=2*3.14*radius;
  printf("\n area of circle=%f",area);
  printf("\n circumfrence of circle=%f",&circum);
  return 0;
}
