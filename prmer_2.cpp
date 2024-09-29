#include <stdio.h>
#include <omp.h>
int main(int argc, char *argv[]){
  double start_time, end_time, est_time, tick;
  int res = 1;
  tick = omp_get_wtick();
  start_time = omp_get_wtime();
  #pragma omp for
  {for (int i = 1; i <= 10; i++)
      res *= i;
    printf("Factorial of ten: %d\n", res);}
  end_time = omp_get_wtime();
  est_time = end_time - start_time;
  printf("Computation complete in: %lf\n", est_time);
  printf("Timer precision is: %lf\n", tick);

  start_time = omp_get_wtime();
    tick = omp_get_wtick();
  end_time = omp_get_wtime();
  printf("Tick estimation time is %lf\n", end_time - start_time);

}
