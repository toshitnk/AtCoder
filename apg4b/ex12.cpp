#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;
	
	int num;
	num = 1;
	for (int i = 1; i < S.size(); i += 2) {
		if (S.at(i) == '+') {
			num++;
		}
		else if (S.at(i) == '-') {
			num--;
		}
	}
	cout << num << endl;
}
