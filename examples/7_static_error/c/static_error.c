#include <stdio.h>

int main()
{
  int a[10];
  int b,c;

  a[11] = 3;

  b = a[12];
  printf("b = %d\n",b);

  c = a[11];
  printf("c = %d\n",c);

  return 0;
} 
