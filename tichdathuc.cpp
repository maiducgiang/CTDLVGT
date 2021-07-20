#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, m, k;
	cin >> n >> m;
	k = m * n;
	vector <long long> a(n, 0);
	vector <long long> b(m, 0);
	vector <long long> c((m-1) + (n-1) + 1, 0);
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < m; i++) cin >> b[i];
	
	for(int i = 0; i < n; i++)
		if(a[i] > 0){
			for(int j = 0; j < m; j++) c[i + j] += a[i] * b[j];
		}
	for(int i = 0; i < c.size(); i++) cout << c[i] <<" ";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


