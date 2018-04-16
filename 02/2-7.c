#include <stdio.h>

int main(void){
  int t;
  double x, r, k;
  r=1; k=3;

  FILE *fp;
  fp=fopen("output.dat", "a");
  fprintf(fp, "%d, %d", 0, x0);

  for(t=0; t<300; t++){
    x=xx
    xx=x+r*(1-x/k)*x;
    fprintf(fp, "%d, %d, t, xx");
  }

  fclose(fp);

  return 0;
}
