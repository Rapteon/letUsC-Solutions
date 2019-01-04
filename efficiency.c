/*Program to calculate the efficiency of a worker.*/
/*AUTHOR:Rapteon; DATE:2019-01-04*/

#include<stdio.h>
int main(){
	float hours;
	
	printf("Enter the hours taken to complete work...");
	scanf("%f",&hours);
	
	if(hours>=2&&hours<=3){
		printf("The worker is highly efficient.\n");
	}
	else if(hours>=3&&hours<=4){
		printf("The worker must improve speed..\n");
	}
	else if(hours>=4&&hours<=5){
		printf("The worker needs to be trained more.\n");
	}
	else if(hours>5){
		printf("The worker may no longer work here.\n");
	}
	else{
		printf("Exceptional case. Check the input.\n");
	}

} 
