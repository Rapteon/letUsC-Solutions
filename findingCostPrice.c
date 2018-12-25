/*Program to find the cost price of an item when total SP of 15 items and total profit are given*/
/*AUTHOR:rapteon; DATE:2018-12-20;*/

#include<stdio.h>

int main(){

  float totalSP,totalCP,totalProfit,numItems,itemCP;
  numItems = 15;

  printf("Enter the total selling price of the items...");
  scanf("%f",&totalSP);
  printf("Enter the total profit obtaines from the items...");
  scanf("%f",&totalProfit);

  itemCP = (totalSP-totalProfit)/numItems;

  printf("The cost price of each item is %f.\n",itemCP);

}
