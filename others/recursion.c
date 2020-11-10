#include <stdio.h>


int recurse_sum(int);

main()
{
  int number;
  printf("Enter a positive number: ");
  scanf("%d",&number);

  printf("sum: %d\n",recurse_sum(number));
}


int recurse_sum(int n)
{
  if(n != 0) {
    return n + recurse_sum(n - 1);
  }
  return n;
}
