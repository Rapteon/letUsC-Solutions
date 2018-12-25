/*This is a program which calculates the sum of the digits of a five digits number.*/
/*AUTHOR:rapteon; DATE:2018-12-19;*/

#include<stdio.h>

int main(){

  int num,sum;
  printf("Enter the number to add digits...");
  scanf("%d",&num);

  sum = num % 10;
  num = num/10;
  sum = sum + (num % 10);
  num = num/10;
  sum = sum+ (num % 10);
  num = num/10;
  sum = sum + (num % 10);
  num = num/10;
  sum = sum + (num % 10);
  num = num/10;
  sum = sum + (num % 10);

  printf("The sum of the digits is %d.\n", sum);

}
