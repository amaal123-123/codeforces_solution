 #include <iostream>
using namespace std;
 
int main() {
    int N;
    cin >> N;
 
    int e = 0, o = 0, p = 0, ne= 0;
 
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
 
        if (x % 2 == 0)
            e++;
        else
            o++;
 
        if (x > 0)
            p++;
        else if (x < 0)
            ne++;
    }
 
    cout << "Even: " << e << "\n";
    cout << "Odd: " << o << "\n";
    cout << "Positive: " << p<< "\n";
    cout << "Negative: " << ne << "\n";
 
    return 0;
}
