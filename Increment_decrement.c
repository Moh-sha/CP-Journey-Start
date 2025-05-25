#include <stdio.h>

int main() {

 int a = 7;
 int b = a++ ;

 printf("a =%d b=%d\n",a,b);

 int c = 8;
 int d = ++c ;

 printf("c = %d d= %d \n",c,d);


 int f = 8 ;
 int g = f -- ;
 printf("f = %d  g=%d \n",f,g);


 int x = 8 ;
 int v = --x ;
 printf("x= %d v=%d",x,v);
 return 0;

}


