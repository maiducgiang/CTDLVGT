#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, k;
	cin>>n>>k;
	int a[k + 1];
	for(int i = 1; i <= k; i++) cin>>a[i];
	for(int i = k; i >= 1; i--)
		if(a[i] <  n - (k - i)){
			a[i] += 1;
			for(int j = i + 1; j <=k; j++) a[j] = a[j - 1] + 1;
			break;
		}
		else
		if(a[1] == n - k + 1){
			for(int i = 1; i <= k; i++) a[i] = i;
			break;
		}
	for(int i = 1; i <= k; i++) cout<<a[i]<<" "; 
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
