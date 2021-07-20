#include<bits/stdc++.h>
using namespace std;
void solve(){
	long long n;
	cin >> n;
	long long a[n + 1], b[n + 1];
	for(int i = 1; i <= n; i++) cin >> a[i];
	stack <long long> c;
	for(int i = n; i >= 1; i--){
		while(!c.empty() && c.top() <= a[i]) c.pop();
		if(c.empty()) b[i] = -1;
		else b[i] = c.top();
		c.push(a[i]);
	}
	for(int i = 1; i <= n; i++) cout << b[i]<<" ";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


