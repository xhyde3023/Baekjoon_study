#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m, arr[101][101] = {};
	cin >> n >> m;
	
	for(int k = 0; k < n; k++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		
		for(int i = 1; i <= 100; i++) {
			for(int j = 1; j <= 100; j++) {
				if(y1 <= i && i <= y2 && x1 <= j && j <= x2)
					arr[i][j]++;
			}
		}
	}
	
	int sum = 0;
	
	for(int i = 1; i <= 100; i++) {
		for(int j = 0; j <= 100; j++) {
			if(arr[i][j] > m) sum ++;
				arr[i][j]++;
		}
	}
		
	cout << sum;
	
	return 0;
}
