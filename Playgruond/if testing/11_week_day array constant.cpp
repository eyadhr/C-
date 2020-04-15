#include <stdio.h>

int main()
{
    /* Declare constant name of weeks */
    const char * WEEKS[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    int week;

    /* Input week number from user */
    printf("Enter week number (1-7): ");
    scanf("%d", &week);
	
    if(week >= 1 && week <= 7)
    {
        /* Print week name using array index */
        printf("%s", WEEKS[week]);
    }
    else
    {
        printf("Invalid input! Please enter week number between 1-7.");
    }

    return 0;
}
