#include <stdio.h>
#define MAX 3000

int main()
{
  int c, i, len, comment1, comment2;
  char arr[MAX];
  len = comment1 = comment2 = 0;
  while((c = getchar()) != EOF)
  {
    arr[len] = c;
    len++;
  }
  printf("%d\n",i);
  for(i = 0; i < len; i++)
  {
    if(arr[i] == '/' && arr[i+1] == '/')
    {
      comment1 = 1;
    }

    if(arr[i] == '/' && arr[i + 1] == '*')
    {
      comment2 = 1;
    }

    if(comment2 == 0)
    {
      if(comment1 != 1)
      {
        printf("%c",arr[i]);
      }
      else
      {
        if(arr[i] == '\n')
        {
          printf("%c",arr[i]);
          comment1 = 0;
        }
      }
    }
    else if(comment2 == 1)
    {
      if(arr[i] == '*' && arr[i+1] == '/')
      {
        i = i + 2;
        printf("%c",arr[i]);
        comment2 = 0;
      }
    }
  }
}
