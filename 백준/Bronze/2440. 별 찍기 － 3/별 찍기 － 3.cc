#include <iostream>
using namespace std;

int main() {
	//1. 입력받기
	int n;
	cin >> n;

	//2. 별 출력
	for (int i = 0; i < n; i++) {
		for (int j = n - i; j > 0; j--) {
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}