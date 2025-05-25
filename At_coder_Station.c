#include<stdio.h>
int main() {

 int n,x,y,z;

 scanf("%d %d %d %d",&n,&x,&y,&z);
 if ((z >= x && z <= y) || (z <= x && z >= y) ) {
   printf("Yes\n");

 }
    else {
        printf("No\n");
    }


}