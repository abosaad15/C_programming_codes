#include <stdio.h>


/* write a program that replaces each tab by \t, each backspace by \b,
   each backslash by \\ */


int main()
{
  int c;

  while((c = getchar()) != EOF)
  {
    if(c == '\t')
    {
      printf("\\t");
    }
    else if(c == 8)
    {
      printf("\\b");
    }
    else if(c == '\\')
    {
      printf("\\\\");
    }
    else
    {
      putchar(c);
    }
  }
}
