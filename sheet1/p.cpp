#include <iostream>
using namespace std;
int main() {
int a;
if (!(cin>>a)){
 
        return 0 ;
}
 
int f=a/1000;
 
if (f%2==0){
    cout <<"EVEN";
}
else cout <<"ODD";
 return 0;
}
