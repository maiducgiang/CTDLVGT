#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve(){
	int n, k, s = 0;
	cin>>n>>k;
	int a[n + 1];
	for(int i = 1; i <= n; i++) cin>>a[i];
	sort(a+1, a + n + 1);
	k = (k < n-k)?k:n-k;
	for(int i = 1; i <= n; i++) if(i <= k) s -= a[i]; else s += a[i];
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


