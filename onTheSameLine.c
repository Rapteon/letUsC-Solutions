/*Program to check if three points are collinear.*/
/*AUTHOR:rapteon; DATE:2018-12-25 */

#include<stdio.h>

int main(){
  int x1, y1, x2, y2, x3, y3;
  char rightArrow = 175;

  printf("Enter the coordinates of the first point separated by a comma.%c",rightArrow);
  scanf("%d,%d",&x1, &y1);
  printf("Enter the coordinates of the second point separated by a comma.%c",rightArrow);
  scanf("%d,%d",&x2,&y2);
  printf("Enter the coordinates of the third point separated by a comma.%c",rightArrow);
  scanf("%d,%d",&x3,&y3);

  if(((y2-y1)/(x2-x1))==((y3-y1)/(x3-x1))){
    printf("The points lie on the same line.\n");
  }
  else
    printf("The points are not collinear.\n");
}
