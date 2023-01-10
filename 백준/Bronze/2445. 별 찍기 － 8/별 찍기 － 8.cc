#include <iostream>
using namespace std;

int main() {
	//1. 입력받기
	int n;
	cin >> n;

	//2. 별 출력
	//전체 줄 개수
	for (int i = 1; i <= n; i++) {
		//첫 번째
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		for (int j = 2 * n - i * 2; j > 0; j--) {
			cout << " ";
		}
		for (int j = 0; j < i; j++)
			cout << "*";
		cout << "\n";
	}
	//2
	for (int i = 1; i < n; i++) {
		for (int j = n - i; j > 0; j--) {
			cout << "*";
		}
		for (int j = 0; j < i * 2; j++) {
			cout << " ";
		}
		for (int j = n - i; j > 0; j--) {
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}