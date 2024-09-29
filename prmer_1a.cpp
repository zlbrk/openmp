#include <stdio.h>
int main(){
  #ifdef _OPENMP
    printf("OpenMP %d is supported!\n", _OPENMP);
  #endif
}
