#include <iostream>
using namespace std;
int main() {
long long a,s;
char d;
cin>>a>>d>>s;
 
if (d=='+'){
    cout<<a+s;
}
else if (d=='-'){
    cout <<a-s;
}
  else if (d=='*'){
    cout <<a*s;
}
else
    cout <<a/s;
 
 
 return 0;
}
