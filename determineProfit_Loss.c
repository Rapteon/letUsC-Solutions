/*Program which allows cost price and selling price as input to determine profit or loss.*/
/*AUTHOR:rapteon; DATE:2018-12-20;*/

#include<stdio.h>

int main(){

  float cp, sp, difference;

  printf("Enter the selling price...");
  scanf("%f",&sp);
  printf("Enter the cost price...");
  scanf("%f",&cp);

  difference = sp - cp;
  if(difference<0)
    printf("You made a loss of %f on each product.\n",difference);
  else
    printf("You mad a profit of %f on each product.\n",difference);

}
