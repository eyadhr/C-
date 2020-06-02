<div align="center">

###  תרגול כיתה בנושא פונקציות
##### מאת : זאב בייקר
___
<div align="right">

___
#### שאלה 1

##### .א
```cpp
#include <stdio.h>
int func1(int x); 
int main()
{
    int number, sum;
    scanf("%d", &number); //3284
    sum = func1(number); 
    printf("sum = %d", sum); // 17
}
int func1(int x) //3284
{
    int s = 0;
    while (x) //3284!=0
    {
        s += x % 10; //0+4+8+2+3
        x /= 10; //328 , 32 ,3 ,0
    }
    return (s); // 17
}
```

א. 17
ב. מחשבת את סכום הספרות 
ג. פונקציה המקבלת ערכים ומחזירה ערך אחד


##### .ב
```cpp
#include <stdio.h>

void func2(int x);
int main()
{
    int number, sum;
    scanf("%d", &number); //3284
    func2(number); 
}

void func2(int x)
{
    int s = 0, cnt = 0;
    while (x) //3284
    {
        s += x % 10; //3284
        x /= 10;
        cnt++;
    }
    printf("sum = %d , count = %d", s, cnt);
}
```
א. 4 17 
ב. מחשבת את סכום הספרות וכמות הספרות
ג	פונקציה המקבלת ערכים אך אינה מחזירה ערך.


##### .ג
```cpp

#include <stdio.h>
float func3(); //   הצהרה על הפונקציה
int main()
{
    float avg;
    avg = func3(); // קריאה לפונקציה
    printf("average = %f", avg);
}

float func3() // כותרת הפונקציה
{
    int n, s = 0, cnt = 0;
    scanf("%d", &n); //3284
    while (n)        //3284
    {
        s += n % 10; //17
        n /= 10;
        cnt++; //4
    }
    return ((float)s / cnt); //4.25
}
```
א.4.25
ב.מחשבת את ממוצע הספרות
ג	פונקציה שאינה מקבלת ערכים אך מחזירה ערך אחד.


##### .ד
```cpp
#include <stdio.h>
void func4();
int main()
{
    func4();
}

void func4()
{
    int n, digit, sum1 = 0, sum2 = 0;
    scanf("%d", &n); //3284
    while (n)        //3284
    {
        digit = n % 10; //3,2,8,4
        (digit % 2) ? sum1 += digit : sum2 += digit; // sum1 = 3 sum2 = 14
        n /= 10;
    }
    printf("sum1 = %d , sum2 = %d", sum1, sum2); // sum1 = 3 sum2 = 14
}
```
א. sum1 = 3 sum2 = 14
ב.מחשבת את סכום המספרים הזוגים והאי זוגים
ג	פונקציה שאינה מקבלת ערכים ואינה מחזירה ערך.


#### שאלה 2

```cpp
#include <stdio.h>
int isEven(int num);

int main()
{
    int num, res;
    printf("Enetr the first number : ");
    scanf("%d", &num);
    while (num)
    {
        res = isEven(num); // קריאה לפונקציה
        if (res == 1)
            printf("The number %d is even !\n", num);
        else
            printf("The number %d is odd !\n", num);
        printf("Enetr the next number : ");
        scanf("%d", &num);
    }
}

int isEven(int num)
{
    if (num%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

```

#### שאלה 3

```cpp
#include <stdio.h>
int calAvg(int x);

int main()
{
    int num;
    float avg;
    printf("Enetr a number : ");
    scanf("%d", &num);
    avg = calAvg(num);
    printf("The average is : %f ", avg);
}

calAvg(int x)
{
    int num;
    float sum=0,avg;
    for (int i = 1; i <= x; i++)
    {
        scanf("%d",&num);
        sum+=num;
    }
    avg=sum/x;

    return avg;  
}

```

#### שאלה 4

```cpp
#include <stdio.h>
int findMax(int a, int b);

int main()
{
    int a, b, max;
    printf("Enetr two numbers : ");
    scanf("%d %d", &a, &b);
    max = findMax(a, b);
    printf("max is : %d ", max);
}

int findMax(int a,int b)
{
    if (a>=b)
    {
        return a;
    }
    else
    {
        return b;
    }
 
}
```

<div align="center">

###  חלק ב' - בשיטת Bottom-Up
___
<div align="right">

#### שאלה 5

א. 13
ב. A+B

#### שאלה 6

א. 2.666667
ב.  מחשב את ממוצע 3 מיספרים

#### שאלה 7
```
******
******
******
```
#### שאלה 8

```cpp
#include <stdio.h>

int CheckNum(int num)
{
    if (num >= 100 && num <= 999)
        return 1;
    if (num >= -999 && num <= -100)
        return 2;
    
        return 3;
}

int main()
{
    int res, num;
    scanf("%d", &num);
    res = CheckNum(num); // קריאה לפונקציה החסרה
    switch (res)
    {
    case 1:
        printf("3 digit mun +");
        break;
    case 2:
        printf("3 digit mun -");
        break;
    case 3:
        printf("not a 3 digit mun ");
    }
}


```

#### שאלה 9

א.	תאר בקצרה מה מבצעת התוכנית (מבלי להתייחס לכל פקודה).

if num1-2 bettwin (9)-(-9) then run, num2 is the amout of pow to num1 (0 and 1 are seprit form the)

ב.	איזה ערך תדפיס התוכנית עבור קליטת הנתונים הבאים מהמקלדת :

5^4=625, -5^3,-125, 5^0=1, to big

ג.	הסבר מה נחוץ להגביל את ערכי number1, number2 בתוכנית הנ"ל ?

max int val

כיצד ניתן לקלוט מספרים גדולים יותר ?

dubble insted int

ד.	הסבר כיצד תשתנה התוצאה אם נשמיט את ה – break לפני : case 1	.

הלולאוה תרוץ ויוצא num1*num1 ולא num1


#### שאלה 10

```cpp
#include <conio.h>
#include <stdio.h>

void printSumAndMul(int a, int b)
{
    printf("Sum %d\n", a + b);
    printf("Mul %d", a * b);
}

int main()
{
    int a, b, max;
    printf("Enetr two numbers : ");
    scanf("%d %d", &a, &b);
    printSumAndMul(a, b);
    getch();
}

```

#### שאלה 11

```cpp

#include <conio.h>
#include <stdio.h>

float calAvg()
{
    int cut = 0, num, sum = 0;
    float avg = 0;
    scanf("%d",&num);

    while (num)
    {
        if (num%2==0)
        {
            sum += num;
            cut++;
        }
        scanf("%d", &num);
    }
    avg=sum/cut;
    return avg;
}

int main()
{
    int num;
    float avg;
    avg = calAvg();
    printf("The average is : %f ", avg);
    getch();
}

```



