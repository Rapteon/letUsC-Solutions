/*AUTHOR: rapteon ; DATE: 2019-01-04*/
#include<stdio.h>

int main(){

	int age, health, city, sex;
	float premium, amount;

	printf("Enter your age.\n");
	scanf("%d",&age);
	printf("Enter your sex.\n");
	scanf("%d", &sex);
	printf("Rate your helath on a scale of 1 to 10.\n");
	scanf("%d",&health);
	printf("Do you live in a city?\n");
	printf("1 means you live in city and 0 means you don\'t.\n");
	scanf("%d",&city);

	if((health>=8)&&(age>=25)&&(age<=35)&&(city==1)&&(sex==0)){
		printf("Your premium is 4 per thousand and policy amount cannot exceed 200000.");
	}
	else if((health>=8)&&(age>=25&&age<=35)&&(city==1)&&(sex==1)){
		printf("Your premium is 3 per thousand and policy amount cannot exceed 100000.");
	}
	if((health<=6)&&(age>=25&&age<=35)&&(city==0)&&(sex==0)){
		printf("The premium is 6 per thousand and the policy amount cannot exceed 10000.");
	}
	else{
	printf("We cannot insure you.");
	}
}
