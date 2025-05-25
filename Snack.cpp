#include<iostream>
#include<iomanip>
using namespace std;
int main(){
 int X,Y;
 float snack;

 cin>>X;
 cin>>Y;


 cout<<setprecision(2);
 float arr[5] ={4.00,4.50,5.00,2.00,1.50};

 snack = arr[X-1] * Y;

 cout<<fixed;
 cout<<setprecision(2)<<"Total: R$ "<<snack<<endl;

 return 0;

}
