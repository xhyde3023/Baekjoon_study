#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int sum, m;
	cin >> sum >> m;
	
	for(int i = 0; i < m; i++) {
		int t;
		cin >> t;
		sum -= t;
	}
	if(sum <= 0) cout << "Padaeng_i Happy";
	else	   cout << "Padaeng_i Cry";
	
	return 0;
}