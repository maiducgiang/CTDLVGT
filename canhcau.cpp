#include<bits/stdc++.h>
#include<vector>
using namespace std;
int mtk[1001][1001], chuaxet[1001] = {0};
int v, e, u, x, y;
int BFS(int u){
	int cod = 1;
	queue <int> a;
	a.push(u);
	chuaxet[u] = 1;
	while(!a.empty()){
		int code = a.front(); a.pop();
		cod += 1;
		for(int i = 1; i <= v; i++)
		if(chuaxet[i] == 0 && mtk[code][i] == 1){
			a.push(i);
			chuaxet[i] = 1;
		}
	}
	return cod;
}
void solve(){
	memset(mtk,0, sizeof(mtk));
	
	
	cin >> v >> e;
	int check[e + 1][3];
	for(int i = 1; i <= e; i++){
		cin >> x >> y;
		check[i][1] = x;
		check[i][2] = y; 
		mtk[x][y] = 1;
		mtk[y][x] = 1;
	}
	//cout <<BFS(1)<<endl;
	for(int i = 1; i <= e; i++){
		mtk[check[i][1]][check[i][2]] = 0;
		mtk[check[i][2]][check[i][1]] = 0;
		memset(chuaxet,0, sizeof(chuaxet));
		if(BFS(1) - 1 != v) cout << check[i][1] <<" "<<check[i][2]<<" ";
		mtk[check[i][1]][check[i][2]] = 1;
		mtk[check[i][2]][check[i][1]] = 1;
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



