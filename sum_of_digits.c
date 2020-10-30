#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, sum;
    sum = 0;
    scanf("%d", &n);
    do{
        sum = sum + n % 10;
    }while((n /= 10) > 0);
    printf("%d\n",sum);
    return 0;
}
