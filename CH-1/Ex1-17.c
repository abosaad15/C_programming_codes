#include <stdio.h>
#define MAXLINE 1000    /* max input line size */

/* writes a program to print all input lines that are longer than 80 chars */


int getLine(char[], int);

int main()
{
  int len, i;
  int max;
  char line[MAXLINE];
  while((len = getLine(line, MAXLINE)) > 0)
  {
    if(len > 80)
    {
      printf("above line is > 80: %s",line);
    }
  }
}

int getLine(char s[], int len)
{
  int c, i;
  for(i = 0; i < len - 1 && ((c = getchar()) != EOF) && c != '\n'; i++)
  {
    s[i] = c;
  }
  if(c == '\n')
  {
    s[i] = c;
  }

  return i;
}
