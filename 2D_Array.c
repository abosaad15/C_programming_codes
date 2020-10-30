#include <stdio.h>

const int CITY = 2;
const int DAYS = 7;
int main()
{
  int temp[CITY][DAYS];
  int i, j;

  for (i = 1; i <= CITY; i++) {
    for (j = 1; j <= DAYS; j++) {
      printf("City: %d -- Day: %d ", i, j);
      scanf("%d", &temp[i][j]);
    }
  }

  printf("\n");

  for (i = 1; i <= CITY; i++) {
    for (j = 1; j <= DAYS; j++) {
      printf("City: %d -- Day: %d, Temp: %d\n", i, j, temp[i][j]);
    }
  }
}
