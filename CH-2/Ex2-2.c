#include <stdio.h>


int main()
{
  int c, i, len;
  len = 10;
  for(i = 0; i < len - 1; i++)
  {
    c = getchar();
    if(c == EOF || c == '\n')
    {
      i = len - 1;
      printf("Terminated\n");
    }
  }
}
