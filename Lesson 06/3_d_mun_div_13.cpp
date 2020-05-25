#include <stdio.h>

int main()
{
    int num, flag = 0;


    for (int test = 13; test <= 999; test++)
    {
        num=100;
        flag=0;

        for (num = 100; num >= 999 || flag==0; num++)
        {
            if (num%test==0)
            {
                flag=1;
            }
        }
        if (flag==0)
        {
        printf("num %d test %d \n", num-1,test);
        }
    }



}

/*
#include <stdio.h>

int main()
{
    int num, flag = 0;
    for (num = 100; num <= 999 && num%13!=0; num++);
    for (num = 100; num <= 999 && flag==0; num++)
    {
        if (num%13==0)
        {
            flag=1;
        }
    }
    if (flag==1)
    {
        printf("%d", num-1);
    }
    else
    {
        printf("Not");
    }
}
*/