#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, A;
	cin >> N;
	cin >> A;

	for (int i = 0; i < N; i++) {
		string op;
		int B;
		cin >> op >> B;

		if (op == "+") {
			A += B;
			cout << i << ":" << A << endl;
		}
		else if (op == "-") {
			A -= B;
			cout << i << ":" << A << endl;
		}
		else if (op == "*") {
			A *= B;
			cout << i << ":" << A << endl;
		}
		else if (op == "/") {
			A /= B;
			cout << i << ":" << A << endl;
		}
	}
}