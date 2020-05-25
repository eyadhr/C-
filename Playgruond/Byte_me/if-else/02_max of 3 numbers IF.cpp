#include <stdio.h>

int main()
{
	int num1,num2,num3,max;
	
	printf("Enter 3 numbers : \n");
	scanf("%d%d%d",&num1,&num2,&num3);

	if ((num1 >= num2) && (num1 >= num3))
	{
		max = num1;
	}
	else if ((num2 >= num1) && (num2 >= num3))
	{
		max = num2;
	}
	else if ((num3 >= num1) && (num3 >= num2))
	{
		max = num3;
	}
	
	printf("max number is : %d",max);


}


/* 	
	if (num1 >= num2) { // num1 max or max3
	
		if (num1 >= num3)
		{
			max = num1;
		}
		else 
		{
			max = num3;
		}
	}
	
	if (num2 >= num1 ) { // max2 or max3 
		if (num2 >= num3)
		{
			max = num2;
		}
		else
		{
			max = num3;
		}
	}
	
	if (num1 == num2 and num1 == num3) { // == max
		printf("max nmuber is : %d\n but you did all the same",num1);	
		
	}
	printf("your max number is : %d",max);
}



*/
