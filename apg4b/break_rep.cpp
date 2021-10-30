#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	rep(i, 5) {
		if (i == 3) {
			cout << "break" << endl;
			break;
		}
		
		cout << i << endl;
	}

	cout << "quit" << endl;
}
