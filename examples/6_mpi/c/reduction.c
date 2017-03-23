#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int i,rank;

  MPI_Init(&argc,&argv); /* MPI error checking omitted for brevity */

  MPI_Comm_rank(MPI_COMM_WORLD,&rank);

  int *a = (int*) malloc(10*sizeof(int));
  int *b = (int*) malloc(10*sizeof(int));

  for (i=0; i<9; ++i) a[i] = i;

  if (!rank) {
    printf("a: ");
    for(i=0; i<10; ++i) printf("%d ",a[i]);
    printf("\n");
  }

  MPI_Allreduce(a,b,10,MPI_INT,MPI_SUM,MPI_COMM_WORLD);

  if (!rank) {
    printf("b: ");
    for(i=0; i<10; ++i) printf("%d ",b[i]);
    printf("\n");
  }
  

  free(a);

  MPI_Finalize();
  return 0;
}
