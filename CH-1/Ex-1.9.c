#include <stdio.h>


/* write a program that replaces a string of one or more blanks by a single blank */

int main()
{
  int c;
  int blankCount = 0;

  while((c = getchar()) != EOF)
  {
    if(c == ' ')
    {
      blankCount++;
      if(blankCount <= 1)
      {
        putchar(c);
      }
    }
    else
    {
      putchar(c);
      blankCount = 0;
    }
  }
}
