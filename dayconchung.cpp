#include<bits/stdc++.h>
using namespace std;
long long a[100001], b[100001], c[100001];
void solve(){
	long long n, m, p, i, j ,k, check = 0;
	cin >> n >> m >> p;
	for(i = 1; i <= n; i++) cin >> a[i];
	for(i = 1; i <= m; i++) cin >> b[i];
	for(i = 1; i <= p; i++) cin >> c[i];
	i = 1;
	j = 1;
	k = 1;
	while(i <= n && j <= m && k <= p){
		while(b[j] < a[i] && j <= m - 1) j++;
		while(c[k] < a[i] && k <= p - 1) k++;
		if(a[i] == b[j] && a[i] == c[k]) {
			cout << a[i] <<" ";
			j++;
			k++;
			check = 1;
		}
		i++;
	}
	if(check == 0) cout <<"NO";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


