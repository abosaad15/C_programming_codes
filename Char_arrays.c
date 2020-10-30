#include <stdio.h>
#define MAXLINE 1000    /* max input line size */


int getLine (char s[], int len);
void copy (char to[], char  from[]);


int main()
{
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];
  char arr[MAXLINE];

  max = 0;
  while ((len = getLine(line, MAXLINE)) > 0)
  {
    if (len > max)
    {
      max = len;
      copy(longest, line);
    }
  }


  if (max > 0)
  {
    printf("The longest text : %s\n", longest);
    printf("The length of the text : %d\n", max);
  }

  return 0;
}



int getLine (char s[], int len)
{
  int c , i;

  for(i = 0; i < len - 1 && (c = getchar()) != EOF && c != '\n'; i++)
  {
    s[i] = c;
  }

  if(c == '\n')
  {
    s[i] = c;
    i++;
  }

  s[i] = '\0';
  return i;
}

void copy (char to[], char from[])
{
  int i;
  i = 0;
  while((to[i] = from[i]) != '\0')
  {
    i++;
  }
}
