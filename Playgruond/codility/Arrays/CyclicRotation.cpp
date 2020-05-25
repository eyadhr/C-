#include <stdio.h>
#include <stdlib.h>

struct Results solution(int A[], int N, int K)
{
    struct Results result;

    int rotate = K % N;
    int temp_rotate = rotate;
    int array[N];
    int temp[rotate];
    int temp_Length = N - 1;
    int i = 0, w = 0;

    //move a to array
    for (i = 0; i < N; i++)
    {
        array[i] = A[i];
    }

    temp_rotate -= 1;

    // move 'rotate' numbers form array to temp
    while (rotate >= 0)
    {
        temp[rotate] = array[temp_Length];
        rotate--;
        temp_Length--;
    }

    rotate = K % N; // reset rotate

    w = N - rotate - 1; // Length of array - rotate

    int ro_w = rotate + w;
    while (w >= 0)
    {
        array[ro_w] = array[w];
        w--;
        ro_w--;
    }

    while (temp_rotate >= 0)
    {
        array[rotate - 1] = temp[rotate];
        printf("rotate : %d", rotate);
        printf("temp[rotate] : %d\n", temp[rotate]);
        rotate--;
        temp_rotate--;
    }

    for (i = 0; i < N; i++)
    {
        A[i] = array[i];
    }

    for (i = 0; i < N; i++)
    {
        printf("%d", A[i]);
    }

    result.A = A;
    result.N = N;

    return result;
}