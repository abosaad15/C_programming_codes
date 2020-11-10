#include <stdio.h>
#include <string.h>
void reverse(char []);

int main()
{
  char s[] = "Hello, World!";
  reverse(s);
  printf("%s\n",s);
}

void reverse(char s[])
{
  int i, j,c;
  for(i = 0, j = strlen(s) - 1; i < j; i++, j--)
  {
    c = s[i];
    s[i] = s[j];
    s[j] = c;
  }
}
// reverse using pointers

// #include <stdio.h>
// #include <string.h>
//
// #define MAX 5
//
// int main()
// {
//   int a[MAX], *p;
//
//   printf("Enter 5 elements:\n");
//   for (p = a; p <= a+(MAX-1); p++)
//     scanf("%d",p);
//
//   printf("-----\nreverse\n-----\n");
//
//   for (p = a + MAX-1; p >= a; p--)
//     printf("%d ",*p);
//
//   return 0;
// }
