#include <stdio.h>

int main()
{
    int i, f = 0, a = 0, count = 0, temp = 0, most_pop = 0, most_pop_temp=0;
    int A[10] = {100,85,70,85,45,100,28,85,40,90};
    int Count[10];
    int num[10];
    float avg = 0;

    for (int i = 1; i <= 10; i++)
    {
        printf("Grade no. %d : %d\n",i,A[i-1]);
        if (A[i-1] < 60)
            f++; // number of Grades under 60

        if (A[i - 1] > 85)
            a++; // number of Grades over 85

        avg += A[i - 1]; // suming for avg
    }
    avg /= 10; // avg is

    for (int grade = 1; grade <= 100; grade++)
    {
        count=0;
        for (int i = 0; i < 10; i++)
        {
            if (grade == A[i])
                count++; 
        }

        if (count)
        {
            if (count > most_pop)
            {
                most_pop = count;
                most_pop_temp = temp;
            }
            
            printf("%d : %d times\n",grade,count);
            num[temp] = grade;
            Count[temp] = count;
            temp++;
            
        }
    }

/*    for (int most_pop = 0; most_pop < temp; most_pop++)

    {
        for (int i = temp; i < 0 ; i--) // 7
        {
            if (Count[most_pop] >= Count[i])
            {
                
            }
            else
                break;
        }
    }
*/
    printf("most_pop : %d\n",num[most_pop_temp]);
    printf("\nnumber of Grades under 60 : %d",f);
    printf("\nnumber of Grades over 85 : %d",a);
    printf("\navg is : %f",avg);
}