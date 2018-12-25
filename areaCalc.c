/*Program to calculate the area of a rectangle and a square*/
/*AUTHOR:rapteon; DATE:2018-12-19; EMAIL:surajnaranatt@gmail.com */

#include<stdio.h>
#include<math.h>

int main(){

  float length, breadth, radius,arRectangle,arCircle;

  printf("Enter the length of the rectangle...");
  scanf("%f",&length);
  printf("Enter the breadth of the rectangle...");
  scanf("%f",&breadth);
  printf("Enter the radius of the circle...");
  scanf("%f",&radius);

  arRectangle = length*breadth;
  arCircle = 3.14 * (pow(radius,2));

  printf("The area of the rectangle is %f:\n",arRectangle);
  printf("The area of the circle is %f:\n",arCircle);

}
