#include<iostream>
using namespace std;
int main(){

 float N ;
 cin>>N;

 if(N >0.0000){

     cout << "Fora de intervalo\n";

 }


 else if(N >=0.0000 && N<=25.0000){

        cout << "Intervalo [0,25]\n";
 }
 else if(N >25.0000 && N<=50.0000){

     cout << "Intervalo (25,50]\n";
 }
  else if(N >50.0000 && N<=75.0000){

    cout << "Intervalo (50,75]\n";
 }
 else if(N >75.0000 && N<=100.0000){

         cout << "Intervalo (75,100]\n";
 }

 else if( N > 100.0000)
         cout << "Fora de intervalo\n";



return 0;
}
