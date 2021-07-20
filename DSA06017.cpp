#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve(){
	int n, k;
	vector <int> a;
	cin>>n>>k;
	for(int i = 1; i <= n + k; i++){
		int x;
		cin>>x;
		a.push_back(x);
	}
	sort(a.begin(), a.end());
	for(int i = 0; i < n + k; i++) cout<<a[i]<<" ";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


