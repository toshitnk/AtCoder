#include <iostream>
#include <string>

using namespace std;

struct NumString {
	int length;
	string s;

	NumString(int num) {
		s = to_string(num);
		length = s.size();
	}
};

int main() {
	NumString num(12345);
	cout << num.s << endl;
	cout << num.length << endl;
}
