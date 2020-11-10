#include <stdio.h>

#define IN 1    /* inside a word */
#define OUT 0   /* outside a word */

/* write a program that prints a word per line */

int main()
{
  int c, tc, bc;
  tc = bc = 0;
  int state = OUT;
  while((c = getchar()) != EOF)
  {
    if(c == ' ' || c == '\t')
    {
      if(state == IN)
      {
        state = OUT;
        printf("\n");
      }
    }
    else
    {
      putchar(c);
      state = IN;
    }
  }
}
