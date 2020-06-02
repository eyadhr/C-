#include <stdio.h>
int calAvg(int x);

int main()
{
    int num;
    float avg;
    printf("Enetr a number : ");
    scanf("%d", &num);
    avg = calAvg(num);
    printf("The average is : %f ", avg);
}

calAvg(int x)
{
    int num;
    float sum=0,avg;
    for (int i = 1; i <= x; i++)
    {
        scanf("%d",&num);
        sum+=num;
    }
    avg=sum/x;

    return avg;  
}