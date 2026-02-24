#include <iostream>
using namespace std;
int arr[200000], num[10];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, cnt = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		int t;
		cin >> t;
		arr[i] = t;
	}
	
	int start = 0, end = 0, type = 0;
	
	while(start < n && end < n) {
		if(num[arr[end]] == 0) type++;
		num[arr[end]]++;
		
		if(type <= 2) {
			int t = end - start + 1;
			if(cnt < t) cnt = t;
			end++;
		}
		
		else {
			num[arr[start]]--;
			if(!num[arr[start]]) type--;
			start++;
			end++;
		}
	}
	
	cout << cnt;
	return 0;
}