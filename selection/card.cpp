#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> a(N);
	for (int i=0; i<N; i++) {
		cin >> a.at(i);
	}

	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());

	int alice = 0;
	for (int i=0; i<N; i += 2) {
		alice += a.at(i);
	}

	int bob = 0;
	for (int i=1; i<N; i += 2) {
		bob += a.at(i);
	}

	cout << alice - bob << endl;

}
