#include <stdio.h>

int main()
{
	int number;
	
	printf("Enter number : ");
	scanf("%d",&number);
	
	if (number >= 0) 
	{
		if (number > 0)
		{
			printf("number is postive");
		}
		else
		{
			printf("number is 0");
		}
	}
	else 
	{
		printf("number is negtive");
	}
}
