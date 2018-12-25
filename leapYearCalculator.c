/*This is a program to calculate if a year is a leap year or ! */
/*AUHOR:rapteon; DATE:2018-12-20;*/

#include<stdio.h>

int main(){

  int year;

  printf("Enter the year: ");
  scanf("%d",&year);

  if((year % 4)!=0)
    printf("%d has 365 days, so is not a leap year.\n",year);
  else
    printf("%d is a leap year.\n",year);
}
