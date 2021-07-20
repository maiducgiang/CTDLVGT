#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, code = 0, dem = 0;
	cin>>n;
	int a[n + 1];
	for(int i = 1; i <= n; i++) cin>>a[i];
	for(int i = 1; i <= n - 1; i++){
		cin>>dem;
		if(dem != a[i] && code == 0) code = i;
	}
	if(code == 0) code = n;
	cout<<code;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
