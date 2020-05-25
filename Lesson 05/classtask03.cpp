#include <stdio.h>

int main()
{

    int x = 2, y, num = 0;
    printf("Enter a number you want me to div by");
    scanf("%d", &num); //6 //324

    do
    {
        if(num%x==0) //6%2==0 //3%3==0
        {
            printf("%d ",x); //2 //3
            num/=x; // 6/2 = 3 //6/3=1
        }
        else
        {
            x++; // 2 //3
        }

    }
    while (num !=1 ); //3!=1  1=1

}