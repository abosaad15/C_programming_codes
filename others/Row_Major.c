#include <stdio.h>
#include <string.h>

/* C uses the ROW major in multideminsional arrays

and this is why we dont need to specify the number of rows where the the number
of colums is a must */
int main()
{
  int arr[][3] = {{1,2,3}, {2,3,4}};
  int *ptr;

  for (ptr = &arr[0][0]; ptr <= &arr[1][2]; ptr++) {
    printf("%d\n",*ptr);
  }
  return 0;
}
