#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	long long N, Q;
	cin >> N >> Q;

	vector<long long> A(N);
	for (long long i=0; i<N; i++){
		long long a;
		cin >> A.at(i);
	}

	sort(A.begin(), A.end());

	for (long long i=0; i<Q; i++) {
		long long x;
		cin >> x;
		long long wa = 0;
		long long ac = N-1;
		if (x <= A.at(wa)) {
			cout << N << endl;
		}
		else if (A.at(ac) < x) {
			cout << 0 << endl;
		}
		else {
			while(ac - wa > 1) {
				long long j= (ac+wa) /2;
				if (A.at(j) < x) {
					wa = j;
				}
				else {
					ac = j;
				}
			}
			cout << N -  ac << endl;
		}
	}
	return 0;
}

