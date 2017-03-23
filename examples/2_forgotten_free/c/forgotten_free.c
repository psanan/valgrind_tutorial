#include <stdlib.h>
int main(){
  int *a;
  a = (int *) malloc(10 * sizeof(int));
  a[0] = 1234;
  return 0;
}
