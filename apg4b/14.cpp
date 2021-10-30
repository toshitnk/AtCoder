#include <bits/stdc++.h>
using namespace std;

int main() {
	int A, B, C;
	cin >> A >> B >> C;

	int big, small, ans;

	big = max(max(A, B), C);
	small = min(min(A, B), C);

	ans = big - small;

	cout << ans << endl;
}
