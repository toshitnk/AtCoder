#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> conti(N);
	for (int i=0; i<N-1; i++) {
		int a, b;
		cin >> a >> b;
		--a;
		--b;
		conti.at(a)++;
		conti.at(b)++;
	}
	
	bool ans;
	for (int i=0; i<N; i++) {
		if (conti.at(i) == N-1) {
			ans = true;
			break;
		}
		else {
			ans = false;
		}
	}
	if (ans == true) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}
