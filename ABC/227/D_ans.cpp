#include <iostream>
#include <vector>
#include <algorithm>

using ll = long long;
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	
	vector<ll> a(N);
	for (int i=0; i<N; i++) {
		cin >> a.at(i);
	}

	ll ac = 0;
	ll wa = 3e17;
	while (wa - ac > 1) {
		ll wj = (ac + wa) / 2;
		ll s = 0;

		for (int i=0; i<N; i++) {
			s += min(a.at(i), wj);
		}
		if (s >= K * wj) {
			ac = wj;
		}
		else {
			wa = wj;
		}
	}
	cout << ac << endl;
	return 0;
}
