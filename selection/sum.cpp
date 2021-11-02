#include <iostream>

using namespace std;

int pow10(int i) {
	int num = 1;
	for (int j=1; j<=i; j++) {
		num *= 10;
	}
	return num;
}

int main() {
	int N, A, B;
	cin >> N >> A >> B;

	int ans = 0;
	
	for (int n=0; n<=N; n++) {
		int n0, n1, n2, n3, n4;
		n4 = n / 10000;
		n3 = (n-10000*n4) / 1000;
		n2 = (n-n4*10000-n3*1000) /100;
		n1 = (n-n4*10000-n3*1000-n2*100) / 10;
		n0 = n-n4*10000-n3*1000-n2*100-n1*10;

		if (A <= n0+n1+n2+n3+n4 && n0+n1+n2+n3+n4 <= B) {
			ans += n;
		}
	}
	cout << ans << endl;
	return 0;
}
