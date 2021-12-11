#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> S(N);
	for (int i=0; i<N; i++) {
		cin >> S.at(i);
	}

	set<int> correct;
	for (int a=1; a<150; a++) {
		for (int b=1; b<150; b++) {
			correct.insert(3*a + 4*a*b + 3*b);
		}
	}

	int cnt = 0;
	for (int i=0; i<N; i++) {
		if (correct.count(S.at(i))) {
			continue;
		}
		else {
			cnt++;
		}
	}
	cout << cnt << endl;
}
