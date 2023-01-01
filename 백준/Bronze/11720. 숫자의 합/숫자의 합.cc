#include <iostream>
using namespace std;

int main() {
	//1. 숫자의 개수를 받는 변수
	int n;
	cin >> n;

	//2. 입력으로 주어진 공백없이 주어진 숫자
	char array[100] = { '0' };
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}

	//3. 입력으로 주어진 숫자 N개의 합.
	//char형이니까 아스키코드 48을 빼준다.
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += array[i] - 48;
	}

	cout << sum;

	return 0;
}