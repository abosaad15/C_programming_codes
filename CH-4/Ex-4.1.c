#include <stdio.h>
#define MAXLINE 1000

int getLine(char s[], int lim);
int strIndex(char [], char []);
char pattern[] = "ould";
int main()
{
  char line[MAXLINE];
  int found = 0;
  int idx = 0;    /* the rightmost index */
  while((getLine(line, MAXLINE)) > 0)
  {
    if((idx = strIndex(line, pattern)) >= 0)
    {
      printf("rightmost index: %d\n",idx);
      found++;
    }
  }
  printf("%d\n",found);
}

int getLine(char s[], int lim)
{
  int c, i;
  i = 0;
  while(--lim > 0 && (c = getchar()) != EOF && c != '\n')
  {
    s[i++] = c;
  }
  if(c == '\n')
  {
    s[i++] = '\n';
  }
  s[i] = '\0';
  return i;
}

int strIndex(char s[], char t[])
{
  int i,j,k;
  for(i = 0; s[i] != '\0'; i++)
  {
    for(j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++){;}
    if(k > 0 && t[k] == '\0')
    {
      return j - 1;
    }
  }
  return -1;
}
