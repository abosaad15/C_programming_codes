#include <stdio.h>
#include <time.h>
#define MAX 100 /* this is the max char */

void escape1(char s[], char t[]);
void escape2(char s[], char t[]);

int main()
{
  int c, i;
  i = 0;
  char t[MAX];
  char s[MAX];
  while((c = getchar()) != EOF)
  {
    t[i] = c;
    i++;
  }
  escape2(s,t);
  printf("String s: %s\n",s);
}

void escape1(char s[], char t[])
{
  int i, j;
  i = j = 0;
  while(t[i] != '\0')
  {
    switch(t[i])
    {
      case '\t':
        s[j] = '\\';
        s[j++] = 't';
        break;
      case '\n':
        s[j] = '\\';
        s[j++] = 'n';
        break;
      default:
        s[j] = t[i];
        j++;
        break;
    }
    //printf("i: %d, char t: %c, char s: %c\n",i, t[i],s[i]);
    i++;
  }
}

void escape2(char s[], char t[])
{
  int i, j;
  i = j = 0;
  while(t[i] != '\0')
  {
    switch(t[i])
    {
      case '\\':
        if(t[i+1] == 't')
        {
          s[j] = '\t';
          j++;
          i++;
        }
        else if(t[i+1] == 'n')
        {
          s[j] = '\n';
          j++;
          i++;
        }
        break;
      default:
        s[j] = t[i];
        j++;
        break;
    }
    i++;
  }
}
