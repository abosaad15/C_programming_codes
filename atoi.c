#include <stdio.h>
#include <ctype.h>

int atoi(char arr[]);
// int isspace(char);
// int isdigit(char);

int main()
{
  char s[] = " -12A5";
  printf("%d\n",atoi(s));
}

/* version 1 */
// int atoi(char arr[])
// {
//   int n, i;
//   n = 0;
//   for(i = 0; s[i] >= '0' && s[i] <= '9'; i++)
//   {
//     n = 10 * n + (s[i] - '0');
//   }
//   return n;
// }

/* version 2 */
int atoi(char s[])
{
  int n, i, sign;
  for(i = 0; isspace(s[i]); i++);
  sign = (s[i] == '-') ? -1 : 1;
  if(s[i] == '+' || s[i] == '-') {i++;}
  for(n = 0; isdigit(s[i]); i++)
  {
    n = n * 10 + (s[i] - '0');
  }
  return sign * n;
}

// int isspcae(char a)
// {
//   return (a == ' ') ? 1 : 0;
// }
//
// int isdigit(char a)
// {
//   return (a >= '0' && a <= '9') ? 1 : 0;
// }
