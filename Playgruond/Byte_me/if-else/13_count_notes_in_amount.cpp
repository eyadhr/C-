#include <stdio.h>

int main()
{
    int amount,note200 = 0,note100 = 0,note50 = 0,
	note20 = 0,coin10 = 0,coin5 = 0,coin2 = 0,coin1 = 0;
    printf("Enter amount : ");
    scanf("%d",&amount);

    if(amount >= 200)
    {
        note200 = amount / 200;
        amount -= note200 * 200;
    }
    if(amount >= 100)
    {
        note100 = amount / 100;
        amount -= note100 * 100;
    }
    if(amount >= 50)
    {
        note50 = amount / 50;
        amount -= note50 * 50;
    }
    if(amount >= 20)
    {
        note20 = amount / 20;
        amount -= note20 * 20;
    }
    if(amount >= 10)
    {
        coin10 = amount / 10;
        amount -= coin10 * 10;
    }
    if(amount >= 5)
    {
        coin5 = amount / 5;
        amount -= coin5 * 5;
    }
    if(amount >= 2)
    {
        coin2 = amount / 2;
        amount -= coin2 * 2;
    }
    if(amount >= 1)
    {
        coin1 = amount / 1;
        amount -= coin1 * 1;
    }
    
    printf("note 200 : %d\n",note200);
    printf("note 100 : %d\n",note100);
    printf("note 50 : %d\n",note50);
    printf("note 20 : %d\n",note20);
    printf("coin 10 : %d\n",coin10);
    printf("coin 5 : %d\n",coin5);
    printf("coin 2 : %d\n",coin2);
    printf("coin 1 : %d\n",coin1);





}
