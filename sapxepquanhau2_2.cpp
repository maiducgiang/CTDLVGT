#include<bits/stdc++.h>
using namespace std;

long long n, a[10][10], m = 0, vitri[10] = {};
int check(int x, int y){
	for(int i = 1; i < x; i++)
	if(vitri[i] == y || abs(x - i) == abs(y - vitri[i])) return 0;
	return 1;
}
void quaylui(int k){
	if(k > n){
		long long sum = 0;
		for(int i = 1; i <= n; i++) sum += a[i][vitri[i]];
		m = max(m, sum);
	}
	else{
		for(int i = 1; i <= n; i++)
			if(check(k, i)){
				vitri[k] = i;
				quaylui(k + 1);
				vitri[k] = 0;
			}
	}
}
void solve(){
	n = 8;
	m = 0;
	for(int i = 1; i <= n; i++) 
		for(int j = 1; j <= n; j++) cin >> a[i][j];
	quaylui(1);
	cout << m;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


