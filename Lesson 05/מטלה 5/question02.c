
#include <stdio.h>
 void main()
{

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
//א.32
//ב. moltpy num2 num1 times
