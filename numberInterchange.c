/*This program swaps the values of two integer constants with each other's values.*/
/*AUTHOR:rapteon; DATE:2018-12-19;*/

#include<stdio.h>
int main(){

  int num1, num2,num3;

  printf("Enter the first number: ");
  scanf("&d",&num1);
  printf("Enter the second number: ");
  scanf("%d",&num2);

  num3 = num1;
  num1 = num2;
  num2 = num3;

  printf("\nThe first number is now %d\n", num1);
  printf("The second number is now %d\n",num2);

}
