#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a[101][101] = {0}, n;
	string s;
	cin >> n >> s;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
		if(s[i] == s[j]) a[i+1][j+1] = a[i][j] + 1;
		else a[i+1][j+1] = max(a[i+1][j], a[i][j+1]);
	}
	cout << a[s.size()][s.size()];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


