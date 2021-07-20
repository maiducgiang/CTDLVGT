#include<bits/stdc++.h>
#include<string>
using namespace std;
void solve(){
	int n;
	string s, s1;
	cin>>n>>s;
	scanf("\n");
	getline(cin, s1);
	if(s1.find(s) != -1) cout<<1;
	else cout<<-1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


