#include<bits/stdc++.h>
using namespace std;
vector <int> a;
int n, m;
void quaylui(int k){
	if(k > n){
		if(m%2==0){
			for(int i = 0; i < n; i++)cout<<a[i]<<" ";
			for(int i = n - 1; i >= 0; i--) cout<<a[i]<<" ";
		}
		else{
			for(int i = 0; i < n; i++)cout<<a[i]<<" ";
			for(int i = n - 2; i >= 0; i--) cout<<a[i]<<" ";
		}
		cout<<"\n";
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
	m = n;
	n = (n % 2 == 0)?n/2:n/2+1;
	quaylui(1);
}
int main(){
	int t;
	t = 1;
	while(t--){
		solve();
		cout<<endl;
	}
}
