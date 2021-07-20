#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, k, code, dem = -1;
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin >> code;
		if(code <= k) dem = i;
	}
	cout << dem;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


