#include<bits/stdc++.h>
using namespace std;
int solve(){
	int v, e;
	cin >> v >> e;
	vector <int> a(v + 1, 0);
	vector <int> b(v + 1, 0);
	for(int i = 1; i <= e; i++){
		int x, y;
		cin >> x >> y;
		a[x] += 1;
		b[y] += 1;
	}
	for(int i = 1; i <= v; i++)if(a[i] != b[i]) return 0;
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cout << solve();
		cout<<endl;
	}
}



