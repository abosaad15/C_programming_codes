#include <stdio.h>
#include <time.h>

int binarysearch(int x, int v[], int n)
{
  int low, high, mid;
  low = 0;
  high = n - 1;
  while (low <= high)
  {
    mid = (low+high) / 2;
    if(x < v[mid])
    {
      high = mid - 1;
    }
    else if(x > v[mid])
    {
      low = mid + 1;
    }
    else
    {
      return mid;
    }
  }
  return - 1;
}

int main()
{
  int v[] = {1,2,3,5};
  int n = 4;
  int x = 3;

  int result;
  clock_t begin = clock();
  result = binarysearch(x,v,n);
  clock_t end = clock();
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  
  printf("at index: %d, Time take: %f\n",result, time_spent);
}
