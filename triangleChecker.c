/*This program checks if the triangle is valid/not valid.*/
/*AUTHOR:rapteon; DATE:2018-12-25;*/
#include <stdio.h>

int main(){
  int angle1, angle2, angle3;
  char rightArrow =175;

  printf("Enter the first angle%c",rightArrow);
  scanf("%d",&angle1);
  printf("Enter the second angle%c",rightArrow);
  scanf("%d",&angle2);
  printf("Enter the third angle%c",rightArrow);
  scanf("%d",&angle3);

  if((angle1+angle2+angle3)==180)
    printf("The triangle is valid.\n");
  else
  printf("The triangle is not valid.\n");
}
