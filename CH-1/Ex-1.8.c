#include <stdio.h>

/* write a program to count blanks, tabs and newlines */

int main()
{
  int tabs, blanks, newlines, c;
  tabs = blanks = newlines = 0;

  while((c = getchar()) != EOF)
  {
    if(c == '\t')
    {
      tabs = tabs + 1;
    }
    else if(c == '\n')
    {
      newlines++;
    }
    else if(c == ' ')
    {
      blanks++;
    }
  }

  printf("tabs: %d, blanks: %d, newlines: %d\n",tabs, blanks, newlines);
}
