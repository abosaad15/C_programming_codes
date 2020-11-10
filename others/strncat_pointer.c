#include <stdio.h>
#include <string.h>

void _strcat(char *s, char *t, int n);

int main()
{
  char s[20] = "Turki bin ";
  char t[] = "Saad ";
  _strcat(s,t, 3);
  printf("%s\n", s);
}

void _strcat(char *s, char *t, int n)
{
  int len, i;
  len = 0;

  //char *ptr = s;
  while (*s != '\0') {
    s++;
    len++;}

  //s--;

  for (i = 0; i < n; i++) {
    *s++ = *t++;
  }
}
