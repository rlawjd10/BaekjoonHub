#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		//공백출력
		for (int j = n - i; j > 0; j--) {
			cout << " ";
		}
		//별출력
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = n + 1; i <= 2 * n - 1; i++) {
		int k = i - n;
		//공백출력
		for (int j = 1; j <= k; j++) {
			cout << " ";
		}
		//별출력
		for (int j = n - k; j > 0; j--) {
			cout << "*";
		}
		cout << "\n";
	}
	
	return 0;
}