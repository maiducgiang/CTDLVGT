#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve(){
	long long n;
	long long s = 0;
	cin>>n;
	long long a[n];
	for(int i = 0; i < n; i++) cin>>a[i];
	sort(a, a+n);
	for(int i = 0; i < n; i++){
		//cout<<s<<endl;
		s = (s + a[i] * i) % 1000000007;
	} 
	cout<<s;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
