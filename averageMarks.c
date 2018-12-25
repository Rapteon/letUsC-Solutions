/*A program to calculate average and percentage marks in 5 subjects...*/
/*AUTHOR:rapteon; DATE:2018-12-19*/

#include<stdio.h>

int main(){
  int physics, chemistry, math, economics, english, totalMarks, numSubjects;
  totalMarks = 500;
  numSubjects = 5;
  printf("Enter the marks obtained in physics...");
  scanf("%d",&physics);
  printf("Enter the marks obtained in chemistry...");
  scanf("%d",&chemistry);
  printf("Enter the marks obtained in mathematics...");
  scanf("%d",&math);
  printf("Enter the marks obtained in economics...");
  scanf("%d",&economics);
  printf("Enter the marks otained in english...");
  scanf("%d",&english);

  int average = (physics+chemistry+math+economics+english)/numSubjects; /*Here 5 is the number of subjects*/
  printf("The average of the given marks is %d\n",average);

  float percentage = (physics+chemistry+math+economics+english)*100/totalMarks;
  printf("The percentage of marks obtained is %f\n", percentage);
}
