#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int N;
	cin >> N;

	int sum = 0;
	int x;

	rep(i, N) {
		cin >> x;
		sum += x;
	}
	cout << sum << endl;
}
