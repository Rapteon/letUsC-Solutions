//

#include<stdio.h>

int main(){
	//Here, spaces is the variable for decrementing the leading spaces.
	//'numbers' is the variable for the numbers to be printed.
	// 'i' is the counter for the lines. 'j' is the counter for position of numbers in a line.	
	int spaces, numbers = 1, lines = 5;
	 
	for(int i = 1; i < lines; i++){
		//Printing leading spaces. 'spaces > i' is used because the value of i increments with every execution of the loop while that of spaces begins with the same value each time.
		for(spaces = lines; spaces > i; spaces--)
			printf("\t");		
		for(int j = 1; j <= i; j++){
			printf("%d\t\t", numbers);
			numbers++;
			if(i == j)
				printf("\n");		
		}
	}
}

