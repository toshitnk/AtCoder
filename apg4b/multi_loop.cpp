#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> A(3), B(3);

	for (int i = 0; i < 3; i++) {
		cin >> A.at(i);
	}

	for (int i = 0; i < 3; i++) {
		cin >> B.at(i);
	}

	bool ans = false;

	for (int i : A) {
		for (int j : B) {
			if (i == j) {
				ans = true;
			}
		}
	}

	if (ans == true) {
		cout << "YES" <<endl;
	}
	else {
		cout << "NO" << endl;
	}
}
