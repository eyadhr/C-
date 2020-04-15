#include<stdio.h>

int main()
{
	int number_of_work_hours_day_A,number_of_work_hours_day_B,number_of_work_hours_total;
	float hourly_wage,bus,total_wage;
	
		printf("number of work hours day 1 : ");
		scanf("%d",&number_of_work_hours_day_A);
		
		printf("number of work hours day 2 : ");
		scanf("%d",&number_of_work_hours_day_B);
			
		printf("what is your hourly wage : ");
		scanf("%f",&hourly_wage);
		
		printf("what is the price of a bus ticket : ");
		scanf("%f",&bus);
		
		number_of_work_hours_total = (number_of_work_hours_day_A + number_of_work_hours_day_B);
		printf("\n%d",number_of_work_hours_total);
		total_wage = (number_of_work_hours_total * hourly_wage) + (bus * 4) ;
		printf("\n%g",total_wage);
		
	
	printf("bus fare was %g for 2 day of work\n total wage for %d hours of work is %g",bus*4,number_of_work_hours_total,total_wage);
	
	
	
	
	return 0;

}


