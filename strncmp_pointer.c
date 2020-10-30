#include <stdio.h>
#include <string.h>

int _strncmp(char *s, char *t, int n);

int main()
{
  char s[] = "a";
  char t[] = "a";
  printf("%d\n", _strncmp(s,t, 3));
}

int _strncmp(char *s, char *t, int n)
{
  int i;
  for (; *s == *t; s++, t++) {
    if (*s == '\0')
      return 0;
  }

  return *s - *t;

}
