#include <stdio.h>

void avg();
int mul_AB(int x, int y);

int main()
{
    avg();
}

void avg()
{
   int cnt=0;
   float avg, num, sum = 0;
   printf("enter num : ");
   scanf("%f",&num);

   while (num)
   {
       sum+=num;
       cnt++;
       printf("enter num : ");
       scanf("%f",&num);
   }
   avg=(float)sum/cnt;
   printf("avg %f , sum %f",avg,sum);
   
}

int mul_AB(int x, int y)
{
    int sum = x * y;
    return sum;
}
