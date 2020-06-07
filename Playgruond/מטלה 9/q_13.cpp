#include <stdio.h>
#define N 10
int main()
{

    int v[N], i, num, s1, s2;
    for (i = 0; i < N; i++)
        scanf("%d", &v[i]);
    printf("Enter a number : ");
    scanf("%d", &num);

    for (i = s1 = s2 = 0; i < N && v[i] != num; i++)
        s1 += v[i];
    if (i == N)
        printf("0");
    for (i++; i < N; i++)
        s2 += v[i];
    if (s1 > s2)
        printf("%d", s1);
    else
        printf("%d", s2);
}


