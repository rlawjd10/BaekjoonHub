//백준 1244
#include <iostream>
using namespace std;

//스위치의 개수만큼 상태 입력 - 100이하의 양의 정수이므로
const int MAX_C = 101;
bool condition[MAX_C];

int main() {

	//스위치 개수
	int switches;
	cin >> switches;

	//스위치 상태 입력받기
	for (int i = 1; i <= switches; i++) {
		cin >> condition[i];
	}

	//학생 수 입력받기
	int student;
	cin >> student;

	while (student--) {
		int gender;
		int number;

		cin >> gender >> number;

		switch (gender)
		{
		case 1:
			for (int i = number; i <= switches; i += number)
				condition[i] = !condition[i];
			break;
		case 2:
			//s는 number가 1씩 작아지는 수, e는 number가 1씩 커지는 수
			int s = number, e = number;
			while (s >= 1 && e <= switches) {
				s--, e++;
				if (condition[s] != condition[e])
					break;
			}
			//s랑 e를 증감 먼저 하고 if문을 했으므로 각각 1을 더하고 1을 빼준다.
			for (int i = s + 1; i <= e - 1; i++) {
				condition[i] = !condition[i];
			}
			break;
		}
	}

	//출력하기
	for (int i = 1; i <= switches; i++) {
		cout << (condition[i] ? 1 : 0) << " ";
		if (i % 20 == 0)
			cout << "\n";
	}
	return 0;
}