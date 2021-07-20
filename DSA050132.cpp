#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, k;
	cin >> n >> k;
	long long a[n + 1];
	a[1] = 1;
	a[0] = 1;
	for(int i = 2; i <= n; i++){
		a[i] = 0;
		for(int j = 1; j <= i && j <= k; j++) a[i] = (a[i] + a[i - j]) % 1000000007;
	}
	cout<<a[n];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


