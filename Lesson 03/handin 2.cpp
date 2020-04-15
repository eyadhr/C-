#include <stdio.h>

int main()
{
int m=-5, n=2 , x ;
		x = ++m ;
		// x = -4 m = -4 v
		x /= n+1 ;
		// x = -4/2+1 x = -1 v
		n = (x-m) % n ;
		// n = (-5) % 1
		// n = 1
		m += x+n && n++ ;
		// m = (-4) + (-3 && 1) = -4
		// m = -4

}
/* 
10.)
	int m=-6, n=0 , x ;
		x = --m ;
		// x = -7 v
		// m = -7 v
		x *= -2 ;
		// x = 14 v
		// n = 0 v
		n = (x+m) % x ;
		// n = 7 v
		m = x-n==n && -m==n ;
		// m = 1 v

9.)
	int m=-5, n=2 , x ;
		x = ++m ;
		// x = -4 m = -4 v
		x /= n+1 ;
		// x = -4/2+1 x = -1 v
		n = (x-m) % n ;
		// n = (-5) % 1
		// n = 1
		m += x+n && n++ ;
		// m = (-4) + (-3 && 1) = -4
		// m = -4
				
.8)
	
	int a=0 , b=2 , x, y ;
		x = (++a * a--) * (--b * b++) ;
	//	x = (1 * 0--) * (1 * 2++) ;
	// a=0 , b=2 , x=1, y ;
		y = (!(a || b)) ? (a+b) : (a-b) ;
	//  -2 = (0) ? (2) : (-2) ;	
	// a=0 , b=2 , x=1, y =-2 ;
7.)
	int num1=32, num2=10;
	
		num1 += 0 ;
		num1=32, num2=10;
		// num1 = 32       num2 = 10
		num2 *= (31)  ;
		num1=33, num2=310;
		// num1 = 33       num2 = 310
		num1 /= num2 + 3 ;
		// num1 = 0        num2 = 310
		num2 -= --num1 ;
		// num1 = -1       num2 = 311
		printf("\nnum1 = %d\tnum2 = %d", num1, num2);

6.)
	int x1, x2, x3, x4, x5, num1=1, num2=2, num3=3;
	
		x1 = !num1; // = 0
		x2 = !(num2 >= num3); // = 1
		x3 = (num1+num2 == num3) || (num2 > num3) ; // = 1
		x4 = (num2 != num3) && (num1-num3 <= 5) ; // = 1
		x5 = !( (num2 == num3) || (num1 <= 0) ); // = 1
5.)
	int a=5 , b=2 , c=3,z;
	double x=1.0 ;
	
		a<b && c<b;
		0 && 0; = 0
				
		z = a<!b || !!a;
		1 || !!5; = 1
		
		z = a+b <!c+c;
		7 < 3 ; // = 0
		
		z = a-x || b*c && b/a;
		4.0 || 6 && 0.4; = 1
				
		z = a- (x || b*c && b/a);
		5- (1); = 4

4.)
	int val1=3 ; int val2=4 ;
	double val3=3.0 ; double val4=7.0 ;
	double result1, result2 ;
	
		result1 = val4 + val1/val2 ; // 7.0 + 3/4 = 7.0
		result2 = val4 + val3/val2 ; // 7.0 + 3.0/4 = 7.75
		
		printf("result1 : %f\nresult2 : %f",result1,result2);

3.)
	int a =1, b, c, d ;
	
		a = b = 3<5 ; // = 1
		c = a == b ; // = 1
		d = a != (b + 1) ;// = 1
	
	printf("a : %d\nc : %d\nd : %d\n",a,c,d);

2.)
	int x=1, y=2, z1, z2 ;
	float a=3.0, b=4.0, c1, c2 ;
	
		z1 = x+y/a ;    // int z1 = 1+2/3.0 = 1 
		z2 = (x+y)/a ;  // int z2 =(1+2)/3.0 = 1 
		c1 = x*((a - b)/y + x) ; // Float c1 = 1*((3.0 - 4.0)/2 + 1) = 0.50000 
		c2 = (y+x%y) * a ; // float c2 = (2+1%2) * 3.0 = 9.000000 
		
		printf("z1 : %d\nz2 : %d\nc1 : %f\nc2 : %f\n",z1,z2,c1,c2);
		
1.)
	int z1,z2,z3,x=7,y=4;
	float c1,c2,c3,a=2.5,b=-0.5;
	
		z1 = x%y - a  ;// int = 0
		z2 = 1 + y * b  ;// int =  -1
		z3 = b / 3 ;  // int = 0
		c1 = x + a*2  ;// float = 12.000000
		c2 = x%2 * y ; // float = 4.000000
		c3 = x - 3/y ; // float = 7. .000000

	printf(" z1 : %d\n z2 : %d\n z3 : %d\n c1 : %f\n c2 : %f\n c3 : %f\n ",z1,z2,z3,c1,c2,c3);
*/	
