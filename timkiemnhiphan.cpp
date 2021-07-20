#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, k, vitri = -1;
	cin>>n>>k;
	for(int i = 1; i <= n; i++){
		int c;
		cin>>c;
		if(c == k && vitri == -1) vitri = i;
	}
	if(vitri != -1)
	cout<<vitri;
	else cout<<"NO";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
