#include <iostream>
#include <string>
using namespace std;

int main() {
	int i = 0;
	while (i < 100) {
		string s;
		getline(cin, s);
		cout << s << endl;
		i++;
	}
}