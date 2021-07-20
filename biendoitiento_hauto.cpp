#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	scanf("\n");
	getline(cin, s);
	vector <string> a;
	for(int i = s.length() - 1; i >= 0; i--)
	if(s[i]!='+'&& s[i] != '-' && s[i] != '*' && s[i] != '/') a.push_back(string(1, s[i]));
	else{
		string x = a[a.size() - 1]; a.pop_back();
		string y = a[a.size() - 1]; a.pop_back();
		string z =  x + y + s[i] ;
		a.push_back(z);
	}
	cout << a[a.size() - 1];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


