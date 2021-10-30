#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (0 < N % 1110 && N % 1110 < 9) {
        cout << "Yes" << endl;
        cout << "a" << endl;
        cout << N % 1110 << endl;
    }

    else if ( (N % 1000) % 111 == 0) {
        cout << "Yes" << endl;
        cout << "b" << endl;
        cout << (N % 1000) % 111 << endl;
    }

    else {
        cout << "No" << endl;
    }
}