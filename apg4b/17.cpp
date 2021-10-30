#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, S;
	cin >> N >> S;

	vector<int> A(N), P(N);
	for (int i = 0; i < N; i++) {
		cin >> A.at(i);
	}
	for (int i = 0; i<N; i ++) {
		cin >> P.at(i);
	}
	
	int num = 0;
	for (int a=0; a<N; a++) {
		for (int p=0; p<N; p++) {
			if (A.at(a) + P.at(p) == S) {
				num++;
			}
		}
	}

	cout << num << endl;
}
