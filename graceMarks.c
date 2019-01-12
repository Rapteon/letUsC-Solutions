/*Program to calculate grace marks*/
/*AUTHOR:rapteon; DATE:2019-01-12*/

#include<stdio.h>

int main()
{
	int subject_class, failed, grace; /*subject_class = Class obtained byb student.
				     failed = number of subjects in which student failed.*/
	printf("Enter the class of result of the student...\n");
	printf("1 First\n");
	printf("2 Second\n");
	printf("3 Third\n");
	printf("Select 1/2/3 ?");
	scanf("%d", &subject_class);
	printf("Enter the number of subjects in which student failed...\n");
	scanf("%d", &failed);
	
	if(subject_class == 1)
	{
		if(failed>3)	
			grace = 0;
		if(failed<=3)
			grace = 5;		
		
	}
	else if(subject_class == 2)
	{
		if(failed>2)
			grace = 0;
		if(failed<=2)
			grace = 4;
	}
	else if(subject_class == 3)
	{
		if(failed>1)
			grace = 0;
		if(failed == 1)
			grace = 5;
	}
	printf("The grace marks obtained by the student is %d per subject.\n", grace);

}
