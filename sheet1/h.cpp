#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main()
{
long long a;
long long s;
 
cin>>a>>s;
double r=(double)a/s;
 cout<<"floor "<<a<<" / "<<s<<" = "<<floor(r)<<endl;
 cout<<"ceil "<<a<<" / "<<s<<" = "<<ceil(r)<<endl ;
 cout<<"round "<<a<<" / "<<s<<" = "<<round(r)<<endl;
 
    return 0;
}
