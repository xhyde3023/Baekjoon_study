#include <iostream>
using namespace std;
int arr[1000001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m;
	long long low = 0, high = 0, big = 0, mid;
	cin >> n >> m;
	
	for(int i = 0; i < n; i++) {
		int t;
		cin >> t;
		arr[i] = t;
		if(high < arr[i]) high = arr[i];
	}
	
	while(high >= low) {
		long long sum = 0;
		mid = (high + low) / 2;
		
		for(int i = 0; i < n; i++) {
			if(arr[i] > mid)
				sum += arr[i] - mid;
		}
		
		if(sum >= m) {
			if(big < mid) big = mid;
			low = mid + 1;
		}
		else high = mid - 1;
	}
	cout << big;
	
	return 0;
}