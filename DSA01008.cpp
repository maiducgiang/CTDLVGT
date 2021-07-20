#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, k;
	cin>>n>>k;
	int a[n + 1];
	a[0] = 0;
	int dem = k;
	for(int i = 1; i <= n; i++) if(i <= n - k) a[i] = 0;
	else a[i] = 1;
	while(1){
		if(dem == k)
		{
			for(int i = 1; i <= n; i++) cout<<a[i];
			cout<<endl;
		}
		for(int i = n; i >= 0; i--) if(a[i] == 0){
			a[i] = 1;
			dem += 1;
			break;
		}
		else {
			a[i] = 0;
			dem -= 1;
			
		}
		if(a[0] == 1) break;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


