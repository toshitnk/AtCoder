#include <iostream>
#include <string>
#include <vector>

using namespace std;

string concat(string a, string b) {
	return a + b;
}

int main() {
	string a = "Hello";
	string b = "World";
	auto ab = concat(a, b);
	cout << ab << endl;

	vector<int> c = {1, 2, 3};
	auto d = c;

	for (auto elem : d) {
		cout << elem << endl;
	}
}
