#include <iostream>
using namespace std;
 
int main() {
    int N;
    cin >> N;
 
    bool Even = false;
 
    for (int i = 2; i <= N; i += 2) {
        cout << i << "\n";
        Even = true;
    }
 
    if (!Even)
        cout <<-1 << "\n";
 
    return 0;}
