/*Program to convert any year in the Gregorian calendar to  year in Roman numerals; AUTHOR: rapteon; DATE: 13June2019*/

#include<stdio.h>

void convertYear(int year){
	int i, v, x, l, d, c, m;

	/*Weird logic which makes sense using pen & paper😶️*/

	m = year/1000;
	d = (year%1000)/500;
	c = ((year%1000)%500)/100;
	l = (((year%1000)%500)%100)/50;
	x = ((((year%1000)%500)%100)%50)/10;
	v = (((((year%1000)%500)%100)%50)%10)/5;
	i = (((((year%1000)%500)%100)%50)%10)%5;
	
	/*Excuse me for this kind of print statements.😅️*/

	printf("%d is equivalent to ", year);
	while(m > 0){
		printf("M");
		m--;	
	}
	while(d > 0){
		printf("D");
		d--;	
	}
	while(c > 0){
		printf("C");
		c--;	
	}
	while(l > 0){
		printf("L");	
		l--;
	}
	while(x > 0){
		printf("X");
		x--;	
	}
	while(v > 0){
		printf("V");
		v--;	
	}
	while(i > 0){
		printf("I");
		i--;	
	}
	printf("\n");		 
}
//Main function begins...
int main(){
	int year;
	char choice = 'Y';	
	
	while(choice == 'Y' || choice == 'y'){
		printf("Enter year: ");
		scanf("%d", &year);
		
		convertYear(year);
	
		printf("Enter another year? [Y/n]: ");
		scanf(" %c", &choice);
	}
}
