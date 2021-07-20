#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	scanf("\n");
	getline(cin ,s);
	vector <int> a;
	for(int i = 0; i < s.length(); i++)
	if(s[i] <= '9' && s[i] >= '0') a.push_back(s[i] - '0');
	else{
		int x = a[a.size() - 1]; a.pop_back();
		int y = a[a.size() - 1]; a.pop_back();
		if(s[i] == '+') a.push_back(y + x);
		if(s[i] == '-') a.push_back(y - x);
		if(s[i] == '*') a.push_back(y * x);
		if(s[i] == '/') a.push_back(y / x);
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


