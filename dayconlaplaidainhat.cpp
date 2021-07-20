#include<bits/stdc++.h>
using namespace std;
int check[1001][1001] = {0};
void solve(){
	int n;
	string s;
	cin >> n >> s;
	for(int i = 0; i < s.length(); i++){
		check[i][0] = 0;
		for(int j = 0; j < s.length(); j++)
		if(s[i] == s[j] && i != j) 
		check[i + 1][j + 1] = check[i][j] + 1;
		//check[i + 1][j + 1] = max(check[i + 1][j], check[i][j + 1]) + 1;
		else check[i + 1][j + 1] = max(check[i + 1][j], check[i][j + 1]);
	}
	cout<<check[s.length()][s.length()];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
