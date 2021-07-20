#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, k = 1;
	cin>>n;
	int a[1026][n + 1];
	for(int i = 1; i <= n; i++) a[1][i] = 0;
	for(int i = 1; i <= n; i++) cout<<a[k - 1][i];cout<<endl;
	
	for(int i = 1; i <= n; i++) if(i <= n - k) a[2][i] = 0;
	a[2][n] = 1;
	k++;
	while(1){
		k++;
		for(int i = 1; i <= n; i++) cout<<a[k - 1][i];
		cout<<endl;
		int dem = 0;
		for(int i = 1; i <= n; i++) a[k][i] = a[k - 1][i];
		for(int i = n; i >= 1; i--) if(a[k - 1][i] == 0 && a[k - 2][i] == 0){
			a[k][i] = 1;break;
		}
		else if(a[k - 1][i] == 1 && a[k - 2][i] == 1){
			a[k][i] = 0;
			break;
		}
		//else a[k][i] = a[k - 1][i];
		if(a[k][0] == 1) break;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


