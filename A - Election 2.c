#include <stdio.h>

int main() {

    int N,A,T;
    scanf("%d%d%d",&N,&T,&A);
   int  B =N-(A+T);

   if (T+B > A || B+A < T) {

         printf("Yes\n");

   }
    else {
      printf("No\n");
    }
 return 0;

}