# include <stdio.h>

void printsomthing();

int main()
{
    for (int i = 0; i < 4; i++)
    {
      printsomthing();
    }
    
    

    return 0;
}

void printsomthing()
{
    printf("hi ");
    return;
}