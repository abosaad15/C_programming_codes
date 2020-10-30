#include <stdio.h>
#define MAX 100

/* write a program to remove trailing blanks and tabs from each line of input and to delete entirely blank lines. */
#include <stdio.h>
#define MAXLINE 1000

void reverse(char[],int);

int main()
{
  int len, c;
  char arr[MAXLINE];
  len = 0;
  while((c = getchar()) != EOF)
  {
    if(c != '\n')
    {
      arr[len] = c;
      len++;
    }
  }
  reverse(arr, len);
  printf("\n");
}

void reverse(char s[], int len)
{
  int i;
  while(len >= 0)
  {
    printf("%c", s[len]);
    len--;
  }
}
