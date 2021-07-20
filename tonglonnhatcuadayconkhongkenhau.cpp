#include<bits/stdc++.h>
using namespace std;
void solve(){
	long long n;
	cin >> n;
	long long a[n + 1], sum = 0, b[n + 1], mx = 0;
	for(int i = 1; i <= n; i++) cin >> a[i];
	b[1] = (a[1] > 0)? a[1] : 0;
	b[2] = (a[2] > 0)? a[2] : 0;
	for(int i = 3; i <= n; i++){
		if(a[i] > 0) b[i] = b[i - 2] + a[i];
		else b[i] = b[i - 2];
		mx = max(mx, b[i]);
	}
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


