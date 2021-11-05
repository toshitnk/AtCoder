#include <iostream>
#include <vector>

using namespace std;

int count(vector<vector<int>> &child, int x) {
	if (child.at(x).size() == 0) {
		return 1;
	}
	
	int num = 0;
	for (int i : child.at(x)) {
		num += count(child, i);
	}
	return num + 1;
}

int main() {
	int N;
	cin >> N;

	vector<int> p(N);
	p.at(0) = -1;
	for (int i=1; i<N; i++) {
		cin >> p.at(i);
	}

	vector<vector<int>> child(N);
	for (int i=1; i<N; i++) {
		child.at(p.at(i)).push_back(i);
	}

	for (int i=0; i<N; i++) {
		cout << count(child, i) << endl;
	}
}
