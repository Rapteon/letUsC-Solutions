/*AUTHOR: rapteon; DATE: 13June2019; Program to calculate factorial of any number using a function.*/

#include<stdio.h>
#include<stdlib.h>


int facto(int num){
	int factorial = 1;	
	while(num > 0){
		factorial *=num;
		num--;
	}
	return factorial;
}

int main(){
	int input, factorial;
	char choice = 'Y';
	
	while(choice == 'y' || choice == 'Y'){	
		printf("Enter number to find factorial: ");
		scanf("%d", &input);
		
		factorial = facto(input);
		
		printf("The factorial of %d is %d\n", input, factorial);

		printf("Enter another number? [Y/n]:");
		scanf(" %c", &choice);
	}
}
