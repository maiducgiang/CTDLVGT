#include<bits/stdc++.h>
using namespace std;
void solve(){
	long long s, n;
	cin >> s >> n;
	int check[25001] = {};
	long long a[n + 1];
	for(int i = 1; i <= n; i++) cin >> a[i];
	check[s] = 0;
	check[0] = 1;
	for(int i = 1; i <= n; i++){
		for(int j = s; j >= a[i]; j--)
		if(check[j] == 0 && check[j - a[i]] == 1) check[j] = 1;
	}
	for(long long i = s - 1; i >= 0; i--) if(check[i]){
		cout<<i;
		break;
	}
}
int main(){
	int t;
	t = 1;
	while(t--){
		solve();
		cout<<endl;
	}
}


