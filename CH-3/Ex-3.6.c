#include <stdio.h>
#include <string.h>
#define MAX 50

void itoa(int, char [], int);
void reverse(char s[]);

int main()
{
  int n = 1556;
  char s[MAX];
  itoa(n,s,8);
  printf("%s\n",s);
}

void itoa(int n, char s[], int width)
{
  int i, sign, cdigits, a;
  i = cdigits = 0;
  a = n;
  if((sign = n) < 0)
  {
    n = -n;
  }

  while(a != 0)
  {
    cdigits++;
    a /= 10;
  }

  do {
    s[i++] = n % 10 + '0';
    //printf("%c\n",s[i]);
  } while((n /= 10) > 0);

  if(sign < 0)
  {
    s[i++] = '-';
  }

  if(cdigits < width)
  {
    int diff = width - cdigits;
    //printf("%d\n",diff);
    while (diff != 0) {
      s[i++] = '*';
      diff--;
    }
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
