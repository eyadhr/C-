#include <stdio.h>

int main()
{
    int num, in_sum = 1,out_sum=0;
    scanf("%d", &num); //3

    for (int i = num; i >= 1; i--) //3 //2 //1
    {
        for (int i = 1; i <= num ; i++) //3 //2 //1
        {
            in_sum *= num; //1 *3 = 3 //3*3 //27 // 4=2*=2
        }
        out_sum+=in_sum; //27 + 4
        printf("\nin_sum %d", in_sum);
        in_sum=1;
        num--; //2
    }
    printf("\nout_sum %d", out_sum);

} // sum = 1^1 + (4) 2^2 + (27) 3^3 