#include <iostream>
#include <cmath>
using namespace std;
string ans = "";
void check(string sum, int is_first);

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string l, sum = "";
	int is_first = 1, i = 0;
	
	getline(cin, l);
	
	while(i < l.length()) {
		
		if (l[i] != ' ') {
			sum += l[i];
		}
		else {
			check(sum, is_first);
			is_first = 0;
			sum = "";
		}
		
		i++;
	}
	
	cout << ans + (char)(sum[0] - 32);
	
	return 0;
}

void check(string sum, int is_first) {
	
	if(is_first == 0) {
		
		if(sum == "i" || sum == "pa" || sum == "te" || sum == "ni" || sum == "niti" || 
		   sum == "a" || sum == "ali" || sum == "nego" || sum == "no" || sum == "ili" ) {
		   return;
		}
		else ans += sum[0] - 32;
	}
	else ans += sum[0] - 32;
}