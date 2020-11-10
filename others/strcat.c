#include <stdio.h>

void strcat(char[], char[]);

int main()
{
  char s[15] = "SAUDI";
  char t[] = "ARABIA";
  strcat(s,t);
}

void strcat(char s[], char t[])
{
  int i, j;
  i = j = 0;
  while(s[i] != '\0') /* get the index where you start putting t */
  {
    i++;
  }
  while((s[i++] = t[j++]) != '\0'); /* copy t to s */
  printf("%s\n",s);
}
