#include <stdio.h>
#include <string.h>


int *findmid(int [], int);

int main()
{
  int i, len;
  int arr[7] = {23,5,2,3,12,455,43,5};
  for (i = 0; arr[i] != '\0'; i++) {
    printf("arr[%d]\n",arr[i]);
    len++;
  }

  printf("len: %d\n",len-1);
  int * mid;
  mid = findmid(arr,len-1);
  printf("mid: %d\n",*mid);
}

int *findmid(int arr[], int len)
{
  return &arr[len/2];
}
