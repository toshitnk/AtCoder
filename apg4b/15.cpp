#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> scores) {
	int s = 0;
	for (int i=0; i<scores.size(); i++) {
		s += scores.at(i);
	}
	return s;
}

void output(int sum_a, int sum_b, int sum_c) {
	int buget = sum_a * sum_b * sum_c;
	cout << buget << endl;
}

vector<int> input(int N) {
	vector<int> vec(N);
	for (int i = 0; i<N; i++) {
		cin >> vec.at(i);
	}
	return vec;
}

int main() {
	int N;
	cin >> N;

	vector<int> A = input(N);
	vector<int> B = input(N);
	vector<int> C = input(N);

	int sum_A = sum(A);
	int sum_B = sum(B);
	int sum_C = sum(C);

	output(sum_A, sum_B, sum_C);
}
