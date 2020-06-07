#include <stdio.h>
#include <stdlib.h>

int solution(int N);

int main()
{
	int num;
	scanf("%d",num);
	solution(num);
}

int solution(int N)
{

	int y = 32, zero = 0, one = 0, i = 0, bin[32];
	int gap = 0;
	int num = N;

	for (int i = 0; i < 32; i++)
	{
		bin[i] = 2;
	}

	for (i = 32; num > 0; i--)
	{
		bin[i] = num % 2;
		num = num / 2;
	}

	while (y != 0)
	{
		
		if (bin[y] == 1)
		{
			one++;
		}
		else if (bin[y] == 0 && one > 0)
		{
			zero++;
		}

		if (one > 1)
		{
			if (zero >= gap)
			{
				gap = zero;
			}
			zero = 0;
			one = 1;
		}
		y--;
	}
	return gap;
}