#include <stdio.h>

void isPrime(int n);

int main()
{
  int a, b, i;

  printf("Enter a number plz: ");
  scanf("%d %d", &a, &b);
  for(i = a; i <= b; i++) {
    isPrime(i);
  }

}

void isPrime(int n)
{
  int flag, i;
  flag = 1;
  for(i = 2; i <= n/2; i++) {
    if(n % i == 0)
      flag = 0;
  }
  if(flag == 1)
    printf("%d is a prime number\n",n);
  else
    printf("%d is not a prime number\n",n);
}
