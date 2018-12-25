/*This program will output the day of the week of the date of 1st January in a given year. */
/*AUTHOR:rapteon; DATE:2018-12-20;*/

#include<stdio.h>

int main(){

  int year, difference, days, remDays,weekNumber, leapYears,normalYears;
  printf("Enter the year to display the day of the week on first January...\n");
  scanf("%d",&year);

  difference = year-1900;
  leapYears = difference/4;
  normalYears = difference - leapYears;
  days = (leapYears*366)+(normalYears*365);
  if(days<0){
    days = -(days);
  }
  printf("Number of days between 1900 and %d is %d.\n",year,days);
  remDays = days%7;

  if(remDays==1){
    printf("The day on 1-1-%d is Tuesday.\n",year);
  }
  if(remDays == 2){
    printf("The day on 1-1-%d is Wednesday.\n",year);
  }
  if(remDays == 3){
    printf("The day on 1-1-%d is Thursday.\n",year);
  }
  if(remDays==4){
    printf("The day on 1-1-%d is Friday.\n",year);
  }
  if(remDays == 5){
    printf("The day on 1-1-%d is Saturday.\n",year);
  }
  if(remDays == 6){
    printf("The day on 1-1-%d is Sunday.\n",year);
  }
  if(remDays == 0){
    printf("The day on 1-1-%d is Monday.\n",year);
  }
}
