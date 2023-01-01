#include <iostream>
using namespace std;

int main() {
	//1. 테스트 케이스의 개수 입력받기
	int t;
	cin >> t;
	int a, b;
	char com;
	for (int i = 0; i < t; i++) {
		cin >> a >> com >> b;
		cout << a + b << endl;
	}
}