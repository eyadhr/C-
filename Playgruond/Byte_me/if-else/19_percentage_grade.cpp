#include <stdio.h>

int main()
{
    float grade1,grade2,grade3,grade4,grade5,ave;
    printf("Input 5 grades : ");
    scanf("%f%f%f%f%f",&grade1,&grade2,&grade3,&grade4,&grade5);

    ave = (grade1 + grade2 + grade3 + grade4 + grade5) / 5;

      printf("Percentage = %0.2f\n",ave);

    if(ave >= 90)
    {
        printf("Grade A");
    }
    else if (ave >= 80)
    {
        printf("Grade B");  
    }
    else if (ave >= 70)
    {
        printf("Grade C");  
    }
    else if (ave >= 60)
    {
        printf("Grade D");  
    }
    else if (ave >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F"); 
    }

    
    





}
