#include "stdio.h"
#define MAX 20
#include <string.h>

void itoa(int, char []);
void reverse(char s[]);

int main()
{
  int n = -59862668;
  char s[MAX];
  itoa(n,s);
  printf("%s\n",s);
}

void itoa(int n, char s[])
{
  int i, sign;

  if((sign = n) < 0)
  {
    n = -n;
  }
  i = 0;
  do {
    s[i++] = n % 10 + '0';
  } while ((n /= 10) > 0);
  if(sign < 0)
  {
    s[i++] = '-';
  }
  s[i] = '\0';
  reverse(s);
}

void reverse(char s[])
{
  int i = 0;
  int len = strlen(s) - 1;
  char c ;
  while(i < len)
  {
    c = s[i];
    s[i] = s[len];
    s[len] = c;
    i++;
    len--;
  }
}
