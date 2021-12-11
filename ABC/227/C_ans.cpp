#include <iostream>

using namespace std;

int main() {
	long long N;
	cin >> N;

	long long ans = 0;
	for (long long A=1; A* A * A <= N; A++) {
		for (long long B=A; A * B * B <= N; B++) {
			long long num = N / (A*B);
			ans += num - B + 1;
		}
	}
	cout << ans << endl;
}
