#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		//공백 출력
		for (int j = n - i; j > 0; j--)
			cout << " ";
		//별 출력
		for (int j = 1; j <= i; j++) {
			cout << "* ";
		}
		cout << "\n";
	}
	return 0;
}