#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, v;
	cin >> n >> v;
	int a[n + 1], b[n + 1], f[n + 1][n + 1];
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++) cin >> b[i];
	
	for(int i = 1; i <= n; i++){
		for(int j = 0; j <= v; j++)
		if(i == 1 && j == 0) f[i][j] = 0;
		else if(a[i] < j) f[i][j] = max(f[i - 1][j - a[i]] + b[i], f[i - 1][j - 1]);
		else f[i][j] = f[i - 1][j];
	}
	cout<<f[n][v];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


