#include <stdio.h>

#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

/* write a program that counts the number of char, words and newlines */

int main()
{
  int wc, nl, nc, state, c;
  wc = nl = nc = 0;
  state = OUT;

  while((c = getchar()) != EOF)
  {
    nc++;
    if(c == '\n') { nl++; }
    if(c == ' ' || c == '\n' || c == '\t')
    {
      state = OUT;
    }
    else if(state == OUT)
    {
      state = IN;
      wc++;
    }
  }

  printf("word count: %d, newline count: %d, new char: %d\n", wc,nl,nc);
}
