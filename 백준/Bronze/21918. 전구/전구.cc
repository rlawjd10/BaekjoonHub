#include <iostream>
#include <vector>
using namespace std;

//1. 전구의 개수와 명령어의 개수 입력받기
//2. 전구의 개수만큼 반복문 돌려서 전구 상태 입력받기 -> 배열이나 vector 쓰면 될 듯 -> 배열 크기가 변수라서 vector사용
//3. 명령어의 개수 만큼 for문
//4. 3번 반복문에서 각각의 명령어를 switch문 또는 if문으로 받기 -> switch문이 편할 듯
//4-2. 4번을 함수로 짜도 괜찮을 듯. 인자는 3개를 받고.
//5. 후에 전구 상태 출력하기

int main() {
	//1. 개수 입력받기
	int bulb, command;
	cin >> bulb >> command;

	//2. 전구 상태 입력받기
	vector<int> arr(bulb);
	for (int i = 0; i < arr.size(); i++) {
		cin >> arr[i];
	}

	//3, 4 command(명령어)수 만큼 명령어 입력받고 받고 명령어대로 수행하기
	for (int i = 0; i < command; i++) {
		int num, l, r;
		cin >> num >> l >> r;

		if (num == 1) {
			arr[l - 1] = r;
		}
		else if (num == 2) {
			for (int i = l; i <= r; i++) {
				if (arr[i - 1] == 1)
					arr[i - 1] = 0;
				else
					arr[i - 1] = 1;
			}
		}
		else if (num == 3) {
			for (int i = l; i <= r; i++) {
				arr[i - 1] = 0;
			}
		}
		else if (num == 4) {
			for (int i = l; i <= r; i++) {
				arr[i - 1] = 1;
			}
		}
	}
	
	//5. 변경 후에 전구 상태 출력하기
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}

	return 0;
}