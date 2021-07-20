#include<bits/stdc++.h>
#include<vector>
using namespace std;
int chuaxet[1001] = {0};
vector <vector <int> > canhke;
int v, e, u, x, y;
int DFS(int u, int u1, int v1){
	int dem = 1;
	stack <int> a;
	a.push(u);
	chuaxet[u] = 1;
	while(!a.empty()){
		int code = a.top(); a.pop();
		chuaxet[code] = 1;
		for(int i = 0; i < canhke[code].size(); i++)
			if((code == u1 && canhke[code][i] == v1) || (code == v1 && canhke[code][i] == u1));
			else
			if(chuaxet[canhke[code][i]] == 0 ){
				a.push(code);
				a.push(canhke[code][i]);
				dem += 1;
				chuaxet[canhke[code][i]] = 1;
				break;
			}
	}
	return dem;
}
void solve(){
	
	cin >> v >> e;
	int check[e + 1][3];
	canhke.clear();
	canhke.resize(v + 1);
	for(int i = 1; i <= e; i++){
		cin >> x >> y;
		canhke[x].push_back(y);
		canhke[y].push_back(x);
	}
	for(int i = 1; i <= v; i++){
		for(int j = 0; j < canhke[i].size(); j++)
		if(canhke[i][j] > i){
			memset(chuaxet, 0, sizeof(chuaxet));
			if(DFS(1, i, canhke[i][j]) < v) 
			cout << i<<" " <<canhke[i][j]<<" ";
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
