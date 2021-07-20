#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, k, ma = 0;
	cin>> n >> k;
	int a[100001];
	for(int i = 1; i <= n; i++){
		int m;
		cin>>m;
		a[m] = 1;
		if(ma < m) ma = m;
	}
	for(int i = 1; i <= k; i++){
		int m;
		cin>>m;
		a[m] += 1;
		if(ma < m) ma = m;
	}
	for(int i = 1; i <= ma; i++)if(a[i] != 0) cout<<i<<" "; cout<<endl;
	for(int i = 1; i <= ma; i++)if(a[i] >= 2) cout<<i<<" ";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


