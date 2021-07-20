#include<bits/stdc++.h>
using namespace std;
int c[1005][1005] = {};
int check(string a, string b){
	for(int i = 0; i < a.size(); i++)
		for(int j = 0; j < b.size(); j++)
		if(a[i] == b[j]){
			c[i+1][j+1] = c[i][j] + 1;
		}else{
			c[i+1][j+1] = max(c[i+1][j], c[i][j+1]);
		}
	return c[a.size()][b.size()];
}
void solve(){
	string a, b;
	cin >> a >> b;
	cout << check(a, b);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
