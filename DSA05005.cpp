#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	int a[n + 1], check[1001] = {1}, ma = 1;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++){
		check[i] = 1;
		//cin >> a[i];
		for(int j = 0; j < i; j++)
		if(a[i] > a[j]) check[i] = max(check[i], check[j] + 1);
		ma = max(ma, check[i]);
	} 
	cout << n - ma;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


