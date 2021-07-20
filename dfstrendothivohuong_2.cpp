#include<bits/stdc++.h>
#include<vector>
using namespace std;
int n, k, u, check = 0;
int code[1001] = {};
vector <long long> a;
vector < vector <long long> > e(1000);
vector <vector <long long >> donvi(1000);
void dfs(int t){
	cout << a[a.size() - 1] <<" ";
	if(check == 1 )return;
	if(a.size() == n){
		check = 1;
		return;
	}
	else{
		int check2 = 0;
		for(int i = 0; i < e[a[a.size() - 1 - t]].size(); i++)
		if(code[e[a[a.size() - 1 - t]][i]] == 0){
			check2 += 1;
			code[e[a[a.size() - 1 - t]][i]] = 1;
			a.push_back(e[a[a.size() - 1 - t]][i]);
			
			dfs(t);
			break;
		}
		if(check2 == 0){
			dfs(t + 1);
			return;
		} 
	}
}
void solve(){
	a.clear();
	e.clear();
	e = donvi;
	check = 0;
	memset(code, sizeof(code), 0);
	cin >> n >> k >> u;
	int x, y;
	for(int i = 1; i <= k; i++){
		cin >> x >> y;
		e[x].push_back(y);
		e[y].push_back(x);
	} 
	a.push_back(u);
	dfs(0);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout<<endl;
	}
}



