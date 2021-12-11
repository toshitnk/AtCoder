#include <iostream>

using namespace std;

int main() {
	int S, X, T;
	cin >> S >>T >> X;
	if (S<T) {
		if (S<= X && X < T) {
			cout << "Yes" << endl;
		}
		else {
			cout <<"No" << endl;
		}
	}
	else if (T<S) {
		if (S <= X || X < T) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	return 0;
}

