#include <stdio.h>

int main(){


  int c, count;
  count = 0;
  while((c = getchar()) != EOF)
  {
    count++;
    if(count <= 12)
    {
      putchar(c);
    }
    else
    {
      if(c == ' ')
      {
        printf("\n");
        count = 0;
      }
      else
      {
        putchar(c);
      }
    }
  }
}
