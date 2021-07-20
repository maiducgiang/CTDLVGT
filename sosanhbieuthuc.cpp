#include<bits/stdc++.h>
using namespace std;
string check(string s){
	stack <char> c;
	for(int i = s.length() - 1; i >= 0; i--)
	if(s[i] == '('){
		if(s[i - 1] == '-'){
			string x = "";
			while(c.top() != ')'){
				char y = c.top(); c.pop();
				if(y == '-') y = '+';
				else
				if(y == '+') y = '-';
				x = x + y;
			}
			c.pop();
			for(int j = x.length() - 1; j >= 0; j--) c.push(x[j]);
		}
		else {
			string x = "";
			while(c.top() != ')'){
				char y = c.top(); c.pop();
				x = x + y;
			}
			c.pop();
			for(int j = x.length() - 1; j >= 0; j--) c.push(x[j]);
		}
	}
	else c.push(s[i]);
	s = "";
	while(!c.empty()){
		s += c.top();
		c.pop();
	}
	return s;
}
void solve(){
	scanf("\n");
	string s, s2;
	getline(cin, s);
	getline(cin, s2);
	s = check(s);
	s2 = check(s2);
	if(s == s2) cout << "YES";
	else cout << "NO";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


