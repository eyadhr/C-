#include <stdio.h>

int main()
{

    int div,num=10;
    printf("Enter a number you want me to div by");
    scanf("%d",&div)
    
    do
    {
        if(num % div == 0)
        printf("%d\t",num);

    num++;
        

    } while (num <=99);
}