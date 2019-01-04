/*This is a program to determine the hardness, carbon content and tensile strength of steel and output the grade of steel.*/
/*AUTHOR: Rapteon; DATE:2019-01-04*/

#include<stdio.h>

int main(){
	int grade, hardness,tStrength;
	float carbon;
		
	printf("Enter the hardness of the steel...");
	scanf("%d",&hardness);
	printf("Enter the carbon content of the steel...");
	scanf("%f",&carbon);
	printf("Enter the tensile strength of the steel...");
	scanf("%d",&tStrength);

	if((hardness>50)||(carbon<0.7)||(tStrength>5600)){
	grade=6;
	}	
	if((hardness>50)&&(carbon<0.7)&&(tStrength>5600)){
		grade=10;
	}
	else if((hardness>50)&&(carbon<0.7))
	{
	grade = 9;
	}
	else if((carbon<0.7)&&(tStrength>5600)){
	grade=8;
	}
	else if((hardness>50)&&(tStrength>5600)){
	grade=7;
	}
	
	else{
	grade=5;
	}
	
	printf("The steel is of grade %d.\n",grade);
}
