/*Program to calculate prime factors of a number; AUTHOR: rapteon; EMAIL:surajnaranatt@gmail.com*/

#include<stdio.h>
#include<stdlib.h>

void calcFactors(int n){
	int primes[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59, 61, 67, 71, 73, 79, 83, 89, 97};
	int counter = 0;
	
	for(; counter!=17; counter++){
		if(n%primes[counter]!=0)
			continue;
		else
			printf("%d, ", primes[counter]);	
	}
	printf("%c%c \n", 8, 8);
	
}
int main(){
	int num;
	char choice = 'Y';

	printf("\033[2J");
	
	printf("************************************************************************\n");
	printf("*   Works only for numbers having largest prime factor of 97 or less   *\n");
	printf("************************************************************************\n");
	
	while(choice == 'y' || choice == 'Y'){
		printf("Enter the dragon: ");
		scanf("%d", &num);
	
		calcFactors(num);
		
		printf("Continue with dragons? [Y/n]\n: ");
		scanf(" %c", &choice);
	}
}
