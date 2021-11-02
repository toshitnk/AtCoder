#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	vector<vector<int>> B(N, vector<int>(M));
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			cin >> B.at(i).at(j);
			B.at(i).at(j)--; // 7で割ったあまりで判定できるようにする．0-6
		}
	}

	int si = B.at(0).at(0) / 7;
	int sj = B.at(0).at(0) % 7;
	
	if (sj + M - 1 > 6) {
		cout << "No" << endl;
		return 0;
	}
	
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			int value = (si + i) * 7 + sj + j;
			if (B.at(i).at(j) != value) {
				cout << "No" << endl;
				return 0;
			}
		}
	}

	cout << "Yes" << endl;
	return 0;
}
