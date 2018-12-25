/*Calculation of Simple Interest*/
/*written by rapteon 2018-12-19*/

#include<stdio.h>

int main(){
int p, n;
float r, si;

printf("Enter the principal amount...\n");
scanf("%d",&p);
printf("...rate of interest...");
scanf("%f",&r);
printf("and the time for the interest in years...");
scanf("%d",&n);
/*Formula for Simple Interest*/
si=p*r*n/100;

printf("For a principal %d, interest rate %f, and time %d years, the simple interest is: ", p, r, n);
printf("%f\n",si);
}
