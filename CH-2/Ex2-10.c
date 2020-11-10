#include <stdio.h>
#include <time.h>

int lower(int);

int main()
{
  int i = 0;
  char c[] = "ABC";

  int result;
  clock_t begin = clock();
  for(i = 0; i < 3; i++)
  {
    c[i] = lower(c[i]);
  }
  clock_t end = clock();
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  printf("%s\n",c);
  printf("Time take: %f\n",time_spent);
}

int lower(int c)
{
  /* this is called "conditional expression", i used it instead of if - else */
  return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;

}
