#include <stdio.h>

int main() {

  int x;
  scanf("%d",&x);

  x = x/10 ;
  int Secend_Digit = x - (x/10 * 10 );
  printf("%d",Secend_Digit);


  return 0;




}