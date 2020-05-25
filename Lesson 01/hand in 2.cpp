#include<stdio.h>
#include <iostream>
using namespace std;

int main(void)
{
	int z1, z2, z3, x=7, y=4;
	float c1, c2, c3, a=2.5, b=-0.5;
	z1 = x%y - a ;
	z2 = 1 + y * b ;
	z3 = b / 3 ;
	c1 = 7 + 2.5*2 ;
	c2 = 7%2 * 4;
	c3 = x - 3/y ;
	
	printf("z1 %d\n",z1);
	printf("z2 %d\n",z2);
	printf("z3 %d\n",z3);
	printf("c1 %f\n",c1);
	printf("c2 %f\n",c2);
	printf("c3 %f",c3);
	
	return 0;
	
}
