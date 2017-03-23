#include <stdlib.h>
#include <stdio.h>
int main()
{
  int i;
  int *a = (int*) malloc(10*sizeof(int));
  int *b = (int*) malloc(10*sizeof(int));

  for (i=0; i< 10 ; ++i) b[i] = i;
  for (i=0; i< 100; ++i) a[i] = i;

  printf("a: ");
  for (i=0; i<10; ++i) printf("%d ",a[i]);
  printf("\n");

  printf("b: ");
  for (i=0; i<10; ++i) printf("%d ",b[i]);
  printf("\n");

  free(a);
  free(b);

  return 0;
}
