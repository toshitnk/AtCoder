#include <bits/stdc++.h>
using namespace std;

int main() {
	int a = 10, b = 5;
	int mi = min(a, b);
	cout << "min" << mi << endl;

	int ma = max(a, b);
	cout << "max" << ma << endl;

	swap(a, b);
	cout << "swap: " << "a:" << a << "  " << "b:" << b <<endl;
}
