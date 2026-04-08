#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	char q[4][4];
	int sum = 0;
	
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			cin >> q[i][j];
		}
	}
	
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			
			if (q[i][j] != '.') {
				int k = q[i][j] - 65;
				int ii = k / 4;
				int jj = k % 4;
				sum += abs(i - ii) + abs(j - jj);
			}
			
		}
	}
	
	cout << sum;
	
	return 0;
}
