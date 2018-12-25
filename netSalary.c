/*Calculates the net salary after deducting allowances such as rent and dearness.*/
/*AUTHOR:rapteon; DATE:2018-12-19*/

#include<stdio.h>
int main(){

float baseSal, dearSal, rent;

printf("Enter the base salary...\n");
scanf("%f",&baseSal);
dearSal = 0.40*baseSal;
rent = 0.20*baseSal;
float netSal = baseSal-dearSal-rent;
printf("The gross salary is %f.\n",netSal);
}
