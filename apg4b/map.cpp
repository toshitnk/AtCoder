#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	map<string, int> score;
	score["Alice"] = 100;
	score["Bob"] = 89;
	score["Charlie"] = 95;

	if (score.count("Alice")) {
		cout << "Alice: " << score.at("Alice") << endl;
	}

	if (score.count("Jiro")) {
		cout << "Jiro: " << score.at("Jiro") << endl;
	}
}
