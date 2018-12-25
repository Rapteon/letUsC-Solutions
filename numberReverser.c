/*This program is used to reverse the order of digits in a 5 digit umber*/
/*AUTHOR:rapteon; DATE:2018-12-19;*/

#include<stdio.h>

int main(){

  int originalNum, reversedNum, ones, tens, hundreds, thousands, tThousands;

  printf("Enter the number to reverse...");
  scanf("%d",&originalNum);

  ones = originalNum % 10;
  originalNum = originalNum / 10;
  tens = originalNum % 10;
  originalNum = originalNum /10;
  hundreds = originalNum % 10;
  originalNum = originalNum / 10;
  thousands = originalNum % 10;
  originalNum = originalNum / 10;
  tThousands = originalNum % 10;

  reversedNum = ones*10000 + tens*1000 + hundreds*100 + thousands*10 + tThousands;

  printf("The reversed number is %d\n",reversedNum);
  if(originalNum == reversedNum)
    printf("The original and reversed numbers are the same.\n");
  else
  printf("The original and the reversed numbers are different.\n");

}
