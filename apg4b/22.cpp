#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<pair<int, int>> p;
	for (int i=0; i<N; i++) {
		int a, b;
		cin >> a >> b;
		p.push_back(make_pair(b, a));
	}
	sort(p.begin(), p.end());

	for (int i=0; i<N; i++) {
		cout << p.at(i).second << " " << p.at(i).first << endl;
	}
}
