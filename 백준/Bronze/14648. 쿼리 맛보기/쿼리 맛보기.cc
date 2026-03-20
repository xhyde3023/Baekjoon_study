#include <iostream>
using namespace std;
int arr[1001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, q;
	cin >> n >> q;
	
	for(int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	
	for(int i = 0; i < q; i++) {
		int num, a, b, c, d;
		long long sum1 = 0, sum2 = 0;
		cin >> num >> a >> b;
		
		for(int j = a; j <= b; j++) sum1 += arr[j];
			
		if(num == 2) {
			cin >> c >> d;
			
			for(int j = c; j <= d; j++) sum2 += arr[j];
			cout << sum1 - sum2 << "\n";
		}
		else {
			cout << sum1 << "\n";
			
			int t = arr[a];
			arr[a] = arr[b];
			arr[b] = t;
		}
	}
	
	return 0;
}
