#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	K--;
	vector<int> P(N);
	for (int i=0; i<N; i++) {
		int P1, P2, P3;
		cin >> P1 >> P2 >> P3;
		P.at(i) = P1 + P2 + P3;
	}
	vector<int> P4(N);
	for (int i=0; i<N; i++) {
		P4.at(i) = P.at(i) + 100;
	}

	sort(P.begin(), P.end());
	reverse(P.begin(), P.end());

	for (int i=0; i<N; i++) {
		if (P.at(K)<P4.at(i)){
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	return 0;
}

