#include <stdio.h>

/* 2x2 matrices */


int main()
{
  int size;
  printf("Enter the size of matrix: ");
  scanf("%d", &size);
  printf("Size is: %d\n",size);

  int a[size][size], b[size][size], c[size][size];

  int i, j, k;

  for (i = 0; i < 2; i++) {
    if (i == 0) {
      printf("Enter values for matrix %d\n", i+1);
      for (j = 0; j < size; j++) {
        for (k = 0; k < size; k++) {
          printf("[%d][%d]: ",j, k);
          scanf("%d",&a[j][k]);
        }
      }
    }
    else {
      printf("Enter values for matrix %d\n", i+1);
      for (j = 0; j < size; j++) {
        for (k = 0; k < size; k++) {
          printf("[%d][%d]: ",j, k);
          scanf("%d",&b[j][k]);
        }
      }
    }
  }

  for (i = 0; i < size; i++) {
    for (j = 0; j < size; j++) {
      c[i][j] = a[i][j] + b[i][j];
    }
  }

  printf("\n\n-----Result of the sum-----\n\n");

  for (i = 0; i < size; i++) {
    for (j = 0; j < size; j++) {
      printf("%3d  ", c[i][j]);
    }
    printf("\n");
  }


}
