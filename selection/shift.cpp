#include <iostream>
#include <vector>

int main() {
	int N;
	std::cin >> N;

	std::vector<int> A(N);
	for (int i=0; i<N; i++) {
		std::cin >> A.at(i);
	}
	
	int num = 0;
	bool replace = true;
	while (replace == true) {
		for (int i=0; i<N; i++) {
			if (A.at(i) % 2 == 1) {
				replace = false;
				break;
			}
		}
		if (replace == true) {
			for (int i=0; i<N; i++) {
				A.at(i) = A.at(i) / 2;
			}
			num++;
		}
	}
	std::cout << num << std::endl;
	return 0;

}
