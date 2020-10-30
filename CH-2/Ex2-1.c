#include <stdio.h>


void compute_signed(size_t);
void compute_unsigned(size_t);

int main()
{
  compute_signed(sizeof(int));
  compute_unsigned(sizeof(int));
}

void compute_signed(size_t bytes)
{
  int bit = bytes * 8;
  int from = -(1<<(bit-1));
  int to = (1<<(bit-1)) - 1;
  printf("From: %d To: %d\n",from, to);
}

void compute_unsigned(size_t bytes)
{
  int bits = bytes * 8;
  unsigned int range = ((1 << (bits-1)) - 1) + (1 << (bits-1)) ;
  printf("The range: %u\n",range);
}
