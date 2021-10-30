#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0;i < (int)(n); i++) 

int main() {
	int N, A;
	cin >> N >> A;

	rep(i, N) {
		string op;
		int Bi;
		cin >> op >> Bi;

		if (op=="+") {
			A += Bi;
		}
		else if (op=="-") {
			A -= Bi;
		}
		else if (op=="*") {
			A *= Bi;
		}
		else if (op=="/") {
			A /= Bi;
		}
	}

	cout << A << endl;
}
