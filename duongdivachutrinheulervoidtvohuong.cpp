#include<bits/stdc++.h>
using namespace std;
int n,m,a[1005][1005];
int check(){
	int h;
	int dem1 = 0, dem2 = 0;
	for ( int i = 1; i<=n; i++){
		h = 0;
		for ( int j = 1; j<=n; j++){
			h+= a[i][j];
		}
		if(h%2==0) dem1++;
		else{
			dem2++;
			h = i;
		}
	}
	if(dem1 == n) return 2;
	if(dem2 == 2) return 1;
	return 0;
}
void solve(){
	memset(a,0,sizeof(a));
	cin >> n >> m;
	for ( int i = 0 ; i<m; i++){
		int x, y;
		cin >> x >> y;
		a[x][y] = 1;
		a[y][x] = 1;
	}
	cout << check() << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than
