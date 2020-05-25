#include <stdio.h>

int  main()
{
    int num1,d1,d2;
    printf("enter num : ");
    scanf("%d",&num1);
            d1 = num1 /10;
            d2 = num1 %10;

    if (num1 < 99 && num1 > 10) 
    {
        if (d1 > d2)
            {printf("%d",d1);}

                else if (d2 > d1)
                    {printf("%d",d2);}
                        else
                            {printf("Equal");}
        

    }
    else
    {
    printf("NO");
    }
}


/*

שאלה 7
    int num1,d1,d2;
    printf("enter num : ");
    scanf("%d",&num1);
            d1 = num1 /10;
            d2 = num1 %10;

    if (num1 < 99 && num1 > 10) 
    {
        if (d1 > d2)
            {printf("%d",d1);}

                else if (d2 > d1)
                    {printf("%d",d2);}
                        else
                            {printf("Equal");}
        

    }
    else
    {
    printf("NO");
    }}


שאלה 6

    int num1,num2,num3;
    printf("enter 3 num : ");
    scanf("%d %d %d",&num1,&num2,&num3);

    if (num1 < num2 && num2 < num3) 
            {
            printf("up");
            }
            else if ( num1 > num2 && num2 > num3)
                {
                printf("DOWN");
                }
                else
                    {
                    printf("NO");
                    }



שאלה 5

    int num1,num2,num3;
    printf("enter 3 num : ");
    scanf("%d %d %d",&num1,&num2,&num3);

    if (num1 < num2 && num2 < num3) 
            {
            printf("yes");
            }
            else
                {
                printf("NO");
                }


שאלה 4

    int num1,num2;
    printf("enter 2 num : ");
    scanf("%d %d",&num1,&num2);

    if (num1 >0 && num2 >0) 
            {
            printf("%d",num1+num2);
            }
        else if (num1 <0 && num2<0)
                {
                printf("%d",num1*num2);
                }
            else
                {
                printf("NO");
                }

שאלה 3

    int num1;
    printf("enter num : ");
    scanf("%d",&num1);

    if (num1 >0)
            {
            printf("Positive");
            }
        else if (num1 <0)
                {
                printf("Negative");
                }
            else
                {
                printf("Zero");
                }


שאלה 1+2

    int num1,num2;
    float div_re;
    printf("enter 2 nums : ");
    scanf("%d %d",&num1,&num2);
    if (num2 !=0)
    {
        div_re =(float) num1/num2;
        printf("%f",div_re);
    }
    else
    {
        printf("Error Zero was entered")
    }
    */
    
