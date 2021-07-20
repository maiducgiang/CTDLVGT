#include<bits/stdc++.h>
using namespace std;
void solve(){
	scanf("\n");
	string s;
	getline(cin, s);
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
	while(!c.empty()){
		cout << c.top() ;
		c.pop();
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


