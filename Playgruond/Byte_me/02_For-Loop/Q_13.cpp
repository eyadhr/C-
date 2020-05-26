#include <stdio.h>

int main()
{
  int count = 1, space=4;
  for (int y = 1; y <= 4; y++)
  {
    for (int i = 0; i < space; i++)
    {
      printf(" ");
    }
    
    for (int i = 1; i <= y; i++)
    {
      printf("%d ", count);
      count += 1;
    }
    space--;
    printf("\n");
    }
}

/*
#include <stdio.h>

int main()
{
    int num, star = 1,space = 4;
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        for (int i=0 ; i < space ; i++)
        {
            printf(" ");
        
        }
            for (int i = 0; i < star; i++)
            {
                printf("*");

            }
        space--;
    


        printf("\n");
        star+=2;
    }
}
*/