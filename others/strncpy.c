#include <stdio.h>
#include <string.h>

void _strncpy(char *s, char *t, int n);

int main()
{
  char s[] = "Turki Alshehri bin saad kjeh owe oweirgoweg owhrgortg osgr q[o ] Saad";
  char t[100];
  _strncpy(s,t,6);
  printf("%s\n",t);

  return 0;
}

void _strncpy(char *s, char *t, int n)
{
  int i;
  for (i = 0; i < n; i++) {
    *t++ = *s++;
  }
}
