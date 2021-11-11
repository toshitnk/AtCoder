#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int time(vector<vector<int>> &children, vector<int> time_list, int i) {
	if (children.at(i).size() == 0) {
		return time_list.at(i);
	}

	int t = 0;
	vector<int> m;
	for (int x : children.at(i)) {
		m.push_back(time(children, time_list, x));
	}
	t += min(m);
	return t;
}


int main() {
	int N;
	cin >> N;

	vector<int> time_list(N);
	vector<int> children;
	vector<vector<int>> A(N);

	for (int i=0; i<N; i++) {
		cin >> time_list.at(i);
		int k;
		cin >>k;
		children.push_back(k);
		vector<int> A(k);
		for (int j=0; j<k; j++) {
			cin >> A.at(j);
		}
		children.push_back(A);
	}

	int ans = time(children, time_list, N);
	cout << ans << endl;
}
