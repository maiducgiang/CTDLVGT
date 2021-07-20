#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	scanf("\n");
	cin >> s;
	s = '1' + s;
	for(int i = s.length() - 1; i >= 0; i--){
		if(s[i] == '1' && i != 0){
			s[i] = '0';
			for(int j = i + 1; j < s.length(); j++) s[j] = '1';
			break;
		}
		else if(s[i] && i == 0){
			for(int j = i; j < s.length(); j++) s[j] = '1';
			break;
		}
		if( i == 0) break;
	}
	s.erase(0, 1);
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


