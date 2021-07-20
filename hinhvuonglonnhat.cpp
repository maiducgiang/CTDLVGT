#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, m, mx = 0;
	cin >> n >> m;
	int a[501][501] = {}, b[501][501] = {};
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> b[i][j];
			a[i][j] = a[i][j - 1] + b[i][j];
		}
	}
	
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++){
			a[i][j] += a[i - 1][j];
		}
		cout <<endl<<endl;
	/*for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cout << a[i][j] <<" ";
		}
		cout <<endl;
	}*/
	
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++) 
		if(b[i][j] == 1){
			for(int k = 1; ; k++)
			if(i + k > n || j + k > m) break;
			else
			{
				long long check = a[i + k][j + k] + a[i - 1][j - 1] - a[i - 1][j + k] - a[i + k][j - 1];
				//cout <<i <<" "<<j<<" " <<check <<endl;
				if(b[i+k][j+k] == 1 && check == (k + 1) * (k + 1)){
					mx = max(mx, (k + 1) );
				}
			}
			
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


