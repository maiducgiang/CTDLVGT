#include<bits/stdc++.h>
using namespace std;
vector <int> a;
int n;
void quaylui(int k){
	if(k > n){
		cout<<a[0];
		for(int i = 1; i < n; i++) cout<<(a[i] + a[i - 1]) % 2;
		cout<<" ";
		return;
	}
	else{
		for(int i = 0; i <= 1; i++){
			a.push_back(i);
			quaylui(k + 1);
			a.pop_back();
		}
	}
}
void solve(){
	cin>>n;
	quaylui(1);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
