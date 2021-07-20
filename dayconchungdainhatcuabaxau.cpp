#include<bits/stdc++.h>
using namespace std;
long long f[101][101][101];
int n,m,l;
long long maxV(string a, string b, string c){
	for ( int i= 0; i<n; i++){
		for ( int j = 0; j<m; j++){
			for ( int k = 0; k<l; k++){
				if(a[i] == b[j] && b[j] == c[k]) f[i+1][j+1][k+1] = f[i][j][k]+1 ;
				else f[i+1][j+1][k+1] = max(max(f[i+1][j+1][k],f[i][j+1][1+k]), f[i+1][j][k+1]);  	
			}
		}
	}
	return f[n][m][l];
}
 
void solve(){
	cin >> n >> m >> l;
	f[101][101][101] = {0};
	string a,b,c;
	cin >> a >> b >> c;
	cout << maxV(a,b,c);
	cout << endl;
}
 
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		solve();
	}
}
// NV Than
