 #include <stdio.h>

 int main()
 {
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
}



/*

 #include <stdio.h>

 int main()
 {
     int a,b,c,temp_low,temp_mid,temp_high;
     printf("Enter 3 numbers : ");
     scanf("%d %d %d",&a,&b,&c);

        temp_low = a;
        temp_mid = b;
        temp_high = c;

    if (a < b && a < c)
    {  
        temp_low = a;

        if (b > c)
        {
            temp_mid = c;
            temp_high = b;
        }

        a = temp_low;
        b = temp_mid;
        c = temp_high;

    }
    else if (b < a && b < c)
    {

        temp_low = b;
        if (a < c)
        {
            temp_mid = a;
            temp_high = c;
        }
        else
        {
            temp_mid = c;
            temp_high = a;
        }
        
        a = temp_low;
        b = temp_mid;
        c = temp_high;
    }
    else if (c < a && c < b)
    {

        temp_low = c;
        if (b < a)
        {
            temp_mid = b;
            temp_high = a;
        }
        else
        {
            temp_mid = a;
            temp_high = b;
        }
        a = temp_low;
        b = temp_mid;
        c = temp_high;
        
    }



    printf("%d %d %d",a,b,c);


}

*/