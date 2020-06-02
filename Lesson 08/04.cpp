#include <stdio.h>

int fun();
int isEven(int num);

int main()
{
    int result;
    result=fun();
    printf("%d",result);
}

int fun()
{
   int a,b,check1=0,check2=0;
   printf("enter 2 nums : ");
   scanf("%d %d",&a,&b);

   check1 = isEven(a);
   check1 = isEven(b);
   if (check1 ==1 && check2 ==1)
    {
       return(a+b);
    }
    else
    {
        return(a-b);
    }
    
}

int isEven(int num)
{
    if (num%2==0)
        return 1;
}

