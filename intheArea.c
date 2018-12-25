/*Program to check if a point is inside a circle or not.*/
/*AUTHOR:rapteon; DATE:2018-12-25*/

#include<stdio.h>
#include<math.h>

int main(){
  int x, y, xDash, yDash;
  int minNum1, minNum2;
  float radius, distance;
  char rightArrow =175;

  printf("Enter the coordinates of the center of the circle%c",rightArrow);
  scanf("%d,%d",&x,&y);
  printf("Enter the radius of the circle%c",rightArrow);
  scanf("%f",&radius);
  printf("Enter the coordinates of the other point%c",rightArrow);
  scanf("%d,%d",&xDash,&yDash);
  minNum1 = pow((xDash-x),2);
  minNum2 = pow((yDash-y),2);
  distance = sqrt(minNum1+minNum2);

  if(radius==distance){
    printf("The point lies on the circle.\n");
  }
  else if(radius>distance){
    printf("The point lies inside the circle.\n");
  }
  else if(radius<distance){
    printf("The point lies outside the circle.\n");
  }

}
