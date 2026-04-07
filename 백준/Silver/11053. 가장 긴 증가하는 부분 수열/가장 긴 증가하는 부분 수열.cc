#include <iostream>
using namespace std;
int n, arr[1001], dp[1001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		dp[i] = 1;
	}
	
	int max_dp = -1;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < i; j++) {
			if(arr[j] < arr[i] && dp[j] + 1 > dp[i]) dp[i] = dp[j] + 1;
		}
		if(max_dp < dp[i]) max_dp = dp[i];
	}
	
	cout << max_dp;
	
	return 0;
}