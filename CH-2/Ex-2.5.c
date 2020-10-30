#include <stdio.h>

/* this program return the location of a char that matches one in s2*/

int squeez(char s1[], char s2[]);

int main()
{
  char s1[] = "EEE";
  char s2[] = "GTF";
  printf("The location in s1: %d\n", squeez(s1,s2));
}

int squeez(char s1[], char s2[])
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
    }
    if(flag != 0)
    {
      return i;
    }
  }
  return -1;
}
