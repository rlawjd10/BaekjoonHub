#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	//입력받는 정수
	int n;
	cin >> n;
	vector<int> dp(n + 1);

	//bottom - up
	//1은 0번
	dp[1] = 0;
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + 1;
		//3으로 나눠짐
		if (!(i % 3))
			dp[i] = min(dp[i], dp[i / 3] + 1);
		//2로 나눠짐
		if (!(i % 2)) 
			dp[i] = min(dp[i], dp[i / 2] + 1);
	}

	cout << dp[n] << endl;
	
	return 0;
}