/*Solution to determine if  number is odd or even*/
/*AUTHOR:rapteon; DATE:2018-12-20;*/

#include<stdio.h>

int main(){

  int num;

  printf("Enter a number...");
  scanf("%d",&num);

  if(num==0)
    printf("The number %d is neither even nor odd.\n",num);
  else{
      if(num%2==0)
        printf("The number is even.\n");
      else
        printf("The number is odd.\n");
  }

}
