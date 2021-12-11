#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main() {
	int N;
	cin >> N;

	map<string, int> M;
	for (int i=0; i<N; i++){
		string s;
		cin >> s;
		if (M.count(s)) {
			M[s]++;
		}
		else {
			M[s] = 1;
		}
	}

	int max = 0;
	string ans;
	for (pair<string, int> x : M) {
		if (max < x.second) {
			ans = x.first;
			max = x.second;
		}
	}
	cout << ans << endl;
	return 0;
}

