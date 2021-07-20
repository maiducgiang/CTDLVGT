#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, k;
	cin >> n >> k;
	vector <vector <long long> > a(n + 1);
	int x, y;
	for(int i = 1; i <= k; i++){
		cin >> x >> y;
		a[x].push_back(y);
	} 
	for(int i = 1; i <= n; i++) 
		if(1)
		{
			cout << i <<": ";
			for(int j = 0; j < a[i].size(); j++) cout << a[i][j]<<" ";
			cout << endl;
		}
		
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout<<endl;
	}
}



