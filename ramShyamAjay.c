/*This program check the ages of three people to tell the user of the youngest person among the three.*/
/*AUTHOR:rapteon; DATE:2018-12-25;*/

#include<stdio.h>

int main(){
  int ram, shyam, ajay;

  printf("Enter the ages of Ram, Shyam and Ajay repectively..\n");
  printf("Ram:");
  scanf("%d",&ram);
  printf("Shyam:");
  scanf("%d",&shyam);
  printf("Ajay:");
  scanf("%d",&ajay);

  if(ram<shyam && ram < ajay){
    printf("Ram is the youngest.\n");
  }
  else if(shyam<ram && shyam<ajay){
    printf("Shyam is the youngest.\n");
  }
  else if (ajay<ram && ajay<shyam){
    printf("Ajay is the youngest.\n");
  }
  else
  printf("Cannot be determined due to two or more equal age values.\n./a");
}
