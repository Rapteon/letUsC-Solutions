/*Program to determine of the triangle is isosceles, equilateral or scalene.*/
/*AUTHOR:Rapteon; DATE:2019-01-04*/

#include<stdio.h>

int main(){
	float side1, side2, side3;
	
	printf("Enter the first side of the triangle...");
	scanf("%f",&side1);
	printf("Enter the second side of the triangle...");
	scanf("%f",&side2);
	printf("Enter the final side of the triangle...");
	scanf("%f",&side3);
	
	if(((side1+side2)>side3)||((side2+side3)>side1)||((side1+side3)>side2)){	
		if(side1==side2&&side1==side3){
			printf("The triangle is equilateral.\n");
		}
		else if(side1!=side2&&side1!=side3){
			printf("The triangle is scalene.\n");
		}
		else if(side1==side2||side2==side3||side1==side3){
			printf("The triangle is isoscles.\n");
		}
	}
	else{
	printf("The triangle cannot be formed.");
	}	
}
