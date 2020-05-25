#include <stdio.h>

int main()
{
    int num,new_num=0,num_2,temp=0;
    scanf("%d %d", &num,&num_2);

    for ( ; num !=0 ; num /= 10)
    {
        temp = num % 10;
        new_num = new_num*10 + temp;
    }
    printf("%d",new_num);

    if (new_num == num_2)
        printf("\n Yes");
    else
        printf("\n No");
}