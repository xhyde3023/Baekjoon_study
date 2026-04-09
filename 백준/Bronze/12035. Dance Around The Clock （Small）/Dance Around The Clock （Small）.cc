#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t, cc = 1;
	cin >> t;
	
	while(cc <= t) {
		int arr[10];
		int d, k, n;
		cin >> d >> k >> n;
		
		n = n % d;
		
		for(int i = 1; i <= d; i++) {
			int id = i - 1;
			
			if(i % 2 == 0) {
				id -= n;
				if(id < 0) id += d;
				arr[i] = id;
			}
			else {
				id += n;
				if(id >= d) id -= d;
				arr[i] = id;
			}
		}
		
		int finding_seat1 = arr[k] < d - 1 ? arr[k] + 1 : arr[k] + 1 - d;
		int finding_seat2 = arr[k] > 0	   ? arr[k] - 1 : arr[k] - 1 + d;
		int seat1, seat2;
		
		for(int i = 1; i <= d; i++) {
			if(arr[i] == finding_seat1) {
				seat1 = i;
			}
			else if(arr[i] == finding_seat2) {
				seat2 = i;
			}
		}
		
		cout << "Case #" << cc << ": " << seat1 << " " << seat2 << "\n";
		cc++;
	}
	
	return 0;
}
