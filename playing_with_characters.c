#include <stdio.h>


int main()
{
  char s[100];
  printf("Enter a sentence: ");
  scanf("%[^1]%*d", s);
  printf("printed: %s\n",s);
}
