#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, k ;
	cin >> n >> k;
	int f[100005] = {0};
	f[0] = 1;
	f[1] = 1;
	for(int i = 2; i <= n; i++){
		f[i] = 0;
		for(int j = 1; j <= i && j <= k; j++)
		f[i] =(f[i] + f[i - j]) % 1000000007;
	}
	cout << f[n];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


