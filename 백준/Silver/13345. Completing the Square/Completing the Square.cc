#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int arr[3][2];
	int i, j, k;
	
	for(int a = 0; a < 3; a++) {
		cin >> arr[a][0] >> arr[a][1];
	}
	
	int a12 = pow((arr[0][0] - arr[1][0]), 2) + pow((arr[0][1] - arr[1][1]), 2);
	int a23 = pow((arr[1][0] - arr[2][0]), 2) + pow((arr[1][1] - arr[2][1]), 2);
	int a13 = pow((arr[0][0] - arr[2][0]), 2) + pow((arr[0][1] - arr[2][1]), 2);
	
	if(a12 == a23)		{i = 0; j = 2; k = 1;}
	else if(a12 == a13) {i = 1; j = 2; k = 0;}
	else if(a13 == a23) {i = 0; j = 1; k = 2;}
	
	int x = (arr[i][0] + arr[j][0]) - arr[k][0];
	int y = (arr[i][1] + arr[j][1]) - arr[k][1];
	
	cout << x << " " << y;
	
	return 0;
}
