#include <iostream>
#include <string>

using namespace std;

struct Clock {
	int hour;
	int minute;
	int second;

	void set(int h, int m, int s) {
		hour = h;
		minute = m;
		second = s;
	}
	
	string to_str() {
		string H = to_string(hour);
		string M = to_string(minute);
		string S = to_string(second);
		return H + ":" + M + ":" + S;
	}

	void shift(int diff_second) {
		int h = diff_second / 3600;
		int m = (diff_second % 3600) / 60;
		int s = (diff_second % 3600) % 60;
		if (diff_second < 0) {
			
		}
	}

};

int main() {
	int hour, minute, second;
	cin >> hour >> minute >> second;
	int diff_second;
	cin >> diff_second;

	Clock clock;

	Clock.set(hour, minute, second);

	cout << clock.to_str() << endl;

	clock.shift(diff_second);

	cout << clock.to_str() << endl;
}
