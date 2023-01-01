#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	while (true)
	{
		cout << a + b << "\n";
		cin >> a >> b;

		if (a == 0 && b == 0)
			break;
	}
	return 0;
}