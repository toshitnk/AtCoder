#include <bits/stdc++.h>
using namespace std;

int sum100(vector<int> &a) {
	int result = 0;
	for (int i=0; i<100; i++) {
		result += a.at(i);
	}
	return result;
}	

int main() {
	vector<int> vec(1000, 1);

	for (int i=0; i<500; i++) {
		cout << sum100(vec) << endl;
	}
}
