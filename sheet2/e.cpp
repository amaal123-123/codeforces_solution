#include <iostream>
using namespace std;
 
int main() {
 
    int n;
    cin>>n;
    int mv;
    cin>>mv;
    for (int i=1;i<n;i++){
        int x;
        cin>>x;
        if (x>mv)mv=x;
 
 
    }
cout<<mv<<endl;
 
    return 0;
}
