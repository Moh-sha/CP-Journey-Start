#include<iostream>

using namespace std;

int main(){

 int N;

 cin>>N;

 int Y = N/365;



 int R = N % 365;


 int M = R /30;

 R = R % 30;


 int D = R/1;

 cout<<Y<<" ano(s)"<<endl;

 cout<<M<<" mes(es)"<<endl;

 cout<<D<<" dia(s)"<<endl;

 return 0;



}
