#include <cstdlib>
#include <stdio.h>
#include <time.h>

int main()
{

    srand(time(0));  // Initialize random number generator.
    int white=0,black=0,win=0,turn=0,i,s;
    long long g_one,g_two,g_three,g_four,g_five,g_six,g_seven,g_eight,g_nine,g_ten,g_eleven,g_twelve,g_0;
    int c_one=0,c_two=0,c_three=0,c_four=0,c_five=0,c_six=0,c_seven=0,c_eight=0,c_nine=0,c_ten=0,c_eleven=0,c_twelve=0;
    int w_one=0,w_two=0,w_three=0,w_four=0,w_five=0,w_six=0,w_seven=0,w_eight=0,w_nine=0,w_ten=0,w_eleven=0,w_twelve=0;
    long long g_code[12],code[12];
       

    for(int i=0;i<12;i++)
    {
        code[i] = (rand() % 6) + 1;
    }    
    int one = code[11],two = code[10],three = code[9],four = code[8],five = code[7],six = code[6],seven = code[5],eight = code[4],nine = code[3],ten = code[2],eleven = code[1],twelve = code[0];

        while (win !=1 && turn <=12)
        {
            turn++;
            
        	printf("Enter your guess 12 numbers 1-6\n"); // 123456123456 / 100000000000
        	scanf("%lld",&g_0);
        	
            g_code[11] = g_0 % 10;
            g_code[10] = (g_0 / 10) % 10;
            g_code[9] = (g_0 / 100) % 10;
            g_code[8] = (g_0 / 1000) % 10;

            g_code[7] = (g_0 / 10000) % 10;
            g_code[6] = (g_0 / 100000) % 10;
            g_code[5] = (g_0 / 1000000) % 10;
            g_code[4] = (g_0 / 10000000) % 10;

            g_code[3] = (g_0 / 100000000) % 10;
            g_code[2] = (g_0 / 1000000000) % 10;
            g_code[1] = (g_0 / 10000000000) % 10;
            g_code[0] = (g_0 / 100000000000);
            
        		printf("%lld",g_code[0]); 
				printf("%lld",g_code[1]);  
				printf("%lld",g_code[2]);   
        		printf("%lld",g_code[3]); 
				printf("%lld",g_code[4]);  
				printf("%lld",g_code[5]);            
        		printf("%lld",g_code[6]); 
				printf("%lld",g_code[7]);  
				printf("%lld",g_code[8]);   
        		printf("%lld",g_code[9]); 
				printf("%lld",g_code[10]);  
				printf("%lld",g_code[11]);
				        	
            if((g_code[0] >= 1 && g_code[0] <= 6) && (g_code[1] >= 1 && g_code[1] <= 6) && ( g_code[2] >= 1 && g_code[2] <= 6) && (g_code[3] >= 1 && g_code[3] <= 6) && (g_code[4] >= 1 && g_code[4] <= 6) && (g_code[5] >= 1 && g_code[5] <= 6) && (g_code[6] >= 1 && g_code[6] <= 6) && (g_code[7] >= 1 && g_code[7] <= 6) && (g_code[8] >= 1 && g_code[8] <= 6) && (g_code[9] >= 1 && g_code[9] <= 6) && (g_code[10] >= 1 && g_code[10] <= 6) && (g_code[11] >= 1 && g_code[11] <= 6) && (g_code[12] >= 1 && g_code[12] <= 6))
            {
                 
                //blacks
                if(g_code[0] == one) 
                {black ++;
                c_one = 1;
				printf("black 1 : %d\n",black);}

                if(g_code[1] == two)
                {black ++;
                c_two = 1;
				printf("black 2 : %d\n",black);}

                if(g_code[2] == three)
                {black ++;
                c_three = 1;
				printf("black 3 : %d\n",black);}

                if(g_code[3] == four)
                {black ++;
                c_four = 1;
				printf("black 4 : %d\n",black);}

                if(g_code[4] == five) 
                {black ++;
                c_five = 1;
				printf("black 5 : %d\n",black);}

                if(g_code[5] == six)
                {black ++;
                c_six = 1;
				printf("black 6 : %d\n",black);}

                if(g_code[6] == seven)
                {black ++;
                c_seven = 1;
				printf("black 7 : %d\n",black);}

                if(g_code[7] == eight)
                {black ++;
                c_eight = 1;
				printf("black 8 : %d\n",black);}

                if(g_code[8] == nine) 
                {black ++;
                c_nine = 1;
				printf("black 9 : %d\n",black);}

                if(g_code[9] == ten)
                {black ++;
                c_ten = 1;
				printf("black 10 : %d\n",black);}

                if(g_code[10] == eleven)
                {black ++;
                c_eleven = 1;
				printf("black 11 : %d\n",black);}

                if(g_code[11] == twelve)
                {black ++;
                c_twelve = 1;
				printf("black 12 : %d\n",black);}

                //white
                if (c_one == 0)
                {
	                if ((g_code[0] == two) && (c_two == 0))
	                {white ++;
                    w_two=1;
					printf("white two_1 : %d\n",white);}

                    else if ((g_code[0] == three) && (c_three == 0))
	                {white ++;
                    w_three=1;
					printf("white three_1 : %d\n",white);}

                    else if ((g_code[0] == four) && (c_four == 0))
	                {white ++;
                    w_four=1;
					printf("white four_1 : %d\n",white);}

                    else if ((g_code[0] == five) && (c_five == 0))
	                {white ++;
                    w_five=1;
					printf("white five_1 : %d\n",white);}


                    else if ((g_code[0] == six) && (c_six == 0))
	                {white ++;
                    w_six=1;
					printf("white six_1 : %d\n",white);}

                    else if ((g_code[0] == seven) && (c_seven == 0))
	                {white ++;
                    w_seven=1;
					printf("white seven_1 : %d\n",white);}

                    else if ((g_code[0] == eight) && (c_eight == 0))
	                {white ++;
                    w_eight=1;
					printf("white eight_1 : %d\n",white);}

                    else if ((g_code[0] == nine) && (c_nine == 0))
	                {white ++;
                    w_nine=1;
					printf("white nine_1 : %d\n",white);}


                    else if ((g_code[0] == ten) && (c_ten == 0))
	                {white ++;
                    w_ten=1;
					printf("white ten_1 : %d\n",white);}

                    else if ((g_code[0] == eleven) && (c_eleven == 0))
	                {white ++;
                    w_eleven=1;
					printf("white eleven_1 : %d\n",white);}

                    else if ((g_code[0] == twelve) && (c_twelve == 0))
	                {white ++;
                    w_twelve=1;
					printf("white twelve_1 : %d\n",white);}


                }
                
                	if (c_two == 0)
                    {

                    if (((g_code[1] == one) && (w_one == 0)) && (c_one == 0))
                    {white ++;
                    w_one=1;
                    printf("white one_2 : %d\n",white);}

                    else if (((g_code[1] == three) && (w_three == 0)) && (c_three == 0))
	                {white ++;
                    w_three=1;
					printf("white three_2 : %d\n",white);}

                    else if (((g_code[1] == four) && (w_four == 0)) && (c_four == 0))
	                {white ++;
                    w_four=1;
					printf("white four_2 : %d\n",white);}

                    else if (((g_code[1] == five)  && (w_five == 0)) && (c_five == 0))
	                {white ++;
                    w_five=1;
					printf("white five_2 : %d\n",white);}

                    else if (((g_code[1] == six) && (w_six == 0)) && (c_six == 0))
	                {white ++;
                    w_six=1;
					printf("white six_2 : %d\n",white);}

                    else if (((g_code[1] == seven) && (w_seven == 0)) && (c_seven == 0))
	                {white ++;
                    w_seven=1;
					printf("white seven_2 : %d\n",white);}

                    else if (((g_code[1] == eight) && (w_eight == 0)) && (c_eight == 0))
	                {white ++;
                    w_eight=1;
					printf("white eight_2 : %d\n",white);}

                    else if (((g_code[1] == nine) && (w_nine == 0)) && (c_nine == 0))
	                {white ++;
                    w_nine=1;
					printf("white nine_2 : %d\n",white);}


                    else if (((g_code[1] == ten) && (w_ten == 0)) && (c_ten == 0))
	                {white ++;
                    w_ten=1;
					printf("white ten_2 : %d\n",white);}

                    else if (((g_code[1] == eleven) && (w_eleven == 0)) && (c_eleven == 0))
	                {white ++;
                    w_eleven=1;
					printf("white eleven_2 : %d\n",white);}

                    else if (((g_code[1] == twelve) && (w_twelve == 0)) && (c_twelve == 0))
	                {white ++;
                    w_twelve=1;
					printf("white twelve_2 : %d\n",white);}
                    }
                            //3
                            if (c_three == 0)
                            {

                            if (((g_code[2] == one) && (w_one == 0)) && (c_one == 0))
                            {white ++;
                            w_one=1;
                            printf("white one_3 : %d\n",white);}

                            else if (((g_code[2] == two) && (w_two == 0)) && (c_two == 0))
                            {white ++;
                            w_two=1;
                            printf("white two_3 : %d\n",white);}

                            else if (((g_code[2] == four) && (w_four == 0)) && (c_four == 0))
                            {white ++;
                            w_four=1;
                            printf("white four_3 : %d\n",white);}

                            else if (((g_code[2] == five)  && (w_five == 0)) && (c_five == 0))
                            {white ++;
                            w_five=1;
                            printf("white five_3 : %d\n",white);}

                            else if (((g_code[2] == six) && (w_six == 0)) && (c_six == 0))
                            {white ++;
                            w_six=1;
                            printf("white six_3 : %d\n",white);}

                            else if (((g_code[2] == seven) && (w_seven == 0)) && (c_seven == 0))
                            {white ++;
                            w_seven=1;
                            printf("white seven_3 : %d\n",white);}

                            else if (((g_code[2] == eight) && (w_eight == 0)) && (c_eight == 0))
                            {white ++;
                            w_eight=1;
                            printf("white eight_3 : %d\n",white);}

                            else if (((g_code[2] == nine) && (w_nine == 0)) && (c_nine == 0))
                            {white ++;
                            w_nine=1;
                            printf("white nine_3 : %d\n",white);}


                            else if (((g_code[2] == ten) && (w_ten == 0)) && (c_ten == 0))
                            {white ++;
                            w_ten=1;
                            printf("white ten_3 : %d\n",white);}

                            else if (((g_code[2] == eleven) && (w_eleven == 0)) && (c_eleven == 0))
                            {white ++;
                            w_eleven=1;
                            printf("white eleven_3 : %d\n",white);}

                            else if (((g_code[2] == twelve) && (w_twelve == 0)) && (c_twelve == 0))
                            {white ++;
                            w_twelve=1;
                            printf("white twelve_3 : %d\n",white);}
                            }
                                //4
                                if (c_four == 0)
                                {

                                if (((g_code[3] == one) && (w_one == 0)) && (c_one == 0))
                                {white ++;
                                w_one=1;
                                printf("white one_4 : %d\n",white);}

                                else if (((g_code[3] == two) && (w_two == 0)) && (c_two == 0))
                                {white ++;
                                w_two=1;
                                printf("white two_4 : %d\n",white);}

                                else if (((g_code[3] == three) && (w_three == 0)) && (c_three == 0))
                                {white ++;
                                w_three=1;
                                printf("white three_4 : %d\n",white);}

                                else if (((g_code[3] == five)  && (w_five == 0)) && (c_five == 0))
                                {white ++;
                                w_five=1;
                                printf("white five_4 : %d\n",white);}

                                else if (((g_code[3] == six) && (w_six == 0)) && (c_six == 0))
                                {white ++;
                                w_six=1;
                                printf("white six_4 : %d\n",white);}

                                else if (((g_code[3] == seven) && (w_seven == 0)) && (c_seven == 0))
                                {white ++;
                                w_seven=1;
                                printf("white seven_4 : %d\n",white);}

                                else if (((g_code[3] == eight) && (w_eight == 0)) && (c_eight == 0))
                                {white ++;
                                w_eight=1;
                                printf("white eight_4 : %d\n",white);}

                                else if (((g_code[3] == nine) && (w_nine == 0)) && (c_nine == 0))
                                {white ++;
                                w_nine=1;
                                printf("white nine_4 : %d\n",white);}


                                else if (((g_code[3] == ten) && (w_ten == 0)) && (c_ten == 0))
                                {white ++;
                                w_ten=1;
                                printf("white ten_4 : %d\n",white);}

                                else if (((g_code[3] == eleven) && (w_eleven == 0)) && (c_eleven == 0))
                                {white ++;
                                w_eleven=1;
                                printf("white eleven_4 : %d\n",white);}

                                else if (((g_code[3] == twelve) && (w_twelve == 0)) && (c_twelve == 0))
                                {white ++;
                                w_twelve=1;
                                printf("white twelve_4 : %d\n",white);}
                                }


                                // new 5-12

                                if (c_five == 0)
                                {

                                if (((g_code[4] == one) && (w_one == 0)) && (c_one == 0))
                                {white ++;
                                w_one=1;
                                printf("white one_5 : %d\n",white);}

                                else if (((g_code[4] == two) && (w_two == 0)) && (c_two == 0))
                                {white ++;
                                w_two=1;
                                printf("white two_5 : %d\n",white);}

                                else if (((g_code[4] == three) && (w_three == 0)) && (c_three == 0))
                                {white ++;
                                w_three=1;
                                printf("white three_5 : %d\n",white);}

                                else if (((g_code[4] == four) && (w_four == 0)) && (c_four == 0))
                                {white ++;
                                w_four=1;
                                printf("white four_5 : %d\n",white);}

                                else if (((g_code[4] == six) && (w_six == 0)) && (c_six == 0))
                                {white ++;
                                w_six=1;
                                printf("white six_5 : %d\n",white);}

                                else if (((g_code[4] == seven) && (w_seven == 0)) && (c_seven == 0))
                                {white ++;
                                w_seven=1;
                                printf("white seven_5 : %d\n",white);}

                                else if (((g_code[4] == eight) && (w_eight == 0)) && (c_eight == 0))
                                {white ++;
                                w_eight=1;
                                printf("white eight_5 : %d\n",white);}

                                else if (((g_code[4] == nine) && (w_nine == 0)) && (c_nine == 0))
                                {white ++;
                                w_nine=1;
                                printf("white nine_5 : %d\n",white);}


                                else if (((g_code[4] == ten) && (w_ten == 0)) && (c_ten == 0))
                                {white ++;
                                w_ten=1;
                                printf("white ten_5 : %d\n",white);}

                                else if (((g_code[4] == eleven) && (w_eleven == 0)) && (c_eleven == 0))
                                {white ++;
                                w_eleven=1;
                                printf("white eleven_5 : %d\n",white);}

                                else if (((g_code[4] == twelve) && (w_twelve == 0)) && (c_twelve == 0))
                                {white ++;
                                w_twelve=1;
                                printf("white twelve_5 : %d\n",white);}
                                }
                                        //6
                                        if (c_six == 0)
                                        {
                                        if (((g_code[5] == one) && (w_one == 0)) && (c_one == 0))
                                        {white ++;
                                        w_one=1;
                                        printf("white one_6 : %d\n",white);}

                                        else if (((g_code[5] == two) && (w_two == 0)) && (c_two == 0))
                                        {white ++;
                                        w_two=1;
                                        printf("white two_6 : %d\n",white);}

                                        else if (((g_code[5] == three) && (w_three == 0)) && (c_three == 0))
                                        {white ++;
                                        w_three=1;
                                        printf("white three_6 : %d\n",white);}

                                        else if (((g_code[5] == four) && (w_four == 0)) && (c_four == 0))
                                        {white ++;
                                        w_four=1;
                                        printf("white four_6 : %d\n",white);}

                                        else if (((g_code[5] == five)  && (w_five == 0)) && (c_five == 0))
                                        {white ++;
                                        w_five=1;
                                        printf("white five_6 : %d\n",white);}

                                        else if (((g_code[5] == seven) && (w_seven == 0)) && (c_seven == 0))
                                        {white ++;
                                        w_seven=1;
                                        printf("white seven_6 : %d\n",white);}

                                        else if (((g_code[5] == eight) && (w_eight == 0)) && (c_eight == 0))
                                        {white ++;
                                        w_eight=1;
                                        printf("white eight_6 : %d\n",white);}

                                        else if (((g_code[5] == nine) && (w_nine == 0)) && (c_nine == 0))
                                        {white ++;
                                        w_nine=1;
                                        printf("white nine_6 : %d\n",white);}


                                        else if (((g_code[5] == ten) && (w_ten == 0)) && (c_ten == 0))
                                        {white ++;
                                        w_ten=1;
                                        printf("white ten_6 : %d\n",white);}

                                        else if (((g_code[5] == eleven) && (w_eleven == 0)) && (c_eleven == 0))
                                        {white ++;
                                        w_eleven=1;
                                        printf("white eleven_6 : %d\n",white);}

                                        else if (((g_code[5] == twelve) && (w_twelve == 0)) && (c_twelve == 0))
                                        {white ++;
                                        w_twelve=1;
                                        printf("white twelve_6 : %d\n",white);}
                                        }
                                            //7
                                            if (c_seven == 0)
                                            {
                                                if (((g_code[6] == one) && (w_one == 0)) && (c_one == 0))
                                                {white ++;
                                                w_one=1;
                                                printf("white one_7 : %d\n",white);}

                                                else if (((g_code[6] == two) && (w_two == 0)) && (c_two == 0))
                                                {white ++;
                                                w_two=1;
                                                printf("white two_7 : %d\n",white);}

                                                else if (((g_code[6] == three) && (w_three == 0)) && (c_three == 0))
                                                {white ++;
                                                w_three=1;
                                                printf("white three_7 : %d\n",white);}

                                                else if (((g_code[6] == four) && (w_four == 0)) && (c_four == 0))
                                                {white ++;
                                                w_four=1;
                                                printf("white four_7 : %d\n",white);}

                                                else if (((g_code[6] == five)  && (w_five == 0)) && (c_five == 0))
                                                {white ++;
                                                w_five=1;
                                                printf("white five_7 : %d\n",white);}

                                                else if (((g_code[6] == six) && (w_six == 0)) && (c_six == 0))
                                                {white ++;
                                                w_six=1;
                                                printf("white six_7 : %d\n",white);}

                                                else if (((g_code[6] == eight) && (w_eight == 0)) && (c_eight == 0))
                                                {white ++;
                                                w_eight=1;
                                                printf("white eight_7 : %d\n",white);}

                                                else if (((g_code[6] == nine) && (w_nine == 0)) && (c_nine == 0))
                                                {white ++;
                                                w_nine=1;
                                                printf("white nine_7 : %d\n",white);}

                                                else if (((g_code[6] == ten) && (w_ten == 0)) && (c_ten == 0))
                                                {white ++;
                                                w_ten=1;
                                                printf("white ten_7 : %d\n",white);}

                                                else if (((g_code[6] == eleven) && (w_eleven == 0)) && (c_eleven == 0))
                                                {white ++;
                                                w_eleven=1;
                                                printf("white eleven_7 : %d\n",white);}

                                                else if (((g_code[6] == twelve) && (w_twelve == 0)) && (c_twelve == 0))
                                                {white ++;
                                                w_twelve=1;
                                                printf("white twelve_7 : %d\n",white);}
                                            }
                                                //8
                                                if (c_eight == 0)
                                                {
                                                    if (((g_code[7] == one) && (w_one == 0)) && (c_one == 0))
                                                    {white ++;
                                                    w_one=1;
                                                    printf("white one_8 : %d\n",white);}

                                                    else if (((g_code[7] == two) && (w_two == 0)) && (c_two == 0))
                                                    {white ++;
                                                    w_two=1;
                                                    printf("white two_8 : %d\n",white);}

                                                    else if (((g_code[7] == three) && (w_three == 0)) && (c_three == 0))
                                                    {white ++;
                                                    w_three=1;
                                                    printf("white three_8 : %d\n",white);}

                                                    else if (((g_code[7] == four) && (w_four == 0)) && (c_four == 0))
                                                    {white ++;
                                                    w_four=1;
                                                    printf("white four_8 : %d\n",white);}

                                                    else if (((g_code[7] == five)  && (w_five == 0)) && (c_five == 0))
                                                    {white ++;
                                                    w_five=1;
                                                    printf("white five_8 : %d\n",white);}

                                                    else if (((g_code[7] == six) && (w_six == 0)) && (c_six == 0))
                                                    {white ++;
                                                    w_six=1;
                                                    printf("white six_8 : %d\n",white);}

                                                    else if (((g_code[7] == seven) && (w_seven == 0)) && (c_seven == 0))
                                                    {white ++;
                                                    w_seven=1;
                                                    printf("white seven_8 : %d\n",white);}

                                                    else if (((g_code[7] == eight) && (w_eight == 0)) && (c_eight == 0))
                                                    {white ++;
                                                    w_eight=1;
                                                    printf("white eight_8 : %d\n",white);}

                                                    else if (((g_code[7] == nine) && (w_nine == 0)) && (c_nine == 0))
                                                    {white ++;
                                                    w_nine=1;
                                                    printf("white nine_8 : %d\n",white);}

                                                    else if (((g_code[7] == ten) && (w_ten == 0)) && (c_ten == 0))
                                                    {white ++;
                                                    w_ten=1;
                                                    printf("white ten_8 : %d\n",white);}

                                                    else if (((g_code[7] == eleven) && (w_eleven == 0)) && (c_eleven == 0))
                                                    {white ++;
                                                    w_eleven=1;
                                                    printf("white eleven_8 : %d\n",white);}

                                                    else if (((g_code[7] == twelve) && (w_twelve == 0)) && (c_twelve == 0))
                                                    {white ++;
                                                    w_twelve=1;
                                                    printf("white twelve_8 : %d\n",white);}
                                                }
                                                        //9
                                                        if (c_nine == 0)
                                                        {
                                                        if (((g_code[8] == one) && (w_one == 0)) && (c_one == 0))
                                                        {white ++;
                                                        w_one=1;
                                                        printf("white one_9 : %d\n",white);}

                                                        else if (((g_code[8] == two) && (w_two == 0)) && (c_two == 0))
                                                        {white ++;
                                                        w_two=1;
                                                        printf("white two_9 : %d\n",white);}

                                                        else if (((g_code[8] == three) && (w_three == 0)) && (c_three == 0))
                                                        {white ++;
                                                        w_three=1;
                                                        printf("white three_9 : %d\n",white);}

                                                        else if (((g_code[8] == four) && (w_four == 0)) && (c_four == 0))
                                                        {white ++;
                                                        w_four=1;
                                                        printf("white four_9 : %d\n",white);}

                                                        else if (((g_code[8] == five)  && (w_five == 0)) && (c_five == 0))
                                                        {white ++;
                                                        w_five=1;
                                                        printf("white five_9 : %d\n",white);}

                                                        else if (((g_code[8] == six) && (w_six == 0)) && (c_six == 0))
                                                        {white ++;
                                                        w_six=1;
                                                        printf("white six_9 : %d\n",white);}

                                                        else if (((g_code[8] == seven) && (w_seven == 0)) && (c_seven == 0))
                                                        {white ++;
                                                        w_seven=1;
                                                        printf("white seven_9 : %d\n",white);}

                                                        else if (((g_code[8] == eight) && (w_eight == 0)) && (c_eight == 0))
                                                        {white ++;
                                                        w_eight=1;
                                                        printf("white eight_9 : %d\n",white);}

                                                        else if (((g_code[8] == ten) && (w_ten == 0)) && (c_ten == 0))
                                                        {white ++;
                                                        w_ten=1;
                                                        printf("white ten_9 : %d\n",white);}

                                                        else if (((g_code[8] == eleven) && (w_eleven == 0)) && (c_eleven == 0))
                                                        {white ++;
                                                        w_eleven=1;
                                                        printf("white eleven_9 : %d\n",white);}

                                                        else if (((g_code[8] == twelve) && (w_twelve == 0)) && (c_twelve == 0))
                                                        {white ++;
                                                        w_twelve=1;
                                                        printf("white twelve_9 : %d\n",white);}
                                                        }
                                                            //10
                                                            if (c_ten == 0)
                                                            {
                                                            if (((g_code[9] == one) && (w_one == 0)) && (c_one == 0))
                                                            {white ++;
                                                            w_one=1;
                                                            printf("white one_10 : %d\n",white);}

                                                            else if (((g_code[9] == two) && (w_two == 0)) && (c_two == 0))
                                                            {white ++;
                                                            w_two=1;
                                                            printf("white two_10 : %d\n",white);}

                                                            else if (((g_code[9] == three) && (w_three == 0)) && (c_three == 0))
                                                            {white ++;
                                                            w_three=1;
                                                            printf("white three_10 : %d\n",white);}

                                                            else if (((g_code[9] == four) && (w_four == 0)) && (c_four == 0))
                                                            {white ++;
                                                            w_four=1;
                                                            printf("white four_10 : %d\n",white);}

                                                            else if (((g_code[9] == five)  && (w_five == 0)) && (c_five == 0))
                                                            {white ++;
                                                            w_five=1;
                                                            printf("white five_10 : %d\n",white);}

                                                            else if (((g_code[9] == six) && (w_six == 0)) && (c_six == 0))
                                                            {white ++;
                                                            w_six=1;
                                                            printf("white six_10 : %d\n",white);}

                                                            else if (((g_code[9] == seven) && (w_seven == 0)) && (c_seven == 0))
                                                            {white ++;
                                                            w_seven=1;
                                                            printf("white seven_10 : %d\n",white);}

                                                            else if (((g_code[9] == eight) && (w_eight == 0)) && (c_eight == 0))
                                                            {white ++;
                                                            w_eight=1;
                                                            printf("white eight_10 : %d\n",white);}

                                                            else if (((g_code[9] == nine) && (w_nine == 0)) && (c_nine == 0))
                                                            {white ++;
                                                            w_nine=1;
                                                            printf("white nine_10 : %d\n",white);}

                                                            else if (((g_code[9] == eleven) && (w_eleven == 0)) && (c_eleven == 0))
                                                            {white ++;
                                                            w_eleven=1;
                                                            printf("white eleven_10 : %d\n",white);}

                                                            else if (((g_code[9] == twelve) && (w_twelve == 0)) && (c_twelve == 0))
                                                            {white ++;
                                                            w_twelve=1;
                                                            printf("white twelve_10 : %d\n",white);}
                                                            }
                                                            //11
                                                            if (c_eleven == 0)
                                                            {
                                                                if (((g_code[10] == one) && (w_one == 0)) && (c_one == 0))
                                                                {white ++;
                                                                w_one=1;
                                                                printf("white one_11 : %d\n",white);}

                                                                else if (((g_code[10] == two) && (w_two == 0)) && (c_two == 0))
                                                                {white ++;
                                                                w_two=1;
                                                                printf("white two_11 : %d\n",white);}

                                                                else if (((g_code[10] == three) && (w_three == 0)) && (c_three == 0))
                                                                {white ++;
                                                                w_three=1;
                                                                printf("white three_11 : %d\n",white);}

                                                                else if (((g_code[10] == four) && (w_four == 0)) && (c_four == 0))
                                                                {white ++;
                                                                w_four=1;
                                                                printf("white four_11 : %d\n",white);}

                                                                else if (((g_code[10] == five)  && (w_five == 0)) && (c_five == 0))
                                                                {white ++;
                                                                w_five=1;
                                                                printf("white five_11 : %d\n",white);}

                                                                else if (((g_code[10] == six) && (w_six == 0)) && (c_six == 0))
                                                                {white ++;
                                                                w_six=1;
                                                                printf("white six_11 : %d\n",white);}

                                                                else if (((g_code[10] == seven) && (w_seven == 0)) && (c_seven == 0))
                                                                {white ++;
                                                                w_seven=1;
                                                                printf("white seven_11 : %d\n",white);}

                                                                else if (((g_code[10] == eight) && (w_eight == 0)) && (c_eight == 0))
                                                                {white ++;
                                                                w_eight=1;
                                                                printf("white eight_11 : %d\n",white);}

                                                                else if (((g_code[10] == nine) && (w_nine == 0)) && (c_nine == 0))
                                                                {white ++;
                                                                w_nine=1;
                                                                printf("white nine_11 : %d\n",white);}

                                                                else if (((g_code[10] == ten) && (w_ten == 0)) && (c_ten == 0))
                                                                {white ++;
                                                                w_ten=1;
                                                                printf("white ten_11 : %d\n",white);}

                                                                else if (((g_code[10] == twelve) && (w_twelve == 0)) && (c_twelve == 0))
                                                                {white ++;
                                                                w_twelve=1;
                                                                printf("white twelve_11 : %d\n",white);}
                                                            }
                                                                    //12
                                                                    if (c_twelve == 0)
                                                                    {
                                                                    if (((g_code[11] == one) && (w_one == 0)) && (c_one == 0))
                                                                    {white ++;
                                                                    w_one=1;
                                                                    printf("white one_12 : %d\n",white);}

                                                                    else if (((g_code[11] == two) && (w_two == 0)) && (c_two == 0))
                                                                    {white ++;
                                                                    w_two=1;
                                                                    printf("white two_12 : %d\n",white);}

                                                                    else if (((g_code[11] == three) && (w_three == 0)) && (c_three == 0))
                                                                    {white ++;
                                                                    w_three=1;
                                                                    printf("white three_12 : %d\n",white);}

                                                                    else if (((g_code[11] == four) && (w_four == 0)) && (c_four == 0))
                                                                    {white ++;
                                                                    w_four=1;
                                                                    printf("white four_12 : %d\n",white);}

                                                                    else if (((g_code[11] == five)  && (w_five == 0)) && (c_five == 0))
                                                                    {white ++;
                                                                    w_five=1;
                                                                    printf("white five_12 : %d\n",white);}

                                                                    else if (((g_code[11] == six) && (w_six == 0)) && (c_six == 0))
                                                                    {white ++;
                                                                    w_six=1;
                                                                    printf("white six_12 : %d\n",white);}

                                                                    else if (((g_code[11] == seven) && (w_seven == 0)) && (c_seven == 0))
                                                                    {white ++;
                                                                    w_seven=1;
                                                                    printf("white seven_12 : %d\n",white);}

                                                                    else if (((g_code[11] == eight) && (w_eight == 0)) && (c_eight == 0))
                                                                    {white ++;
                                                                    w_eight=1;
                                                                    printf("white eight_12 : %d\n",white);}

                                                                    else if (((g_code[11] == nine) && (w_nine == 0)) && (c_nine == 0))
                                                                    {white ++;
                                                                    w_nine=1;
                                                                    printf("white nine_12 : %d\n",white);}

                                                                    else if (((g_code[11] == ten) && (w_ten == 0)) && (c_ten == 0))
                                                                    {white ++;
                                                                    w_ten=1;
                                                                    printf("white ten_12 : %d\n",white);}

                                                                    else if (((g_code[11] == eleven) && (w_eleven == 0)) && (c_eleven == 0))
                                                                    {white ++;
                                                                    w_eleven=1;
                                                                    printf("white eleven_12 : %d\n",white);}

                                                                    }

                printf("your guess : %d%d%d%d%d%d%d%d%d%d%d%d \n",g_code[0],g_code[1],g_code[2],g_code[3],g_code[4],g_code[5],g_code[6],g_code[7],g_code[8],g_code[9],g_code[10],g_code[11]);
                printf("\nblack total : %d\n",black);
                printf("white total : %d\n",white);
                

                printf("\ncode : %d%d%d%d%d%d%d%d%d%d%d%d \n",code[11],code[10],code[9],code[8],code[7],code[6],code[5],code[4],code[3],code[2],code[1],code[0]);

                
                c_one=0,c_two=0,c_three=0,c_four=0,c_five=0,c_six=0,c_seven=0,c_eight=0,c_nine=0,c_ten=0,c_eleven=0,c_twelve=0;
                w_one=0,w_two=0,w_three=0,w_four=0,w_five=0,w_six=0,w_seven=0,w_eight=0,w_nine=0,w_ten=0,w_eleven=0,w_twelve=0;
                white = 0;
                if (black != 12)
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
    printf("\n\nYOU WIN i dont believe it:)");
    printf("\n\n\nhappry b-day all the love Y&Z:)");
    printf("\nhere is a riddle for you");
    printf("\n\nTomorrow you'll have more\nAs your time passes,\nI'm not easy to store \nI don't take up space,\nBut I'm only in one place \nI am what you saw,\nBut not what you see.\n\nWhat am I?\nYou have me today,");
    
	printf("\n\n\n Text me (zev) the answer");
	
	}
    else
    {
            printf("\n\n\ngame over :(");
    }
    

    scanf("%d",&win);

}


