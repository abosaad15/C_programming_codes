#include <stdio.h>


/* */
double power(double x, double y);

int main()
{

  printf("The result: %f\n", power(2.71828  ,-5.0));
}

double power(double x, double y)
{
  double p;
  int i;
  p = 1.0;
  for(i = 0; i < y; i++)
  {
    p = x * p;
  }

  return p;
}
