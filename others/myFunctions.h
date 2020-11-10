
double power(double x, double y)
{
  double p;
  int i;
  p = 1.0;
  for(i = 0; i < y; i++)
  {
    p = x * p;
  }
  return p;
}
