# define _CRT_SECURE_NO_WARNINGS 
# include <stdio.h>
# include <stdlib.h>
# include <math.h>


int square(int n, int prevnumb)
{
  int number = 0;
  //printf("%d", prevnumb);
  if (prevnumb >= n)
  {
    return 1;
  }
  for (int i = prevnumb; i < n;i++)
  {
    number += square(n - i, i);
  }
  return number;
}

int main()
{
  int x;
  scanf("%d", &x);
  int x1;
  x1 = square(x, 1);
  printf("%d", x1);
  getchar();getchar();
}