#include <stdio.h>
#include <string.h>

void strcatt(char *s, char *t);

int main()
{
  char s[20] = "Turki";
  char t[] = "saad";

  strcatt(s,t);

  printf("%s\n",s);

}

void strcatt(char *s, char *t)
{
  int i;
  for (i = 0; *s != '\0'; i++) {
    s++;
  }

  while ((*s++ = *t++) != '\0')
    ;
}
