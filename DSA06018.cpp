#include<bits/stdc++.h>
#include<vector>
using namespace std;
void solve(){
	int n;
	cin>>n;
	int a[100001] = {};
	int ma = 0, leng = 0, mi = 0;
	for(int i = 1; i <= n; i++){
		int x;
		cin>>x;
		if(mi == 0) mi = x;
		if(mi > x) mi = x;
		if( x > ma) ma = x;
		if(a[x] == 0){
			a[x] = 1;
			leng += 1;
		}
	}
	cout<<ma - mi + 1 -leng;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


