#include <stdio.h>

/* write a program that prints the frequencies of different chars */

int main()
{
  int c, nwhite, nother, i, x, j;
  int ndigits[10];
  nwhite = nother = 0;

  for(i = 0; i < 10; i++)
  {
    ndigits[i] = 0;
  }

  while((c = getchar()) != EOF)
  {
    if(c == ' ' || c == '\t' || c == '\n')
    {
      nwhite++;
    }
    else if(c >= '0' && c <= '9')
    {
      ndigits[c - '0']++;
    }
    else
    {
      nother++;
    }
  }

  printf("white spaces:\n");
  for(i = 0; i < nwhite; i++)
  {
    printf("#");
  }

  printf("\nother:\n");
  for(i = 0; i < nother; i++)
  {
    printf("#");
  }

  printf("\n");
  for(i = 0; i < 10; i++)
  {
    x = ndigits[i];
    printf("%d:", i);
    for(j = 0; j < x; j++)
    {
      printf("#");
    }
    printf("\n");
  }
}
