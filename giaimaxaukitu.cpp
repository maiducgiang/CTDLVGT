#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	scanf("\n");
	getline(cin, s);
	stack <char> c;
	for(int i = s.length() - 1; i >= 0; i--)
	if(s[i] == '['){
		int dem = 0, check = 1;
		while(s[i - 1] <= '9' && s[i - 1] >= '0') {
			dem = dem + (s[i - 1] - '0') * check;
			check *= 10;
			i--;
		}
		if(dem == 0) dem = 1;
		string x = "", y = "";
		while(c.top() != ']'){
			x = x + c.top();
			c.pop();
		}
		c.pop();
		while(dem--)y += x;
		for(int j = y.length() - 1; j >= 0; j--) c.push(y[j]);
		
	}
	else c.push(s[i]);
	while(!c.empty()){
		cout << c.top();
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


