#include <stdio.h>

int main()
{
  int flag, i, num;
  flag = 1;

  printf("Enter a number plz: ");
  scanf("%d", &num);

  for(i = 2; i <= num/2; i++) {
    if(num % i == 0)
      flag = 0;
  }
  if(flag == 1)
    printf("%d is a prime number\n",num);
  else
    printf("%d is not a prime number\n",num);
}
