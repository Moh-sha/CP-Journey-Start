#include<iostream>
#include<math.h>
#include <iomanip>

using namespace std;
int main(){


 double a,b,c;

 cin>>a>>b>>c;


 double b1 = b*b - 4*a*c;

 double R1 = (-b + sqrt(b1))/(2*a);
 double R2 = (-b - sqrt(b1))/(2*a);

 if(a != 0 && b1>0){
     cout<<setprecision(5)<<"R1 = "<<R1<<endl;
     cout<<setprecision(6)<<"R2 = "<<R2<<endl;

 }
 else {

     cout<<"Impossivel calcular"<<endl;
 }


 return 0;

}
