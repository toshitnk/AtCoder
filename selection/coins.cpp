#include <iostream>

int main() {
	int A, B, C, X;
	std::cin >> A;
	std::cin >> B;
	std::cin >> C;
	std::cin >> X;

	int ans = 0;
	for (int i=0; i<=A; i++) {
		for (int j=0; j<=B; j++) {
			for (int k=0; k<=C; k++) {
				int Y = 500 * i + 100 * j + 50 * k;
				if (X == Y) {
					ans++;
				}
			}
		}
	}
	std::cout << ans << std::endl;
}
