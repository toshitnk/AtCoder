#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
	int N, X;
	cin >> N >> X;
	X--;
	vector<int> A(N);
	for (int i=0; i<N; i++) {
		cin >> A.at(i);
		A.at(i)--;
	}
	int cnt = 1;
	set<int> known;
	known.insert(X);
	for (int i=0; i<N; i++) {
		if (known.count(A.at(X))) {
			continue;
		}
		else {
			known.insert(A.at(X));
			cnt++;
			X = A.at(X);
		}
	}
	cout << cnt << endl;
	return 0;
}

