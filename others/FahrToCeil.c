#include <stdio.h>

// this program to convert tempurture from fahr to Celi

// int main()
// {
//   float fahr, celi;
//   int lower = 0;
//   int upper = 300;
//   int step = 20;
//   fahr = lower;
//
//   while(fahr <= upper)
//   {
//     celi = (5.0/9.0) * (fahr-32);
//     printf("%3.1f\t%3.1f\n",fahr,celi);
//     fahr = fahr + step;
//   }
// }


// convert from C to fahr

int main()
{
  float fahr, celi;
  int lower = 0;
  int upper = 300;
  int step = 20;
  celi = lower;

  while(celi <= upper)
  {
    fahr = celi * (9.0/5.0) + 32;
    printf("%3.1f\t%3.1f\n",celi, fahr);
    celi = celi + step;
  }
}
