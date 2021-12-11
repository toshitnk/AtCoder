#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int main() {
	int Q;
	cin >> Q;
	vector<vector<int>> X(Q, vector<int>(2));
	for (int i=0; i<Q; i++) {
		int t, x;
		cin >> t >> x;
		X.at(i).at(0) = t;
		X.at(i).at(1) = x;
	}

	int N = 1048576;
	vector<int> A(N);
	for (int i=0; i<N; i++) {
		A.at(i) = -1;
	}




	for (int i=0; i<Q; i++) {
		if (X.at(i).at(0) == 1) {
			int h = X.at(i).at(1);
			while (A.at(h%N) != -1) {
				h++;
			}
			A.at(h%N) = X.at(i).at(1);
		}
		else if (X.at(i).at(0) == 2) {
			cout << A.at(X.at(i).at(1) % N)  << endl;
		}
	}
	return 0;
}

