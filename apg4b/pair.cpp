#include <iostream>
#include <utility>
#include <string>
#include <tuple>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<tuple<int, int, int>> a;
	a.push_back(make_tuple(3, 1, 1));
	a.push_back(make_tuple(1, 2, 100));
	a.push_back(make_tuple(3, 5, 1));
	a.push_back(make_tuple(1, 2, 3));
	
	sort(a.begin(), a.end());

	for (tuple<int, int, int> t : a) {
		int x, y, z;
		tie(x, y, z) = t;
		cout << x << " " << y << " " << z << endl;
	}
}
