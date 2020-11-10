#include <stdio.h>
#define MAXLINE 1000

int getLine(char [], int);
int strindex(char [], char []);

char pattern[] = "Hello";

main()
{
  char line[MAXLINE];

  while(getLine(line, MAXLINE) > 0) {
    if(strindex(line, pattern) >= 0) {
      printf("%s\n",line);
    }
  }
}

int getLine(char s[], int max)
{
  int c, i;
  i = 0;
  while(--max > 0 && (c = getchar()) != EOF && c != '\n') {
    s[i++] = c;
  }
  if(c == '\n') {
    s[i++] = c;
  }
  s[i] = '\0';

  return i;
}

int strindex(char s[], char t[])
{
  int i, k, j;
  for(i = 0; s[i] != '\0'; i++) {
    for(j = i, k = 0; t[k] != '\0' && s[j]==t[k]; j++, k++);
    if(k > 0 && t[k] == '\0')
      return i;
  }
  return -1;
}
