#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,x,y,discrminant,i;
    float root1,root2;

    printf("this is a quadratic equaiton\n\tax^2 + bx + c = 0");
    printf("\n\tEnter a b c : ");
    scanf("%f%f%f",&a,&b,&c);

    discrminant = (b * b) - (4 * a) * c;

    printf("\ndiscrminant : %f\n\n",discrminant);
    
    if (discrminant == 0)
    {
    	root2 = root1 = - b / (2*c);

        printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);
	}
	else if (discrminant > 0)
	{
		root1 = (-b + sqrt(discrminant))/(2*a);
		root2 = (-b - sqrt(discrminant))/(2*a);

        printf("Two distinct and real roots exists: %.2f and %.2f", root1, root2);
	}
    else if (discrminant < 0)
    {
        root1 = root2 = -b / (2*a);
        i = (sqrt(-discrminant)) / (2 * a);

        
        printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f", 
                root1, i, root2, i);
    }
    



}
