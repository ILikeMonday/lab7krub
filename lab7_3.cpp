#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int adiff(int X,int Y){
int Z;
Z = X - Y;
Z = abs(Z);
Z = Z%360;
if(Z > 180){
    Z = 360-Z;
}
return Z;
}
int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}