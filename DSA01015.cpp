#include<bits/stdc++.h>
using namespace std;
int n, code;
void quaylui(long long dem){
	cout<<dem<<endl;
	if(code == 1 && code >= pow(10, 18)) return;
	if(dem % n == 0){
		cout << dem;
		code = 1;
		return;
	}
	else{
		dem = dem * 10 + 9;
		quaylui(dem);
		dem /= 10;
		dem = dem * 10;
		quaylui(dem);
		dem /= 10;
	}
}
void solve(){
	cin >> n;
	code = 0;
	quaylui(9);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


