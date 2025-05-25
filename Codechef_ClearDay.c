/// Created by Shafin on 18/04/2025
#include<stdio.h>

int main(){

    int total_week = 7;
    int X;
    int Y ;
    scanf("%d%d",&X,&Y);

    int clear = total_week - ( X+ Y);
    printf("%d\n",clear);
    return 0;

}