#include <stdio.h>
int main(){
  #ifdef _OPENMP
  #pragma omp parallel
    printf("OpenMP %d is supported!\n", _OPENMP);
  #endif
}
