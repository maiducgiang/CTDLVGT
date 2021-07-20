#include<bits/stdc++.h>
using namespace std;
int a[101][101];
void solve(){
	int n, x, m;
	cin>>n>>m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin>>x;
			a[i][j] = 0;
		}
	}
	a[0][0] = 1;
	a[1][0] = 1;
	a[0][1] = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++) 
		if(i == 1) a[i][j] += a[i][j - 1];
		else if(j == 1) a[i][j] += a[i - 1][j];
		else a[i][j] = a[i][j - 1] + a[i - 1][j]; 
	}
	cout<<a[n][m];
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << '\n';
	}
}
