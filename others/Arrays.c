#include <stdio.h>

/* this is a program that counts the occurances of white spaces(tabs, blank, newline)
    and number of digits and number of other char */


int main()
{
  int c, nwhite, nother, i;
  int ndigit[10];
  nwhite = nother = 0;

  for(i = 0; i < 10; i++)
  {
    ndigit[i] = 0;
  }

  while((c = getchar()) != EOF)
  {
    if(c >= '0' && c <= '9')
    {
      ndigit[c - '0'] = ndigit[c - '0'] + 1;
    }
    else if(c == ' ' || c == '\n' || c == '\t')
    {
      nwhite++;
    }
    else
    {
      nother++;
    }
  }

  for(i = 0; i < 10; i++)
  {
    printf("%d ",ndigit[i]);
  }

  printf("white spcae: %d, other char: %d\n",nwhite, nother);
}
