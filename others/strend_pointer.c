#include <stdio.h>
#include <string.h>

int strend(char *s, char *t);

int main()
{
  char *s = "Turki Alshehri bin saad kjeh owe oweirgoweg owhrgortg osgr q[o ] Saad";
  char *t = "Saad ";
  printf("%d\n", strend(s,t));
}

int strend(char *s, char *t)
{
  int i, len_s, len_t;
  len_s = len_t = 0;

  while (*s++ != '\0')
    len_s++;
  while (*t++ != '\0')
    len_t++;


  t -= len_t; t--;
  s -= len_t; s--;

  for (i = 0; i < len_t; i++) {
    if (*s != *t)
      return 0;
  }

  return 1;
}
