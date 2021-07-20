#include<bits/stdc++.h>
#include<vector>
using namespace std;
int mtk[1001][1001], chuaxet[1001] = {0};
int v, e, u, x, y;
void BFS(int u){
	queue <int> a;
	a.push(u);
	chuaxet[u] = 1;
	while(!a.empty()){
		int code = a.front(); a.pop();
		cout << code <<" ";
		for(int i = 1; i <= v; i++)
		if(chuaxet[i] == 0 && mtk[code][i] == 1){
			a.push(i);
			chuaxet[i] = 1;
		}
	}
}
void solve(){
	memset(mtk,0, sizeof(mtk));
	memset(chuaxet,0, sizeof(chuaxet));
	
	cin >> v >> e >> u;
	for(int i = 1; i <= e; i++){
		cin >> x >> y;
		mtk[x][y] = 1;
		mtk[y][x] = 1;
	}
	BFS(u);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}



