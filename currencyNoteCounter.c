/*This program is used to count the number of notes of different denominations to the withdrawer.*/
/*AUTHOR:rapteon;DATE:2018-12-19;*/

#include<stdio.h>

int main(){

  int amount,tens,fifties,hundreds,rupee5,rupee2,rupee1;

  printf("Enter the amount to withdraw...");
  scanf("%d",&amount);

  hundreds = amount / 100;
  amount = amount % 100;
  fifties = amount / 50;
  amount = amount % 50;
  tens = amount / 10;
  amount = amount % 10;
  rupee5 = amount / 5;
  amount = amount % 5;
  rupee2 = amount / 2;
  amount = amount % 2;
  rupee1 = amount / 1;

  printf("The number of hundred rupee notes required is %d.\n",hundreds);
  printf("The number of fifty rupee notes required is %d.\n",fifties);
  printf("The number of ten rupee notes/coins required is %d.\n",tens);
  printf("The number of 5 rupee coins required is %d.\n",rupee5);
  printf("The number of 2 rupee coins required is %d.\n",rupee2);
  printf("The number of 1 rupee coins required is %d.\n",rupee1);


}
