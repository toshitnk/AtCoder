#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int complete_time(vector<vector<int>> &children, int x) {
	if (children.at(x).size() == 0) {
		return 0;
	}
	
	int max_time = 0;
	for (int c : children.at(x)) {
		int time = complete_time(children, c) + 1;
		max_time = max(time, max_time);
	}
	return max_time;
}

int main() {
	int N;
	cin >> N;

	vector<int> p(N);
	p.at(0) = -1;
	for (int i=1; i<N; i++) {
		cin >> p.at(i);
	}
	
	vector<vector<int>> children(N);
	for (int i=1; i<N; i++) {
		int parent = p.at(i);
		children.at(parent).push_back(i);
	}

	cout << complete_time(children, 0) << endl;
}
