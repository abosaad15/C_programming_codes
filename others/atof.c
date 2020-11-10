#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "myFunctions.h"

double atof(char s[]);

int main() {
  char t[] = "45.66e6";
  printf("result is %f\n",atof(t));
}


double atof(char s[]) {
  double powerr, n, e, p, result;
  int i, sign;

  for(i = 0; isspace(s[i]); i++)        /* skip white spaces */
    ;
  sign = (s[i] == '-') ? -1 : 1;        /* check the sign */
  if(s[i] == '-' || s[i] == '+')
    i++;                                /* skip the sign char if any */
  for(n = 0.0; isdigit(s[i]); i++)        /* convert the number left to the "." ex 123.0 */
    n = n * 10.0 + (s[i] - '0');
  if(s[i] == '.')                       /* if s[i] == '.' skip the index */
    i++;
  for(powerr = 1.0; isdigit(s[i]); i++) { /* convert the numbers right to the dot */
    n = n * 10.0 + (s[i] - '0');
    powerr *= 10.0;                      /* power gets multiplied by 10 as the number of decimal increases */
  }
  if(s[i] == 'e' || s[i] == 'E') {
    e = 2.71828;
    i++;
  }
  for(p = 0; isdigit(s[i]); i++) {
    p = p * 10 + (s[i] - '0');
  }

  return (sign * n / powerr) * power(e,p);
}
