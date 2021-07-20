#include<bits/stdc++.h>
using namespace std;
void solve(){
	long long n, a[100] = {};
	cin >> n;
	a[1] = 1;
	a[2] = 2;
	a[3] = 4;
	for(int i = 4; i <= n; i++) a[i] = a[i - 1] + a[i - 2] + a[i - 3];
	cout << a[n];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


