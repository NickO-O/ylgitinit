# define _CRT_SECURE_NO_WARNINGS 
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

float count_error(float number, float a, float b)
{
  return fabs(sqrt(number) - (a / b));
}

int my_recursion(float number, float a, float b, int d, float bestA, float bestB)
{
  printf("%f %f %f %f\n", a, b, count_error(number, a, b), count_error(number, bestA, bestB));
  if (count_error(number, a, b) < count_error(number, bestA, bestB))
  {
    bestA = a;
    bestB = b;
  }
  if (b > d)
  {
    printf("%.0f %.0f\n", bestA, bestB);
    printf("%.3f %.3f %.6f", sqrt(number), bestA / bestB, count_error(number, bestA, bestB));
    return 0;
  }
  if (a / b > sqrt(number))
  {
    return my_recursion(number, a, b + 1, d, bestA, bestB);
  }
  else
  {
    return my_recursion(number, a + 1, b, d, bestA, bestB);
  }
}


int main()
{
  int x;
  int d;
  scanf("%d %d", &x, &d);
  my_recursion(x, 1.0, 1.0, d, 1.0, 1.0);
  getchar(); getchar();
}