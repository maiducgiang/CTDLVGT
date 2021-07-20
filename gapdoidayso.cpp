#include<bits/stdc++.h>
using namespace std;
long long demo;
long long quaylui(long long n, long long k){
	if(k == n / 2 + 1){
		return ++demo;
	} 
	else if(k == 1) return 1;
	else if(k == n) return 1;
	else{
		demo--;
		if(k < n / 2 + 1) return quaylui(n/2, k);
		else if(k > n / 2 + 1) return quaylui(n/2, k - n/2 - 1);
	}
}
void solve(){
	long long n, k, s = 1;
	cin>>n>>k;
	demo = n;
	for(long long i = 1; i <= n; i++) s = s * 2 + 1;
	cout<<quaylui(s, k);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
