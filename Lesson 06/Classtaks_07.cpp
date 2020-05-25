#include <stdio.h>

int main()
{
    int num_1,num_2,low=0,high=0,temp;
    scanf("%d %d",&num_1,&num_2);

    if (num_1<num_2)
        temp=num_1;
    else
        temp=num_2;
    
    for (int i = 2; i < temp ; i++)
    {
        if (num_2 % i == 0 && num_1 % i == 0)
        {
            low=i;
            break;
        }
    }

    for (int i = temp; i > 1; i--)
    {
        if (num_2 % i == 0 && num_1 % i == 0)
        {
            high = i;
            break;
        }
    }

    if (high !=0 && low !=0)
        printf("high %d low %d",high,low);
    else
        printf("cant find any");
}