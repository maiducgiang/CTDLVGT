#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve(){
	int n, code1 = 1;
	cin>>n;
	int a[n + 1];
	for(int i = 1; i <= n; i++) a[i] = i;
	
	while(1){
		for(int i = 1; i <= n; i++) cout<<a[i]; cout<<" ";
		int i = n - 1;
		while(i > 0 && a[i] > a[i + 1]) i--;
		if(i == 0)return;
		int k = n;
		while(a[k] < a[i]) k--;
		int tm = a[i]; a[i] = a[k]; a[k] = tm;
		int l = i + 1, r = n;
		while(l < r){
			tm = a[l]; a[l] = a[r]; a[r] = tm;
			l++;
			r--;
		}
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


