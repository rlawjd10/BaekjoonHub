#include <iostream>
using namespace std;

//생성자 처리하는 함수 -> 생성자인 숫자는 셀프 넘버에서 제거
void sum(int n, bool array[]) {
	//두자리수만 생각하는게 아니라 세 자리수일 때도 생각해야 함.
	//각 자릿수를 더할 수 있는 방법을 생각할 것

	int sum = 0; //맨 앞에 뺴고 나머지를 더한 값
	int newN = n; //기존 n값은 보존해야 함.
	while (newN != 0) { 
		sum = sum + newN % 10;
		newN = newN / 10;
	}
	
	n = n + sum;
	if (n < 10000)
		array[n] = 1;
}

//main
int main() {
	//1. 배열을 전부 0으로 초기화한다.
	bool check[10001] = { 0 };

	//2. 1부터 생성자를 처리한다.
	for (int i = 1; i < 10001; i++) {
		sum(i, check);
	}

	//3. 배열은 포인터로 작동하니까. 생성자로 처리된 true값을 제외하고 출력
	for (int i = 1; i < 10000; i++) {
		if (check[i] == 0)
			cout << i << endl;
	}

	return 0;
}