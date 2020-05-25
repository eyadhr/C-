#include <stdio.h>

int main()
{
    int side1,side2,side3,sum;
    
    printf("Enter side 1 : ");
    scanf("%d",&side1);
    
    printf("\nEnter side 2 : ");
    scanf("%d",&side2);
    
    printf("\nEnter side 3 : ");
    scanf("%d",&side3);


	if (side1 > 0 && side2 > 0 && side3 > 0)
	{
	
	    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
	    {
	        if(side1 == side2 && side2 == side3)
            {
                printf("the triangle is equilateral !");
            }
            else if (side1 == side2 || side2 == side3 || side1 == side3)
            {
                printf("the triangle is isosceles !");
            }  
	    }  
		else
            {
                printf("the triangle is Scalene!");
            }
	}
    else
    {
        printf("your triangle is broken");
    }
    



}
