#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;

	int N = S.size();
	int ans = 1;

	for (int i = 1; i < N; i = i + 2) {
		if (S.at(i) == '+') {
			ans++;
		}
		else if (S.at(i) == '-') {
			ans--;
		}
	}
	cout << ans << endl;
}
