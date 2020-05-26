#include <stdio.h>

int main()
{
    for (int y = 1; y <= 4; y++)
    {   
      for (int i = 1; i <= y; i++)
      {
          printf("%d",y);
      }
      printf("\n");
    }
}