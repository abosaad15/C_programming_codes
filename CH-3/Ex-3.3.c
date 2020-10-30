#include <stdio.h>
#include <string.h>
#define MAX 50

void expand(char [], char []);

int main()
{
  char s1[] = "A-N";
  char s2[MAX];
  expand(s1,s2);
  printf("%s\n",s2);
  //int a = 'a';
  //printf("%d\n",a);
}

void expand(char s1[], char s2[])
{
  int x,y,i,a;
  a = x = y = 0;
  if(strlen(s1) == 3)
  {
    if(s1[0] >= 'a' && s1[1] == '-' && s1[2] <= 'z')
    {
      x = s1[0];
      y = s1[2];
    //  printf("x:%d, y:%d\n",x,y);
      for(i = 0; x <= y; i++)
      {
        s2[i] = x;
        x++;
      }
      x = y = 0;
    }
    else if(s1[0] >= 'A' && s1[1] == '-' && s1[2] <= 'Z')
    {
      x = s1[0];
      y = s1[2];
      for(i = 0; x <= y; i++)
      {
        s2[i] = x;
        x++;
      }
      x = y = 0;
    }
    else if(s1[0] >= '0' && s1[1] == '-' && s1[2] <= '9')
    {
      x = s1[0];
      y = s1[2];
      for(i = 0; x <= y; i++)
      {
        s2[i] = x;
        x++;
      }
      x = y = 0;
    }
    else
    {
      printf("invalid Expression\n");
    }
  }
}
