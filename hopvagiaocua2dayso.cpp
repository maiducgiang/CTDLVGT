#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve(){
	int n, m;
	cin>>n >>m;
	int a[n + m];
	for(int i = 1; i <= n + m; i++) cin>>a[i];
	sort(a + 1, a + n + m + 1);
	cout<<a[1]<<" ";
	for(int i = 2; i <= n + m; i++) if(a[i] != a[i - 1]) cout<<a[i]<<" ";cout<<endl;
	for(int i = 2; i <= n + m; i++) if(a[i] == a[i - 1]) cout<<a[i]<<" ";
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
