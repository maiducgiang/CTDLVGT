#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
void solve(){
	int n, m, k;
	cin>>n>>m>>k;
	n+=m;
	vector<int> a;
	a.push_back(0);
	for(int i = 1; i <= n; i++){
		int x;
		cin>>x;
		a.push_back(x);
	}
	sort(a.begin() + 1, a.end());
	cout<<a[k];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


