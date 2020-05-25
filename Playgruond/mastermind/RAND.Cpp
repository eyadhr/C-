#include <cstdlib>
#include <stdio.h>
#include <time.h>
#include <iostream>
#include <ctime>
int main()
{
    int code[4];
    srand(time(0));  // Initialize random number generator.
    for(int i=0;i<4;i++)
    {
        code[i] = (rand() % 6) + 1;
    }    
    for(int i=0;i<4;i++)
    {
    printf( "%d\n", code[i]) ;
    }

    
    
    }






                    /*
    char array[10];
        int i;
        printf("enter the element of an array \n");
        for (i = 0; i < 10; i++)
            scanf("%s", &array[i]);
 
        printf("Alternate elements of a given array \n");
        for (i = 0; i < 10; i += 2)
            printf( "%d\n", array[i]) ;


				printf(" ? \n",&numbers[4]);
        		for (i = 0; i < n; i++);
            	printf( "%d\n", array[i]) ;
            	*/

                		
            /*
			int numbers[4] = {g_one,g_two,g_three,g_four};
            array[n] = numbers[4];
            n++;
            */
        	
