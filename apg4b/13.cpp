#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> list(N);
	for (int i = 0; i < N; i++) {
		cin >> list.at(i);
	}

	int avg = 0;
	for (int i = 0; i < N; i++) {
		avg += list.at(i);
	}
	avg /= N;

	for (int i =0; i < N; i++) {
		if (avg <= list.at(i)) {
			cout << list.at(i) - avg << endl;
		}
		else {
			cout << avg - list.at(i) << endl;
		}
	}
}
