#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector <vector <int>> a;
int n, k, m, vitri[1001], code = 0;
vector <int> mp;
void quaylui(int t){
	if(code == 1) return;
	else{
		if(mp.size() == n){
			for(int i = 0; i < mp.size(); i++) cout<<mp[i]<<" ";cout<<endl;
			code = 1;
			return;
		}
		else{
			for(int i = 0; i < a[t].size(); i++)
			if(vitri[a[t][i]] == 0){
				int d = a[t][i];
				vitri[d] = 1;
				mp.push_back(d);
				quaylui(d);
				vitri[d] = 0;
				mp.pop_back();
			}
		}
	}
}
void solve(){
	a.clear();
	cin>>n>>k>>m;
	a.resize(n + 1);
	for(int i = 1; i <= n; i++) vitri[i] = 0;
	for(int i = 1; i <= k; i++){
		int x, y;
		cin>>x>>y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	code = 0;
	mp.push_back(m);
	vitri[m] = 1;
	quaylui(m);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


