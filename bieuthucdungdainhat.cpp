#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	cin >> s;
	stack <char> c;
	for(int i = 0; i < s.length(); i++){
		if(c.empty())c.push(s[i]);
		else{
			if(s[i] == '(') c.push(s[i]);
			else{
				if(c.top() == '(') c.pop();
				else c.push(s[i]);
			}
		}
	}
	cout << s.length() - c.size();
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


