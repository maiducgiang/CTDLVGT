#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	scanf("\n");
	getline(cin , s);
	vector <char> c;
	int dem = 0,ngoactruoc = 0;
	for(int i = 0; i < s.length(); i++)
	if(s[i] == '(') c.push_back(s[i]);
	else{
		if(c.empty() ){
			c.push_back(s[i]);
			ngoactruoc += 1;
			
		}
		else{
			c.pop_back();
		} 
	}
	cout << (c.size() / 2 + ngoactruoc );
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


