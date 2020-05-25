#include <stdio.h>

int main()
{
    float cost,sell,Profit,loss;
    printf("Input cost price : ");
    scanf("%f",&cost);
    printf("Input selling price : ");
    scanf("%f",&sell);

    if(sell > cost)
    {
        Profit = sell - cost;
        printf("profit = %0.2f",Profit);
    }
    else if (cost > sell)
    {
        loss = cost - sell;
        printf("loss = %0.2f",loss);
    }
    else
    {
        printf("equal");
    }
    
    





}
