# define _CRT_SECURE_NO_WARNINGS 
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

unsigned long long p(int n)
{
    if (n < 0) return 0;
    if (n <= 1) return 1;
    unsigned long long sum = 0;
    for(int k = 1, s = 1; (3*k-1)*k/2 <= n; ++k)
    {
        int l = (3*k+1)*k/2;
        int m = (3*k-1)*k/2;
        sum += s*(p(n-l)+p(n-m));
        s = -s;
    }
    return sum;
}

int main()
{
  int x;
  scanf("%d", &x);
  int x1;
  x1 = p(x);
  printf("%d", x1);
  getchar();getchar();
}