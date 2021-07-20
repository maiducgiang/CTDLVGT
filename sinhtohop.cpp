#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, k, code = 1;
	cin>>n>>k;
	int a[k + 1];
	for(int i = 1; i <= k; i++){
		cout<<i;
		a[i] = i;
	} cout<<" ";
	while(1){
		for(int i = k; i >= 1; i--)
		if(a[i] <  n - (k - i)){
			a[i] += 1;
			for(int j = i + 1; j <=k; j++) a[j] = a[j - 1] + 1;
			break;
		}
		else
		if(a[1] == n - k + 1){
			code = 0;
			break;
		}
		if(code == 1)
		{
			for(int i = 1; i <= k; i++) cout<<a[i]; cout<<" "; 
		}
		else break;
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
