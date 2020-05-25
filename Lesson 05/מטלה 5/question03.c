#include <stdio.h>

void main()
{

    int sum = 0,num=0;
    int index = 0 ;
    

    do
    {
        scanf("%d",&num);

        sum = sum + num;
        index = index + 1;
    }
    while (sum <= 100);

    printf("%d", index);
}
