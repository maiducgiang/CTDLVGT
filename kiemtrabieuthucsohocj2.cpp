#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	scanf("\n");
	getline(cin , s);
	vector <char> c;
	for(int i = 0; i < s.length(); i++)
		if(s[i] != ')' && s[i] != ' ') c.push_back(s[i]);
		else if(s[i] == ')'){
			
			int check = 0;
			while(!c.empty()){
				char x = c[c.size() - 1]; c.pop_back();
				if(x=='+'||x=='-'||x=='*'||x=='/'||x=='%'||x=='^') check = 1;
				if(x == '(') break;
			}
			if(check == 0){
				cout << "Yes";
				return;
			}
		}
	cout << "No";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


