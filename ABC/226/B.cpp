#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<vector<int>> A;
	vector<int> len;

	for (int i=0; i<N; i++) {
		int L;
		cin >> L;
		len.push_back(L);
		vector<int> a(len.at(i));
		for (int j=0; j<len.at(i); j++) {
			cin >> a.at(j);
		}
		A.push_back(a);
	}
	
	int count = 0;
	for (int i=1; i<N; i++) {
		for (int j=0; j<i; j++) {
			if (len.at(i) != len.at(j)) {
				break;
			}
			else {
				bool equiv = true;
				for (int k=0; k<len.at(i); k++) {
					if (A.at(i).at(k) != A.at(j).at(k)) {
						equiv = false;
					}
				}
				if (equiv == true) {
					count++;
				}
			}
		}
	}
	cout << N-count << endl;
}
