#include <stdio.h>

/* this program deletes any char of s1 that is in s2 */

void squeez(char s1[], char s2[]);

int main()
{
  char s1[] = "SAUDI ARABIA";
  char s2[] = "ARABIA SAUDI";
  squeez(s1,s2);
}

void squeez(char s1[], char s2[])
{
  int i, j, z, flag;
  z = flag = 0;

  for(i = 0; s1[i] != '\0'; i++)
  {
    for(j = 0; s2[j] != '\0' && flag == 0; j++)
    {
      if(s1[i] == s2[j])
      {
        flag = 1;
      }
      printf("i:%d j:%d flag:%d\n",i,j,flag);
    }
    if(flag == 0)
    {
      s1[z++] = s1[i];
    }
    else
    {
      flag = 0;
    }
  }
  s1[z] = '\0';
  printf("%s\n",s1);
}
