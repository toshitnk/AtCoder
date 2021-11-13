#include <iostream>

using namespace std;

int main() {
	int N, K, A;
	cin >> N >> K >> A;

	int num = (K+A-1) % N;
	if (num != 0) {
		cout << num << endl;
	}
	else {
		cout << N << endl;
	}
}
