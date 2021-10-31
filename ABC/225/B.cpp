#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> A(N-1), B(N-1);
	for (int i=0; i<N-1; i++) {
		int a, b;
		cin >> a >> b;
		A.at(i) = a;
		B.at(i) = b;
	}
	
	vector<int> conti(N);
	for (int i=0; i<N; i++) {
		int count = 0;
		for (int j=0; j<N-1; j++) {
			if (i == A.at(j) || i == B.at(j)) {
				count++;
			}
		}
		conti.at(i) = count;
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

