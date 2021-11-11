#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> A(N);
	map<int, int> M;
	for (int i=0; i<N; i++) {
		int a;
		cin >> a;
		A.at(i) = a;
		if (M.count(a)) {
			M.at(a)++;
		}
		else {
			M[a] = 1;
		}
	}
	int ans = A.at(0);
	for (int i=1; i<N; i++) {
		if (M.at(ans)<M.at(A.at(i))) {
			ans = A.at(i);
		}
	}
	cout << ans << " " << M.at(ans) << endl;
}
