#include <iostream>
#include <string>

using namespace std;

int main() {
	string S;
	cin >> S;

	string T;
	int count = 0;

	while (count < S.size()) {
		if (S.at(count) == 'e') {
			if (S.substr(count, 6) == "eraser") {
				T += "eraser";
				count += 6;
			}
			else if (S.substr(count, 5) == "erase") {
				T += "erase";
				count += 5;
			}
		}
		else if (S.at(count) == 'd') {
			if (S.substr(count, 7) == "dreamer") {
				T += "dreamer";
				count += 7;
			}
			else if (S.substr(count, 5) == "dream") {
				T += "dream";
				count += 5;
			}
			else {
				cout << "NO1" << endl;
				return 0;
			}
		}
		else {
			cout << "NO2" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;
	return 0;
}
