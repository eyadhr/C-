<div align="center">

## מטלה מס 5' - לולאת do while 
<div align="right">

## שאלה 1
```cpp

    x = 10;
    y = 3;
    
    do
    {
        y *= 2;
    j = y / x;
    i = y % x;
    } while (j < i);
    printf("y = %d \n", y);
```

##### תשובה א
 6

 ```cpp
    int x = 5;
    int y = 3;
    do
        x += 2;
    while (x % y);
    printf("x = %d \n", x);
```
##### תשובה ב
 9


## שאלה 2
```cpp
    int i, sum, num1, num2;
    sum = 0;
    scanf(" %d %d", &num1, &num2);//4 & 8
    i = 1;
    do
    {

        sum = sum + num2;
        i = i + 1;
    }

    while (i <= num1);
    printf("%d", sum); // 32
}


```
##### תשובה א
 32
##### תשובה ב
 `num2` ו `num1` מכפיל את  


## שאלה 3
```cpp
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
```

## שאלה 4

```cpp
#include <stdio.h>
int main ()
{
    float avg;
    int num,sum=0,c = 0;
    scanf("%d", &num); //67546

    do
    {

        c++;     // count
        sum += num%10;
        num /= 10; // remove last digit
    }
    while (num) ;

    avg = (float) sum/c;

printf ("c = %d sum = : %d avg = : %g", c,sum,avg);
// c = 5 sum = : 28 avg = : 5.6
