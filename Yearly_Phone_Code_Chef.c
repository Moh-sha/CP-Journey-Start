#include <stdio.h>

int main () {

 int X ;
 scanf("%d",&X);

 int Last_number = X % 10;

 X = X/10;
 int Second_number = X % 10;
printf("K%d%d",Second_number,Last_number);





}