#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, k, vitri = -1;
	cin >> n >> k;
	int a;
	for(int i = 1; i <= n; i++){
		cin >> a;
		if(a == k && vitri == -1) vitri = i;
	}
	cout << vitri;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
