#include <stdio.h>
#define MAXLINE 1000

int getLine(char[], int);

int main()
{
  int len, i, bc;
  int max;
  char line[MAXLINE];
  bc = 0;
  while((len = getLine(line, MAXLINE)) > 0)
  {
    for(i = 0; i < len; i++)
    {
      if(line[i] == ' ')
      {
        bc++;
        //("inside ' '\n");
        if(bc < 2)
        {
          printf("%c",line[i]);
        }
      }
      else
      {
        //printf("inside else\n");
        if(line[i] != '\t')
        {
          printf("%c",line[i]);
        }
        bc = 0;
      }
    }
  }
}

int getLine(char s[], int len)
{
  int c, i, bc;
  bc = 0;
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
