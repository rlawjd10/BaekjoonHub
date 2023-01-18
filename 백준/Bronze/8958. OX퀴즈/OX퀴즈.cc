#include <iostream>
#include <string>
using namespace std;

int main() {
	//테스트 케이스의 개수
	int n;
	cin >> n;
	
	char ox[2] = { 'O', 'X' };

	//테스트 케이스의 개수만큼 for문
	for (int i = 0; i < n; i++) {
		int count = 0;	//전체 
		int add = 0;	//더해지는 수, reset될 수도 있는 수
		string result;
		cin >> result;
		//각각의 case -> count 출력하기
		for (int j = 0; j < result.size(); j++) {
			char c = result[j];
			if (c == ox[0])
				add++;
			else if (c == ox[1])
				add = 0;
			count += add;
		}
		cout << count << endl;
		
	}

	return 0;
}