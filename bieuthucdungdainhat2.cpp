#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	scanf("\n");
	getline(cin, s);
	vector <char> c;
	for(int i = 0; i < s.length(); i++)
	if(s[i] == '(') c.push_back(s[i]);
	else{
		if(!c.empty() && c[c.size() - 1] == '('){
			c.pop_back();
		}
		else c.push_back(s[i]);
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


