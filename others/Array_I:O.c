#include <stdio.h>


int main()
{
  int arr[5], i;

  for (i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Array: ");
  for(i = 0; i < 5; i++)
    printf("%d ",arr[i]);
}
