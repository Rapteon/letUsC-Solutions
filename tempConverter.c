/*This program is used to convert temperature in degree Fahrenheit to degree Celsius*/
/*AUTHOR:rapteon; DATE:2018-12-19;*/

#include<stdio.h>

int main(){
  float given, celsiusTemp;

  printf("Enter the temperature in °F :");
  scanf("%f",&given);

  celsiusTemp = (given - 32)*5/9;
  printf("%f°F is  %f°C\n",given,celsiusTemp);
}
