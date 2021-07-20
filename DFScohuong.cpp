#include<bits/stdc++.h>
using namespace std;
vector <vector <int> > ke;
int v, e, check[1001], u;

void DFS(){
	memset(check, 0, sizeof(check));
	stack <int> a;
	a.push(u);
	check[u] = 1;
	cout << u <<" ";
	while(!a.empty()){
		
		int x = a.top(); a.pop();
		for(int i = 0; i < ke[x].size(); i++)
		if(check[ke[x][i]] == 0){
			cout << ke[x][i] << " ";
			a.push(x);
			a.push(ke[x][i]);
			check[ke[x][i]] = 1;
			break;
		}
	}
	
}
void solve(){
	cin >> v >> e >> u;
	ke.clear();
	ke.resize(v + 1);
	for(int i = 1; i <= e; i++){
		int x, y;
		cin >> x >> y;
		ke[x].push_back(y);
	}
	DFS();
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}



