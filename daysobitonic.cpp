#include<bits/stdc++.h>
using namespace std;
void solve(){
	long long n;
	cin >> n;
	long long a[n + 1], b[10001] = {}, c[10001] = {};
	for(int i = 1; i <= n; i++) cin >> a[i];
	b[1] = a[1];
	long long mx = a[1];
	for(int i = 2; i <= n; i++){
		b[i] = a[i];
		for(int j = i - 1; j >= 1; j--) if(a[i] > a[j]) b[i] = max(b[i], b[j] + a[i]);
		//mx = max(mx, b[i]);
	}
	//cout << mx <<endl;
	c[n] = a[n];
	for(int i = n - 1; i >= 1; i--){
		c[i] = a[i];
		for(int j = i + 1; j <= n; j++) if(a[i] > a[j]) c[i] = max(c[i], c[j] + a[i]);
		//mx = max(mx, c[i]);
	}
	for(int i = 1; i <= n; i++) mx = max(mx, b[i] + c[i] - a[i]);
	cout << mx;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


