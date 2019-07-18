/*Program to calculate sum of digits of a number using recursion; AUTHOR: rapteon; DATE: 2019-07-18*/


#include<stdio.h>

int digAdd(int x){
	int digit = x % 10, sum = 0;
	
	if(x == 0)
		sum = 0;
	else
		sum = digit + digAdd(x / 10);
	return(sum);
}

int main(){
	int num, sum;
	
	printf("Enter the number: ");
	scanf("%d", &num);

	sum = digAdd(num);

	printf("%d is the sum.\n", sum);
}
