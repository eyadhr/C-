#include <stdio.h>

int main()
{
    int angle1,angle2,angle3,sum;
    
    printf("Enter angle 1 : ");
    scanf("%d",&angle1);
    
    printf("\nEnter angle 2 : ");
    scanf("%d",&angle2);
    
    printf("\nEnter angle 3 : ");
    scanf("%d",&angle3);

	sum = angle1 + angle2 + angle3;
	
    if (sum == 180 && angle1 > 0 && angle2 > 0 && angle1 > 0 && angle3 > 0)
    {
        printf("you have entered valed angles");
    }
    else
    {
        printf("your triangle is broken");
    }
    



}
