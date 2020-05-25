#include <stdio.h>

int main()
{

	int number;
	printf("Enter a number : ");
	scanf("%d",&number);
	
	if ((number % 5 == 0) && (number % 11 == 0) && (number != 0))
	{
		printf("%d is div by 5 and 11",number);
	}
	
	
	
	/*
	
	if(number == 0)
	{
		printf("\nyour number cant div by 5 or 11 :(");
	}
    else if (div5 == 0)
        {
		printf("\ninput divs dy 5");
        }	 
	else if (div11 == 0)
        {
		printf("\ninput divs by 11");
		}
		
		*/
	
}

