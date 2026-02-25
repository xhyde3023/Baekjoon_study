#include <iostream>
#include <algorithm>
using namespace std;
string l1, l2, ans = "";
void f(int i, int up);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	while(n--) {
		int check = 0;
		ans = "";
		cin >> l1 >> l2;
		
		reverse(l1.begin(), l1.end());
		reverse(l2.begin(), l2.end());
		
		f(0, 0);
		
		if(ans.length() == 1) check = 1;
		for(int i = ans.length() - 1; i >= 0 ; i--) {	
			if(check == 0 && i != 0 && ans[i] == '0')
				continue;
			else if(ans[i] == '1') check = 1;
			cout << ans[i];
		}
		cout << "\n";
	}
	
	
	return 0;
}

void f(int i, int up) {
	
	int len1 = l1.length();
	int len2 = l2.length();
	
	if(len1 <= i && len2 <= i && !up) return;
	
	int a1 = len1 > i ? l1[i] - '0' : 0;
	int a2 = len2 > i ? l2[i] - '0' : 0;
	
	int sum = up + a1 + a2;
	if(sum == 0) {
		up = 0;
		ans += '0';
	}
	else if(sum == 1) {
		up = 0;
		ans += '1';
	} 
	else if(sum == 2) {
		up = 1;
		ans += '0';
	}
	else {
		up = 1;
		ans += '1';
	}
	
	f(i+1, up);
}
