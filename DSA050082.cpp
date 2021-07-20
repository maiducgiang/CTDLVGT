#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, s;
	cin >> n >> s;
	int check[40001] = {0}, a[n + 1];
	check[0] = 1;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		for(int j = s; j >= a[i]; j--)
		if(check[j - a[i]] == 1 && check[j] == 0) check[j] = 1;
	}
	cout <<(check[s]);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


