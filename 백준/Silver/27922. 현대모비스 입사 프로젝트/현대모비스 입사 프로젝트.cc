#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct ST{
	int ab;
	int bc;
	int ca;
};
bool compareAB(ST a, ST b) { return a.ab > b.ab; }
bool compareBC(ST a, ST b) { return a.bc > b.bc; }
bool compareCA(ST a, ST b) { return a.ca > b.ca; }
vector<ST> v;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, k;
	long long sum1 = 0, sum2 = 0, sum3 = 0;
	cin >> n >> k;
	
	for(int i = 0; i < n; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		v.push_back({a + b, b + c, c + a});
	}
	
	sort(v.begin(), v.end(), compareAB);
	for(int i = 0; i < k; i++) {
		sum1 += v[i].ab;
	}
	sort(v.begin(), v.end(), compareBC);
	for(int i = 0; i < k; i++) {
		sum2 += v[i].bc;
	}
	
	sort(v.begin(), v.end(), compareCA);
	for(int i = 0; i < k; i++) {
		sum3 += v[i].ca;
	}
	
	int max_tot = sum1;
	
	if(sum2 > max_tot) max_tot = sum2;
	if(sum3 > max_tot) max_tot = sum3;
	cout << max_tot;
	
	return 0;
}
