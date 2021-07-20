#include<bits/stdc++.h>
using namespace std;
void solve(){
	stack <long long> a;
	int n;
	cin >> n;
	scanf("\n");
	string s, s1[n];
	for(int i = 1; i <= n; i++) cin >> s1[i];
	for(int i = n; i >= 1; i--){
		s = s1[i];
		cout << s<<endl;
		if(s == "+" || s == "-" ||s == "*" ||s == "/"){
			long long x = a.top(); a.pop();
			long long y = a.top(); a.pop();
			cout << x <<" "<< y<<endl;
			if(s == "+") x += y;
			if(s == "-") x -= y;
			if(s == "*") x *= y;
			if(s == "/") x /= y;
			
		}
		else {
			long long x;
			stringstream check(s);
			check >> x;
			a.push(x);
		}
	}
	cout << a.top();
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}



