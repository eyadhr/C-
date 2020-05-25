#include <stdio.h>

int main()
{
    int num,res;
    printf("Enter number ");
    scanf("%d",&num);

    res = (num %2 == 0) ? num * num : num * 2;
    printf("%d",res);

}


/*
    question 8 ?
    
    int num,res;
    printf("Enter number ");
    scanf("%d",&num);

    res = (num %2 == 0) ? num * num : num * 2;
    printf("%d",res);


/*
    question 7 ?

    int val,flag=0;
    float num1, num2;
    float res;

    printf("enter 2 numbers: ");
    scanf("%d%d", &num1, &num2);

    printf(" 1 : add \n 2 : sub \n 3 :mul \n 4 : div \n ");
    scanf("%d", &val);
    switch (val)
    {
            case 1 :res = num1 + num2 ;
            break; // + brake;
            case 2 :res = num1 - num2 ;
            break; // + brake;
            case 3 :res = num1 * num2 ;
            break; // + brake;
            case 4 :res = num1 / num2 ; 
            break; // + brake;
            default :printf("wrong function selection \n");
                     flag = 1 ;
    }
    if (flag==0)
    printf("the resualt is : %.2f\n", res);
    }

א.
wrong function selection
ב.
add break to any case
ג.
1. 34 + 45 = 79
2. 15 - 10 = 5
3. 15 * 5 = 75
4. wrong function selection
ד.
6
turn num1,num2 in to float
*/

/*
    question 6

    int a,b,c;
    printf("Enter 3 numbers ");
    scanf("%d%d%d",&a,&b,&c);

    if(a >= b && a >= c)
    {
        printf("%d",a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d",b);
    }
    else
    {
        printf("%d",c);
    }

    question 5

int a,b,c,temp;
     printf("Enter 3 numbers : ");
     scanf("%d %d %d",&a,&b,&c);

    if (a >= b && a >= c)
    {  
            temp = c;
            c = a;
            a = temp;
    }
    
    if (b >= a && b >= c)
    {
        temp = c;
        c = b;
        b = temp;

    }
    
    if (b <= a)
    {
        temp = a;
        a = b;
        b = temp;

    }
    printf("%d %d %d",a,b,c);

    question 4

    int number;
    printf("Enter number ");
    scanf("%d",&number);

    if(number > 0 || number < 0)
    {
        if (number > 0)
        {
            printf("POITIVE");
        }
        else
        {
            printf("NEG");
        }
        
    }
    else
    {
        printf("ZERO");
    }

    question 3

    int number,num,num10;
    printf("Enter number ");
    scanf("%d",&number);

    if((number > 9 && number < 100) || (number > -100 && number < -9 ))
     {
        num = (number %10) + (number /10);
        printf("\n%d",num);
    }
    else
    {
        printf("ERROR");
    }


    question 2

    int number;
    printf("Enter number ");
    scanf("%d",&number);

    if((number > 99 && number < 1000) || (number > -1000 && number < -99 ))
     {
        printf("YES");
    }
    else
    {
        printf("NO");
    }


    question 1 

    int a,b,c;
    printf("Enter 3 numbers ");
    scanf("%d%d%d",&a,&b,&c);

    if(a < b && b < c)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
*/
