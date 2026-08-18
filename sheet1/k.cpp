#include <iostream>
//#include <iomanip>
//#include <cmath>
#include <algorithm>
using namespace std;
 
int main()
{
    int a,s,d;
    cin>>a>>s>>d;
    int maxn=max({a,s,d});
    int minn=min({a,s,d});
    cout <<minn <<" "<<maxn;
 
 
    return 0;
}
