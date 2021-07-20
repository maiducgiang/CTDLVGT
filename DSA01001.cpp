#include<bits/stdc++.h>
#include<string>
using namespace std;
void solve(){
	string s;
	cin>>s;
	int n = s.length() - 1;
	for(int i = n; i >= 0; i--) if(s[i] == '1'){
		s[i] = '0';
	}
	else {
		s[i] = '1';
		break;
	}
	cout<<s;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


