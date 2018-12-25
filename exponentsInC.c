/*C doesn't have an exponential operator*/
/*AUTHOR:rapteon;DATE:2018-12-19*/
#include<math.h>
#include<stdio.h>

int main(){
  int base,exponent;

  printf("Enter the base... ");
  scanf("%d",&base);

  printf("Enter the exponent... ");
  scanf("%d",&exponent);

  int powrNum=pow(base,exponent);
  printf("The result of %d to the power %d is %d.\n",base, exponent, powrNum);
}
