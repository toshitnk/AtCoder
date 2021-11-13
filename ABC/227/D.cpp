#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, K;
	cin >> N >> K;

	vector<int> A(N);
	for (int i=0; i<N; i++) {
		cin >> A.at(i);
	}

	vector<int> num;
	vector<int> zero(N);
	for (int i=0; i<N; i++) {
		zero.at(i) = 0;
	}
	while (A != zero) {
		
	}
}
