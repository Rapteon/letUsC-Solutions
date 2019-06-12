#include<stdio.h>

int main(){
	for(int i = 0; i < 24; i++){
		if(i == 0)
			printf("Midnight\n");		
		else if(i<12)
			printf("%d AM\n", i);
		else if(i > 12 && i < 25)
			printf("%d PM\n", i-12);
		else
			printf("Noon\n");
	}
}
