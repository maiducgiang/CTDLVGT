#include<bits/stdc++.h>
using namespace std;
vector <vector <int> > ke;
int v, e, check[1001], u;

int DFS(){
	memset(check, 0, sizeof(check));
	stack <int> a;
	a.push(u);
	check[u] = 1;
	int dem = 1;
	while(!a.empty()){
		
		int x = a.top(); a.pop();
		for(int i = 0; i < ke[x].size(); i++)
		if(check[ke[x][i]] == 0){
			dem+=1;
			a.push(x);
			a.push(ke[x][i]);
			check[ke[x][i]] = 1;
			break;
		}
	}
	for(int i = 1; i <= v; i++) if(check[i] == 0) return 0;
	return 1;
}
void solve(){
	cin >> v >> e ;
	ke.clear();
	ke.resize(v + 1);
	for(int i = 1; i <= e; i++){
		int x, y;
		cin >> x >> y;
		ke[x].push_back(y);
	}
	if(DFS() == 1) cout <<"YES"; else cout <<"NO";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}



