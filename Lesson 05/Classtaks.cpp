#include <stdio.h>

int main()
{
    int num,n=1,sum=0;

    printf("Enter num : ");
    scanf("%d",&num);

    do
    {
        printf("%d ",n*n);
        sum += n*n;
        n++;
          
    }
    while (n<=num);

    printf("\n%d",sum);

}


//1 (3) 4 (5) 9 (7) 16 (9) 25 (11) 