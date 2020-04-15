#include <stdio.h>

int main()
{
    int month_number;
    printf("Enter number of month (1 - 12) : ");
    scanf("%d",&month_number);

    const char * MONTH[] = {"January 31","February 28 OR 29 in leap year","March 31",
                            "April 30","May 31","June 30","July 31","August 31",
                            "September 30","October 31","November 30","December 31"};

    if(month_number >= 1 && month_number <= 12)
    {
        printf("%s", MONTH[month_number-1]);
    }
    else
    {
        printf("1 - 12 are the months i can help you with");
    }
    
}
