#include <stdio.h>

int main()
{
    int count=1;
    for (int y = 1; y <= 4; y++)
    {   
      for (int i = 1; i <= y; i++)
      {
        printf("%d ",count);
        count += 1;
      }
      printf("\n");
    }
}