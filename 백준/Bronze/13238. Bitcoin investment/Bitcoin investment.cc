#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, ic = -1;
	int arr[10000];
	cin >> N;
	
	for(int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	
	for(int i = 0; i < N; i++) {
		int Nmax[2] = {arr[i], i};
		int Nmin[2] = {arr[i], i};
		
		for(int j = i + 1; j < N; j++) {
			if(arr[j] > Nmax[0]) {
				Nmax[0] = arr[j];
				Nmax[1] = j;
			}
			if(arr[j] < Nmin[0] && j < Nmin[1]) {
				Nmin[0] = arr[j];
				Nmin[1] = j;
			}
		}
		
		if(ic < Nmax[0] - Nmin[0]) ic = Nmax[0] - Nmin[0];
	}
	
	cout << ic;
	
	return 0;
}