#include <stdio.h>

int main()
{
    float units,bill,temp;
    printf("Enter units : ");
    scanf("%f",&units);

    if(units <= 50)
    {
        bill = units * 0.5;
    }
    else if (units > 50 && units <= 150)
    {
        bill = 25 + ((units - 50) * 0.75);
    }
    else if (units > 150 && units <= 250)
    {
        bill = 100 + ((units - 150) * 1.2);
    }
    else /* 250 + */
    {
        bill = (220 + ((units - 250) * 1.5));
    }
    bill = bill * 1.2;  
    printf("your bill is : %g",bill);
    
    
    


}


/*
For first 50 units Rs. 0.50/unit 50
For next 100 units Rs. 0.75/unit 150
For next 100 units Rs. 1.20/unit 250
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/
