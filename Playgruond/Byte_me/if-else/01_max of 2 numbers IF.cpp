#include <stdio.h>

int main()
{
	int num1,num2;
	
	printf("Enter your numbers : \n");
	scanf("%d\n",&num1);
	scanf("%d",&num2);
	
	if (num1 > num2) {
	
	printf("max nmuber is : %d",num1);
	
	}
	
	if (num1 < num2) {
		printf("max nmuber is : %d",num2);
		
	}
	
	if (num1 == num2) {
		printf("max nmuber is : %d\n but you did both the same",num1);	
		
	}
	
}

/* 
	
*/
