#include <stdio.h>

void squeeze(char[], int);

int main()
{
  char s[] = "KSBA";
  squeeze(s,'B');
}

void squeeze(char s[], int c)
{
  int i, j;
  for(i = j = 0; s[i] != '\0'; i++)
  {
    if(s[i] != c)
    {
      s[j++] = s[i];
      /* s[j] = s[i]; j++; */
    }
  }
  s[j] = '\0';
  printf("%s\n",s);
}
