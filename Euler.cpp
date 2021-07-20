#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector <vector <int >> ke;
int v, e, check[1001] = {};
int DFS(){
	memset(check, 0, sizeof(check));
	stack <int> a;
	a.push(1);	
	check[1] = 1;
	while(!a.empty()){
		int x = a.top(); a.pop();
		for(int i = 0; i < ke[x].size(); i++)
		if(ke[x][i] > x && check[ke[x][i]] == 0){
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
	cin >> v >> e;
	int x, y, le = 0;
	ke.clear();
	ke.resize(v + 1);
	for(int i = 1; i <= e; i++) {
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	int code = DFS();
	for(int i = 1; i <= v; i++) if(ke[i].size() % 2 == 1) le++;
	if(le == 0 /*&& code*/) cout <<2;
	else if(le <= 2 /*&& code*/) cout << 1;
	else cout<<0; 
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}



