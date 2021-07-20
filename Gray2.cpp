#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	cin >> s;
	for(int i = 1; i < s.length(); i++) s[i] = (s[i] + s[i - 1] - '0' - '0') % 2 + '0';
	cout << s;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


