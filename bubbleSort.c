/*Program to try out bubble sorting on myself. AUTHOR: rapteon; EMAIL: surajnaranatt@gmail.com*/

#include<stdio.h>

void main(){
	int temp, swapped = 0, array[] = {1, 3, 27, 15, 91, 89, 7, 4, 6}; //Intiialization and declaration of variables.
	
	while(1){
		swapped = 0;
		for(int i = 0; i < 8; i++){
			if(array[i+1] < array[i]){
				temp = array[i];
				array[i] = array[i+1];
				array[i+1] = temp;
				swapped = 1;			
			}		
		}
		if(swapped == 0)
			break;
	}

	for(int count = 0; count < 9; count++)
		printf("%4d", array[count]);
	printf("\n");
}

//Done.


//So here's how it works...
	/*The condition inside the whiel loop is a constant number, which always means true.
	As a result, the while loop runs.
	
	Inside the loop, the value of swapped is set to 0.
	This is because during each pass(i.e. moving throght the array elements from left to right),
	swapping may occur, so the value of swapped may change, but this value(of swapped) should always be zero
	when we start the next pass.

	The first for loop(inside the while loop) is used to compare adjacent elements for finding the larger one of the two.
	
	And the if block inside the while is used to break out of the while loop if no swapping occurs, which is characteristic of the sorted array.
	*/
