#include<stdio.h>

int main()
{
	int bus,pe;
	float number_of_bus;
	scanf("%d",&pe);
	scanf("%d",&bus);
	
	number_of_bus = pe/bus + (pe%bus!=0);
	
	
	printf("%f",number_of_bus);

	return 0;
}
