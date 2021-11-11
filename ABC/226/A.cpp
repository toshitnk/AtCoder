#include <iostream>

using namespace std;

int main() {
	float X;
	cin >> X;
	int Xi = int(X);
	if (X < float(Xi) + 0.5) {
		cout << Xi << endl;
		return 0;
	}
	else {
		cout << Xi + 1 << endl;
		return 0;
	}
}
