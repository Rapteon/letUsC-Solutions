/*Program to find the absolute value of a number.*/
/*AUTHOR:rapteon; DATE:2018-12-25; EMAIL:surajnaranatt@gmail.com */

#include<stdio.h>

int main(){
  int num, absoluteNum;
  char rightArrow = 175;

  printf("Enter the number%c",rightArrow);
  scanf("%d",&num);
  if(num == 0){
    absoluteNum = num;
  }
  if(num<0){
    absoluteNum = -(num);
  }
  if(num>0){
    absoluteNum = num;
  }

  printf("The absolute value of the number is %d.\n",absoluteNum);
}
