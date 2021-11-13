#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> S(N);
	for (int i=0; i<N; i++) {
		cin >> S.at(i);
	}

	int count = 0;
	for (int i=0; i<N; i++) {
		bool op = false;
		for (int a=1; a<333; a++) {
			for (int b=1; b<333; b++) {
				if (S.at(i) == 4*a*b + 3*a + 3*b) {
					op = true;
					break;
				}
				if (op == true) {
					break;
				}
			}
		}
		if (op == false) {
			count++;
		}
	}
	
	cout << count << endl;

	return 0;
}
