#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	//1일때
	if (n == 1)
		cout << "*";
	else
	{
		//맨 아래 줄 빼고
		for (int i = 1; i < n; i++) {
			//공백출력
			for (int j = n - i; j > 0; j--) {
				cout << " ";
			}
			cout << "*";

			if (i >= 2) {
				//두 번째 공백출력
				for (int j = 1; j < 2 * i - 2; j++) {
					cout << " ";
				}
				cout << "*";
			}
			cout << "\n";
		}
		//맨 아래 줄
		for (int i = 1; i <= n * 2 - 1; i++) {
			cout << "*";
		}
	}

	
	return 0;
}