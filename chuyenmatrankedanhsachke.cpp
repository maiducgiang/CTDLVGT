#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	vector <vector <int>> a(n + 1);
	for(int i = 1; i <= n; i++){
		int x;
		for(int j = 1; j <= n; j++){
			cin >> x;
			if(x == 1)a[i].push_back(j);
		}
	}
	for(int i = 1; i <= n; i++)
	if(a[i].size() >= 1){
		for(int j = 0; j < a[i].size(); j++) cout << a[i][j]<<" ";
		cout << endl;
	}
}
int main(){
	int t;
	t = 1;
	while(t--){
		solve();
		cout<<endl;
	}
}



