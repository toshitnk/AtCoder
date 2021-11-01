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
		}
	}

	for (int i=0; i<N; i++) {
		for (int  j=0; j<M; j++) {
			--B.at(i).at(j);
		}
	}

	int si, sj;
	si = B.at(0).at(0) / 7;
	sj = B.at(0).at(0) % 7;

	bool ans;

	if (sj+M-1 > 6) {
		ans = false;
	}
	else {
		for (int i=0; i<N; i++) {
			for (int j=0; j<M; j++) {
				if (B.at(i).at(j) != B.at(0).at(0)+7*i+j) {
					ans = false;
					break;
				}
				else {
					ans = true;
				}
			}
		}
	}

	if (ans == true) {
		cout << "Yes" <<endl;
	}
	else {
		cout << "No" << endl;
	}
}
