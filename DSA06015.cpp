#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve(){
	int n;
	cin>>n;
	int a[n];
	for(int i = 1; i <= n; i++) cin>>a[i - 1];
	sort(a, a + n);
	for(int i = 1; i <= n; i++) cout<<a[i - 1]<<" ";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


