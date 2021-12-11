#include <iostream>
#include <string>

using namespace std;

int main() {
	string S;
	cin >>S;

	bool ans = false;
	string T = "oxxoxxoxxoxxoxxoxxoxx";
	for (int i = 0; i<6; i++) {
		if (S == T.substr(i, S.size())) {
			ans = true;
		}
	}
	if (ans == true) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	return 0;
}

