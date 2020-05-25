#include <cstdlib>
#include <stdio.h>
#include <time.h>

int main()
{

    srand(time(0));  // Initialize random number generator.
    int white=0,black=0,win=0,turn=0,i,s;
    int g_one,g_two,g_three,g_four,g_0;
    int c_one=0,c_two=0,c_three=0,c_four=0;
    int w_one=0,w_two=0,w_three=0,w_four=0;
    int g_code[4],code[4];
       
    for(int i=0;i<4;i++)
    {
        code[i] = (rand() % 6) + 1;
    }    

    int one = code[3];
    int two = code[2];
    int three = code[1];
    int four = code[0];

        while (win !=1 && turn <=12)
        {
            turn++;
        	printf("Enter your guess 4 numbers 1-6\n");
        	scanf("%d",&g_0);
            g_code[3] = g_0 % 10;
            g_code[2] = (g_0 / 10) % 10;
            g_code[1] = (g_0 / 100) % 10;
            g_code[0] = g_0 / 1000;
        	
            if((g_code[0] >= 1 && g_code[0] <= 6) && (g_code[1] >= 1 && g_code[1] <= 6) && ( g_code[2] >= 1 && g_code[2] <= 6) && (g_code[3] >= 1 && g_code[3] <= 6))
            {
                //blacks
                if(g_code[0] == one) 
                {black ++;
                c_one = 1;}

                if(g_code[1] == two)
                {black ++;
                c_two = 1;}

                if(g_code[2] == three)
                {black ++;
                c_three = 1;}

                if(g_code[3] == four)
                {black ++;
                c_four = 1;}

                //white
                if (c_one == 0)
                {
	                if ((g_code[0] == two) && (c_two == 0))
	                {white ++;
                    w_two=1;}

                    else if ((g_code[0] == three) && (c_three == 0))
	                {white ++;
                    w_three=1;}

                    else if ((g_code[0] == four) && (c_four == 0))
	                {white ++;
                    w_four=1;}
                }
                
                	if (c_two == 0)
                    {
                        if (((g_code[1] == one) && (w_one == 0)) && (c_one == 0))
                        {white ++;
                        w_one=1;}

                        else if (((g_code[1] == three) && (w_three == 0)) && (c_three == 0))
                        {white ++;
                        w_three=1;}

                        else if (((g_code[1] == four) && (w_four == 0)) && (c_four == 0))
                        {white ++;
                        w_four=1;}
                    }

                            if (c_three == 0)
                            {
                                if (((g_code[2] == one) && (w_one == 0)) && (c_one == 0))
                                {white ++;
                                w_one=1;}

                                else if (((g_code[2] == two) && (w_two == 0)) && (c_two == 0))
                                {white ++;
                                w_two=1;}

                                else if (((g_code[2] == four) && (w_four == 0)) && (c_four == 0))
                                {white ++;
                                w_four=1;}
                            }

                                if (c_four == 0)
                                {
                                    if (((g_code[3] == one) && (w_one == 0)) && (c_one == 0))
                                    {white ++;
                                    w_one=1;}

                                    else if (((g_code[3] == two) && (w_two == 0)) && (c_two == 0))
                                    {white ++;
                                    w_two=1;}

                                    else if (((g_code[3] == three) && (w_three == 0)) && (c_three == 0))
                                    {white ++;
                                    w_three=1;}
                                }
                                
                printf("your guess : %d%d%d%d \n",g_code[0],g_code[1],g_code[2],g_code[3]);
                printf("\nblack total : %d\n",black);
                printf("white total : %d\n",white);
                
                w_one=0,w_two=0,w_three=0,w_four=0;
                c_one=0;
				c_two=0;
				c_three=0;
				c_four=0;
                white = 0;
                if (black != 4)
                {
                	black = 0;
				}
					else
					{
						win=1;
					}
                
              
            }
            else
            {
                printf("Error try again\n");
            }
            
            
        }
	if(win =1)
    {
    printf("\n\n\nyou win :)");
    }
    else
    {
            printf("\n\n\ngame over :(");
    }
    

    scanf("%d",&win);

}


