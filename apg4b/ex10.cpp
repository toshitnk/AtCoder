#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int an, bn;
	cin >> an >> bn;

	cout << "A:";
	rep(i, an) {
		cout << "]";
	}
	cout << endl;

	cout << "B:";
	rep(i, bn) {
		cout << "]";
	}
	cout << endl;
}
