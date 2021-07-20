#include<bits/stdc++.h>
#include<string>
using namespace std;
void solve(){
	int n;
	cin>>n;
	string s;
	scanf("\n");
	getline(cin, s);
	for(int i = 0; i <= 9; i++){
		if(s.find('0'+i) != -1) cout<<i<<" ";
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
