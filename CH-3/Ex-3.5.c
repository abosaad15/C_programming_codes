#include <stdio.h>
#include <string.h>
#define MAX 20
#define DECIMAL 10
#define HEXDECIMAL 16


void itoa(int, char [], int);
void reverse(char s[]);

/* ths program converts an integer into a base b */

int main()
{
  int n = -1876878;
  char s[MAX];
  itoa(n,s,10);
  printf("%s\n",s);
}

void itoa(int n, char s[], int b)
{
  int count, i, remainder, sign;

  i = 0;

  if((sign = n) < 0)
  {
    n = -n;
  }

  if(b == DECIMAL)
  {
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
  else if(b == HEXDECIMAL)
  {
    do {
      remainder = n % 16;
      if(remainder < 10)
      {
        s[i++] = remainder + '0';
      }
      else if(remainder >= 10)
      {
        switch(remainder)
        {
          case 10 :
            s[i++] = 'A';
            break;
          case 11 :
            s[i++] = 'B';
            break;
          case 12 :
            s[i++] = 'C';
            break;
          case 13 :
            s[i++] = 'D';
            break;
          case 14 :
            s[i++] = 'E';
            break;
          case 15 :
            s[i++] = 'F';
            break;
          default :
            printf("There is something wrong !!");
            break;
        }
      }
    } while((n /= 16) > 0);
    if(sign < 0)
    {
      s[i++] = '-';
    }
    s[i] = '\0';
    reverse(s);
  }
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
