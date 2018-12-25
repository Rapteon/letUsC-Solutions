/*Implicit type covnversion refers to the conversion of a constant value assigned to a variable to the datatype having higher precision*/
/*AUTHOR:rapteon; DATE:2018-12-19*/

#include<stdio.h>

int main(){

  int fourFloat=4.0;
  int fourInt=4;
  int twoFloat=2.0;
  int twoInt=2;

  /*Note that an operation on two real constants will give a real value.*/
  printf("%f",fourFloat/twoFloat);
  printf("\n");
  printf("---------\n");

  /*Note that an operation on two integer constants will give an integer value.*/
  printf("%d",fourInt/twoInt);
  printf("\n");
  printf("---------\n");

  /*Note that an operation on an integer and a real constant will give a real result.*/
  printf("%f",fourInt/twoFloat);
  printf("\n");
  printf("---------\n");

  /*Note that an operation involving multiple constants having different datatypes
  will produce a result which has the precision of the most precise datatype.*/
  printf("%f",twoInt+twoFloat-3);
  printf("\n");
  printf("Done.\n");

}
