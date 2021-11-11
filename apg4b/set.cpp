#include <iostream>
#include <set>

using namespace std;

int main() {
	set<int> S;

	S.insert(3);
	S.insert(7);
	S.insert(8);
	S.insert(10);

	cout << "size: " << S.size() << endl;

	if (S.count(7)) {
		cout << "found 7" << endl;
	}

	if ( S.count(5) ) {
	
		cout << "found %" << endl;
	}
}
