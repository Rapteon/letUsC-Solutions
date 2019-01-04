/*Program to calculate the fine to be paid for returning  a book late.*/
/*AUTHOR:Rapteon; DATE:2019-01-04*/

#include<stdio.h>

int main(){
	int days;
	float penalty, ratePerDay;

	printf("Enter the number of days by which the book has been delayed...");
	scanf("%d",&days);
	
	if(days<=5){
		ratePerDay = 0.5;
		penalty = ratePerDay*days;
		printf("The penalty is %f rupees.\n",penalty);
	}
	else if(days>=6 && days<=10){
		ratePerDay = 1;
		penalty = ratePerDay*days;
		printf("The penalty is %f rupees.\n",penalty);
	}
	else if(days>10 && days<=30){
		ratePerDay = 5;
		penalty = ratePerDay*days;
		printf("The penalty is %f rupees.\n",penalty);
	}
	else if(days>30){
		printf("Your membership stands cancelled.\n");		
	}
	else{
	penalty = ratePerDay*days;
	printf("The penalty is %f rupees.\n",penalty);
	}

} 
