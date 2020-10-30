#include <stdio.h>


void printed(int);

int main()
{
  printed(123);
  printf("\n");
  return 0;
}

void printed(int n)
{
  if (n < 0) {
    putchar('-');
    n = -n;
  }

  if (n / 10)
    printed(n / 10);
  putchar(n % 10 + '0');
}
