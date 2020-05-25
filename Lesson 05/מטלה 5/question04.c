#include <stdio.h>
int main ()
{
    float avg;
    int num,sum=0,c = 0;
    scanf("%d", &num); //67546

    do
    {

        c++;     // count
        sum += num%10;
        num /= 10; // remove last digit
    }
    while (num) ;

    avg = (float) sum/c;

printf ("c = %d sum = : %d avg = : %g", c,sum,avg);

}
