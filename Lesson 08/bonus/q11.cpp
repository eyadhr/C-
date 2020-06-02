#include <conio.h>
#include <stdio.h>

float calAvg()
{
    int cut = 0, num, sum = 0;
    float avg = 0;
    scanf("%d",&num);

    while (num)
    {
        if (num%2==0)
        {
            sum += num;
            cut++;
        }
        scanf("%d", &num);
    }
    avg=sum/cut;
    return avg;
}

int main()
{
    int num;
    float avg;
    avg = calAvg();
    printf("The average is : %f ", avg);
    getch();
}
