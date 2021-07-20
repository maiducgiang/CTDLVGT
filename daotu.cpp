#include<bits/stdc++.h>
#include<stack>
using namespace std;
void solve(){
	string s, s1;
	stack <string> s2;
	scanf("\n");
	getline(cin, s);
	stringstream ss(s);
	while(ss >> s1){
		s2.push(s1);
	}
	while(!s2.empty()){
		cout << s2.top() <<" ";
		s2.pop();
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


