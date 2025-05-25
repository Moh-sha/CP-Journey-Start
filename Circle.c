#include<stdio.h>
#include <math.h>
int main() {

  int r;
  double pie = M_PI ;


  scanf("%d",&r);

  double area = pie * (r*r);


  double c = 2 * pie * r ;


  printf("%.8lf %.8lf",area ,c);

  return 0;







}