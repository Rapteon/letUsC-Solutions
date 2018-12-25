/*This program will receive a 5 digit number as input and add 1 to each of the digits of the number.*/
/*AUTHOR:rapteon; DATE:2018-12020;*/
/*NEED TO RE_CHECK*/
#include<stdio.h>

int main(){

  int originalNum,changedNum;
  char ones,tens, hundreds, thousands, tThousands;

  printf("Enter a 5-digit number...");
  scanf("%d",&originalNum);

  ones = originalNum % 10;
  originalNum = originalNum / 10;
  tens = originalNum % 10;
  originalNum = originalNum / 10;
  hundreds = originalNum % 10;
  originalNum = originalNum / 10;
  thousands = originalNum % 10;
  originalNum = originalNum / 10;
  tThousands = originalNum % 10;
  if(ones == 9 ||tens == 9 ||hundreds == 9 ||thousands == 9 ||tThousands == 9){
    printf("The number should not contain any nines...try again.\n");
  }
  else
  {
  ones = ones + 1;
  tens = tens + 1;
  hundreds = hundreds + 1;
  thousands = thousands + 1;
  tThousands = tThousands + 1;
  changedNum = ones + (10*tens) + (100*hundreds) + (1000*thousands) + (10000*tThousands);

  printf("The changed number is %d.\n",changedNum);
  }

}
