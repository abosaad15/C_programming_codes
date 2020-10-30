#include <stdio.h>

/* write a program that prints a histogram of te words length
  draw the histogram in a horizontal and vertical */


/* the horizontal version */
// int main()
// {
//   int c, leng;
//   leng = 0;
//   while((c = getchar()) != EOF)
//   {
//     if(c == ' ' || c == '\t' || c == '\n')
//     {
//       if(leng != 0)
//       {
//         for(int i = 0; i < leng; i++)
//         {
//           printf("#");
//         }
//         printf("\n");
//         leng = 0;
//       }
//     }
//     else
//     {
//       leng++;
//     }
//   }
// }

/* the vertical version */
int main()
{
  int c, leng, wc, i, longest;
  int arr[3];
  longest = 0;

  for(i = 0; i < 3; i++)
  {
    arr[i] = 0;
  }

  while((c = getchar()) != EOF)
  {
    if(c == ' ' || c == '\n' || c == '\t')
    {
      if(leng != 0)
      {
        wc++;
        arr[wc - 1] = leng;
        leng = 0;
      }
    }
    else
    {
      leng++;
    }
  }

  int x = arr[0];
  int y = arr[1];
  int z = arr[2];
  printf("x: %d, y: %d, z: %d\n",x,y,z);

  for(i = 0; i < 3; i++)
  {
    int j;
    j = arr[i];
    if(longest < j)
    {
      longest = j;
    }
  }


  for(i = 0; i < longest; i++)
  {

    if(x != 0)
    {
      printf("#");
      x--;
    }
    else
    {
      printf(" ");
    }

    if(y != 0)
    {
      printf("#");
      y--;
    }
    else
    {
      printf(" ");
    }

    if(z != 0)
    {
      printf("#");
      z--;
    }
    else
    {
      printf(" ");
    }

    printf("\n");
  }
}
