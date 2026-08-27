#include <iostream>
using namespace std;
 
int main() {
 
     const int cp=1999;
     int p;
     while (cin>>p){
 
        if (p==cp){
            cout <<"Correct\n";
            break;
 
        }
        cout <<"Wrong\n";
     }
 
 
    return 0;
}
