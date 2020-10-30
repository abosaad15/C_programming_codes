#include <stdio.h>
#define MAXHEX 16

int htoi(char[],int);
int power(int,int);

int main()
{

  char s[] = "0x125aAA";
  int len = 8;
  printf("%d\n",htoi(s, len));

}

int htoi(char s[], int len)
{
  int i, p, a, result, arr_size;
  /*
  i for the loop
  p for the power of the number 16^p
  a is for the return value from the power() function
  arr_size is the size of array
  */
  i = a = result = 0;
  arr_size = len;
  if(s[i] == '0' && s[i+1] == 'x')
  {
    len = len - 2;
    i = 2;
  }

  p = len - 1;
  for(i = i; i < arr_size; i++)
  {
    if(s[i] >= '0' && s[i] <= '9')
    {
      a = power(16,p);
      result = (s[i] - '0') * a + result;
      p--;
    }
    else if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
    {
      int a, b;
      a = b = 0;
      if(s[i] == 'A' || s[i] == 'a') {b = 10;}
      else if(s[i] == 'B' || s[i] == 'b') {b = 11;}
      else if(s[i] == 'C' || s[i] == 'c') {b = 12;}
      else if(s[i] == 'D' || s[i] == 'd') {b = 13;}
      else if(s[i] == 'E' || s[i] == 'e') {b = 14;}
      else if(s[i] == 'F' || s[i] == 'f') {b = 15;}

      a = power(16,p);
      result = b * a + result;
      p--;
    }
  }
  return result;
}

int power(int x, int y)
{
  int i, p;
  p = 1;
  for(i = 0; i < y; i++)
  {
    p = x * p;
  }

  return p;
}
