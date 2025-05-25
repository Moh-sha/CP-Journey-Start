#include <stdio.h>

int main() {

    int a;
    int b ;
    scanf("%d%d",&a,&b);

    int d = a/b;

    int r = a%b ;
    double f =(double)a/(double)b;
    printf("%d %d %.10lf",d,r,f);

    return 0;

}