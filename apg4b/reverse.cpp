#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> vec = {1, 2, 5, 3};
	reverse(vec.begin(), vec.end());

	for (int i = 0; i < vec.size(); i++) {
		cout << vec.at(i) << endl;
	}
}
