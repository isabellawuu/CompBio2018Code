#include<stdio.h>
#include<math.h>

int main(void){
float r, k;
  double x, x0, xx, xa, a;
  double dt;
  int i;
  r=0.1; k=300;
  x0=10;
  x=x0;
  xa=x0;
  a=1.2;
  dt=0.01;

  FILE *fp;
  fp=fopen("3-7.dat", "w");
  fprintf(fp, "%f, %f, %f\n", 0, xa, x);

  for(i=0; i<1000; i++){
    xa=k/(1+((k/x0)-1)*exp(-r*dt*i));
    xx=x+r*(1-x/k)*x;
    x=xx;

    fprintf(fp, "%f, %f, %f\n", dt*i, xa, x);
  }
  fclose(fp);

  return 0;
}
