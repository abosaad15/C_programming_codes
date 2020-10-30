#include <stdio.h>
#include <string.h>


int palindrome(char *);

int main()
{
  char t[] = "23432";
  printf("%d\n", palindrome(t));
}

int palindrome(char *s)
{
  char *ptr;
  int len, i;
  len = 0;

  while (*s != '\0') {
    s++;
    len++;
  }

  for (i = 0; i < len; i++)
    s--;

  ptr = s;
  ptr += len;
  ptr--;

  for (i = 0; i < len; i++) {
    printf("s: %c    ptr: %c \n",*s, *ptr);
    if (*s != *ptr)
      return 0;
    s++;
    ptr--;
  }

  return 1;
}
