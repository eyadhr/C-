#include<stdio.h>

int main()
{
	char username [20];
	int items;
	float amount,payment,price;
	
		printf("Enter your name : ");
		scanf("%s",username);
		printf("Hello %s\nEnter number of items : ",username);
		scanf("%d",&items);
		printf("Enter price : ");
		scanf("%f",&price);
		printf("Number of items = %d\n",items);
		printf("The price of items = %g\n",price);
		payment = items * price;
		printf("Total for payment = %g\n",payment);
		printf("Enter amount paid : ");
		scanf("%f",&amount);
		if (amount != payment) 
			{
			printf("Payment did not equal the total of %g",payment);
			} 
		else 
		{
			printf("Total paid = %g\n",amount);	
			printf("Thanks for shopping at Baker's shop");
		}
		
	return 0;
}


