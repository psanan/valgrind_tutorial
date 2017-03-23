#include <stdlib.h>
#include <stdio.h>
int main(){

  float *a = (float*) malloc(10*sizeof(float));

  a[7] += 1.3;

  if (a[7] < 0){
    printf("a[7] < 0\n");
  }else{
    printf("a[7]  >= 0\n");
  }
  free(a);

  return 0;
}
