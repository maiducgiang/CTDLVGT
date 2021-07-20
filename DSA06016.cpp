#include<bits/stdc++.h>
using namespace std;
void solve(){
	long long n, k, minn, maxx;
	long long x;
	cin>>n>>k;
	
	cin>>maxx;
	for(int i = 2; i <= n; i++){	
		cin>>x;
		if(x > maxx) maxx = x;
	}
	cin>>minn;
	for(int i = 2; i <= k; i++){	
		cin>>x;
		if(x < minn) minn = x;
	}
	cout<<minn*maxx;
	
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


