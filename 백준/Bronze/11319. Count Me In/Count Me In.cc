#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	cin.ignore();
	
	string l;
	
	char a[11] = {'A','E','I','O','U','a','e','i','o','u'};
	
	while(n--) {
		int cnt_v = 0, cnt_c = 0;
		getline(cin, l);
		
		for(int i = 0; i < l.length(); i++) {
			int check = 0;
			
			for(int j = 0; j < 10; j++) {
				if(l[i] == a[j]) check = 1;
				if(l[i] == ' ') check = 2;
			}
			
			if(check == 1)		cnt_v++;
			else if(check == 0) cnt_c++;
		}
		cout << cnt_c << " " << cnt_v << "\n";
	}
	
	return 0;
}