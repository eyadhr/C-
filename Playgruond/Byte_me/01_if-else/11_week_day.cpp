#include <stdio.h>

int main()
{
    int number_of_day;

    printf("Enter a number 1-7 : ");
    scanf("%d",&number_of_day);

    if ((number_of_day >= 1) && (number_of_day <= 7))
    {
        if (number_of_day == 1)
        {
            printf("Sunday");
        }
        else if (number_of_day == 2)
        {
            printf("Monday");
        }
        else if (number_of_day == 3)
        {
            printf("Tuesday");
        }
        else if (number_of_day == 4)
        {
            printf("Wednesday");
        }
        else if (number_of_day == 5)
        {
            printf("Thursday");
        }
        else if (number_of_day == 6)
        {
            printf("Friday");
        }
        else if (number_of_day == 7)
        {
            printf("Saturday");
        }

    }
        else
        {
        	printf("you are making me mad !");
		}
}
