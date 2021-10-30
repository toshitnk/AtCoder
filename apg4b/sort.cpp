#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> vec = {1, 4, 3, 5, 1};
	sort(vec.begin(), vec.end());

	for (int i = 0; i < vec.size(); i++) {
		cout << vec.at(i) << endl;
	}
}
