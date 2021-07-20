#include<bits/stdc++.h>
using namespace std;
void solve(){
	long long n, k;
	cin >> n >> k;
	long long a[n + 1], check[40001] = {};
	check[0] = 1;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++)
		for(int j = k; j >= a[i]; j--)
			if(check[j] == 0 && check[j - a[i]] == 1) check[j] = 1;
	if(check[k] == 1) cout << "YES";
	else cout << "NO";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


