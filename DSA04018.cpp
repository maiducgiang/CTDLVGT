#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, max = 0, x;
	cin>>n;
	for(int i = 1; i <= n; i++){
		cin>>x;
		max += x;
	}
	cout<<(n-max);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


