#include <iostream>
#include <string>
using namespace std;

int main() {
	string S;
	cin >> S;

	char a, b, c;
	a = S.at(0);
	b = S.at(1);
	c = S.at(2);

	if (a == b && b == c) {
		cout << 1 << endl;
	}
	else if (a == b || b == c || c == a) {
		cout << 3 << endl;
	}
	else {
		cout << 6 << endl;
	}
}
