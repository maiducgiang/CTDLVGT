#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, bay = 0, bon = 0;
	cin >> n;
	bay = n / 7;
	while((n - bay * 7) % 4 != 0){
		bay--;
		if(bay < 0) break;
	}
	if((n - bay * 7) % 4 == 0){
		bon = (n - bay * 7) / 4;
		for(int i = 1; i <= bon; i++) cout <<4;
		for(int i = 1; i <= bay; i++) cout << 7;
	}
	else cout << -1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


