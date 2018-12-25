/*Program to check if area of a rectangle is greater than its perimeter*/
/*AUTHOR:rapteon; DATE:2018-12-25*/

#include<stdio.h>
int main(){

  int length, breadth, perimeter, area;
  char rightArrow = 175;

  printf("Enter the length of the rectangle%c",rightArrow);
  scanf("%d",&length);
  printf("Enter the breadth of the rectangle%c",rightArrow);
  scanf("%d",&breadth);

  perimeter = 2*(length+breadth);
  area = length*breadth;

  if(perimeter>area){
    printf("The perimeter of the rectangle is greater than the area.\n");}
  else if(area>perimeter){
    printf("The area is greater than the perimeter.\n");}
  else{
  printf("The perimeter is numerically equal to the area.\n");}
}
