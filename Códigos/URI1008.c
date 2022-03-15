#include <stdio.h>
 
int main() {
 
  int numfun, numhr;
  float valorhr, x;

  scanf("%d %d %f",&numfun,&numhr,&valorhr);
   
  x= (numhr * valorhr);

  printf("NUMBER = %d\n",numfun);
  printf("SALARY = U$ %.2f\n", x);

  return 0;
}