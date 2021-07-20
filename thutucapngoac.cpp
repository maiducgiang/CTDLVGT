#include<bits/stdc++.h>
#include<stack>
using namespace std;
void solve(){
	string s, s1 = "";
	getline(cin,s);
	int dem=1;
	stack<int> a;
	for(int i=0;i<s.length();i++){
		if(s[i]=='('){
			a.push(dem);
			cout<<dem<<" ";
			dem++;
		}
		if(s[i]==')'){
			cout<<a.top()<<" ";
			a.pop();
		}
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	scanf("\n");
	while(t--){
		solve();
		cout<<endl;
	}
}


