#include <stdio.h>

int main()
{
    float gross = 0,Basic,hra = 0,da = 0;
    printf("Enter Basic Salary : ");
    scanf("%f",&Basic);
    


    if(Basic <= 10000)
    {
    hra = Basic * 0.8;
    da = Basic * 0.2;
    }
    else if(Basic >= 10001 && Basic <= 20000)
    {
    hra = Basic * 0.9;
    da = Basic * 0.25;   
    }
    else if(Basic >=20001)
    {
    hra = Basic * 0.95;
    da = Basic * 0.3; 
    }

    gross =  Basic + da + hra;
    printf("Gross salary = %0.2f",gross);

}
