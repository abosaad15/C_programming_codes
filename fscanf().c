#include <stdio.h>


int main()
{
  FILE *ptr = fopen("text.txt", "r");
  if (ptr == NULL) {
    printf("no such file.");
    return 0;
  }

  char *buf[100];
  while (fscanf(ptr, "%s %*s %s", buf) == 1)
    printf("%s\n",buf);

  return 0;
}
