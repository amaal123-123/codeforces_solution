#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main()
{
      cout<<fixed<<setprecision(9);
 
 double r;
 
 if(!(cin>>r)){
    return 1;
 }
  const double pi=3.141592653;
  //cin>>r;
  double a=pi*r*r;
 
    cout <<a;
 
 
 
    return 0;
}
