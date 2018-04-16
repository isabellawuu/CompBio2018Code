#include <stdio.h>

int main(void){
  FILE *fp;
  fp=fopen("hello.dat", "w");

  fprintf(fp, "hello, world!");

  fclose(fp);
  return 0;
}
