/*This is program to convert speed from km/hr to m/s and vice-versa*/
/*AUTHOR:rapteon; DATE:2018-12-19*/

#include<stdio.h>

int main(){

  float km, m, cm, feet, inch;

  printf("Enter the distance in kilometers...\n");
  scanf("%f",&km);

  m = km*1000;
  cm = km*1000000;
  feet = km*3280.84;
  inch = km*3280.84*12;

  printf("The distance in metres is %f.\n",m);
  printf("The distance in centimenters is %f.\n",cm);
  printf("The distance in feet is %f.\n",feet);
  printf("The distance in inches is %f.\n ",inch);

}
