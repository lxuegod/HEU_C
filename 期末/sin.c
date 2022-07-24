#include <stdio.h>
#include <math.h>
double fact(int n)
{
  if (n == 0)
  return 1;
  return fact(n - 1)*n;
}
int main()
{
  double x, sum = 0, term = 1,m;
  int n = 1, t = 1;
  scanf("%lf %lf", &x,&m);
  while (term >= m) 
  {
  term = pow(x, 2 * n - 1) / fact(2 * n - 1);
  sum += t * term;
  t = -t;
  n++;
 }
  printf("%d %.9lf\n", n-1,sum);
  return 0;
}

