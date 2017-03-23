#include <stdlib.h>
#include <stdio.h>
int main()
{
  int *a = (int*) malloc(10*sizeof(int));
  int b = a[10];
  printf("b = %d\n",b);
  free(a);
  return 0;
}
