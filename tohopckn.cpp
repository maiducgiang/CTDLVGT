#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector < vector <long long> > a;
void solve(){
	int n, k;
	a.clear();
	cin>>n>>k;
	n++;
	//if(a.size() == 0){
	a.resize(n + 1);
	a[1].push_back(1);
	a[1].push_back(1);
	for(int i = 2; i <= n; i++){
		for(int j = 0; j <= i; j++){
			if(j == 1 || j == i) a[i].push_back(1);
			else{
				long long code = (a[i - 1][j] + a[i - 1][j - 1]) % 1000000007;
				a[i].push_back(code);
			}
		}
	}
	//}
	//for(int i = 0; i <= a[n].size(); i++) cout<<a[n][i]<<" ";cout<<endl;
	cout<<a[n][k + 1];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
