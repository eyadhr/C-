#include <stdio.h>

int main()
{

    int time, hour, minute, second;
    scanf("%d", &time);

    hour = time / 3600;
    time = time % 3600;
    minute = time / 60;
    second = time % 60;
    printf("time = %d:%d:%d", hour, minute, second);
}
