#include <stdio.h>

int main() {

  int A,B,C;
  scanf("%d%d%d",&A,&B,&C);
  if ( (A>B && A>C) && (A != B && A != C && B != C)){

    printf("Yes");


  }

  else {
          printf("No");
  }



}