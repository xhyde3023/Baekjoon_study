//OneRepublic Seoul 260223 Q^0^Q

#include <iostream>
#include <queue>
#include <utility>
using namespace std;

queue<pair<int, int>> q;
int v[200001];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, k;
	cin >> n >> k;
	
	q.push({n, 0});
	
	while(!q.empty()) {
		int a = q.front().first;
		int count = q.front().second;
		q.pop();
		
		if(!v[a]) {
			if(a == k) {
				cout << count;
				break;
			}
			else {
				
				q.push({a - 1, count + 1});
				q.push({a + 1, count + 1});
				if(abs(a*2 - k) < abs(a - k)) q.push({a * 2, count + 1});
			}
			v[a] = 1;
		}
	}
	
	return 0;
}

