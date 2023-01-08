#include <iostream>
using namespace std;

int main() {
	//1. 입력받기
	int n;
	cin >> n;

	//2. 별 출력
	//전체 줄 개수
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