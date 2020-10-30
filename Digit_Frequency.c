#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 1000

int main() {

    char num[MAX];
    fgets(num, MAX, stdin);
    int i;
    int ndigits[10] = {0};

    for (i = 0; i < strlen(num); i++) {
        if (num[i] >= '0' && num[i] <= '9') {
            ndigits[num[i] - '0']++;
        }
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", ndigits[i]);
    }
    return 0;
}
