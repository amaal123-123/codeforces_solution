#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main()
{
int a,s;
cin>>a>>s;
if(a%s==0||s%a==0){
    cout<<"Multiples";
}
else {cout<<"No Multiples";
}
    return 0;
}
