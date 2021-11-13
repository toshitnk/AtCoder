#include <iostream>

using namespace std;

int main() {
	unsigned long long N;
	cin >> N;
	unsigned long long ans = 0;

	for (unsigned long long C=1; C <= N; C++) {
		for (unsigned long long B=1; B <= C && B <= N/C ; B++) {
			for (unsigned long long A=1; A <= N/(B*C)  && A <= B; A++) {
				if (A*B*C <= N) {
					ans++;
				}
			}
		}
	}
	cout << ans << endl;
	
	return 0;
}
