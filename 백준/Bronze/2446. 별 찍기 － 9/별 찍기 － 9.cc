#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n - 1; i++) {
		//공백
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		//별
		for (int j = 2 * n - 1; j > i * 2; j--) {
			cout << "*";
		}
		cout << "\n";
	}
	
	for (int i = 0; i < n; i++) {
		//공백출력
		for (int j = n - 1 - i; j > 0; j--)
			cout << " ";
		//별 개수 만큼 출력해줘야 함.
		for (int k = 1; k <= 2 * (i + 1) - 1; k++) {
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}