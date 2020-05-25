#include <stdio.h>
//int solution(int A[], int N);

int main()
{
  int N=3+1,res_orx=0,res_A=0;
  int A[N]{2,3,1,5};
  int orx[N+1];

  for (int i = 0; i < N+1; i++)
  {
    res_orx += i + 1;
 
  }

  for (int i = 0; i < N; i++)
  {
    res_A += A[i];

  }
  printf("%d\n", res_A);

  res_A = res_orx-res_A;

  printf("%d\n", res_A);

  return res_A;
}
    /*
An array A consisting of N different integers is given. The array contains integers in the range [1..(N + 1)],
 which means that exactly one element is missing.

Your goal is to find that missing element.


that, given an array A, returns the value of the missing element.

For example, given array A such that:

  A[0] = 2
  A[1] = 3
  A[2] = 1
  A[3] = 5
the function should return 4, as it is the missing element.

Write an efficient algorithm for the following assumptions:

N is an integer within the range [0..100,000];
the elements of A are all distinct;
each element of array A is an integer within the range [1..(N + 1)].
*/