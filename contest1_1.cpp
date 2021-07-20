#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	for(int i = 1; i <= n; i++){
		cout << (i % 2 == 0) ? 0 : 1;
		cout<<" ";
	}  cout<<endl;
	for(int i = 1; i <= n; i++){
		cout << (i % 2 == 1) ? 0 : 1;
		cout<<" ";
	}  cout<<endl;
}
int main(){
	int t;
	t = 1;
	while(t--){
		solve();
		cout<<endl;
	}
}


