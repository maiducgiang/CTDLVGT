#include<bits/stdc++.h>
using namespace std;
void solve(){
	stack <string> c;
	string s;
	cin >> s;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^'){
			string s1 = c.top(); c.pop();
			string s2 = c.top(); c.pop();
			string s3 = s[i]+s2+s1;
			c.push(s3);
		}
		else c.push(string(1, s[i]));
	}
	cout << c.top();
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


