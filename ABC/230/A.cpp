#include <iostream>
#include <string>

using namespace std;

int main() {
	int N;
	cin >> N;

	if (N >= 42) {
		N++;
	}

	string S = to_string(N);
	
	if (S.size() == 2) {
		S = "0" + S;
	}
	else if (S.size() == 1) {
		S = "00" + S;
	}

	cout << "AGC" << S << endl;
	return 0;
}

