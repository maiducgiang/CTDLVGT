#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, code;
	cin >> n;
	vector <long long> a;
	for(int i = 0; i < n; i++) {
		cin >> code;
		a.push_back(code);
	}
	sort(a.begin(), a.end());
	long long m1 = a[0] * a[1], m2 = a[n - 2] * a[n - 1],
	 m3 = m1 * a[n - 1], m4 = m2 * a[0], m5 = a[n - 1] * a[n - 2] * a[n - 3];
	long long ma;
	ma = max(m1, m2);
	ma = max(ma, m3);
	ma = max(ma, m4);
	ma = max(ma, m5);
	cout << ma ;
}
int main(){
	int t;
	t = 1;
	while(t--){
		solve();
		cout<<endl;
	}
}


