#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int x = 2; x <= N; x++) {
        bool prime = true;

        for (int i = 2; i < x; i++) {
            if (x % i == 0) {
                prime = false;
                break;
            }
        }

        if (prime) {
            cout << x << " ";
        }
    }

    return 0;
}
