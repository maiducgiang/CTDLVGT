#include<bits/stdc++.h>
using namespace std;
int n,m;
bool chuaxet[1005];
vector<int> v[1005];
bool kt;
void dfs(int u, int del){
	chuaxet[u] = false;
    for(int i=0;i<v[u].size();i++){
        if(chuaxet[v[u][i]]){
        dfs(v[u][i],u);
    	}else {
        	if (del != v[u][i]) kt = true;
		}
    }
}
void solve(){
	memset(chuaxet,true,sizeof(chuaxet));
	for ( int  i=0; i<1005; i++){
		v[i].clear();
	}
	cin >> n >> m;
	for ( int i = 0; i<m; i++){
		int x,y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	kt = false;
	for (int i = 1; i<=n; i++) {
		dfs(i,0);
		memset(chuaxet,true, sizeof(chuaxet));
		if(kt) break;
	}
	if(kt) cout << "YES";
	else cout << "NO";
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than
