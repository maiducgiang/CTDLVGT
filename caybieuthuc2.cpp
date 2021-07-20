#include<bits/stdc++.h>
using namespace std;
void solve(){
	stack <long long> a;
	int n, j = 1;
	cin >> n;
	scanf("\n");
	string s1[n + 1], s;
	for(int i = 1; i <= n; i++) cin >> s1[i];
	for(int i = n; i >= 1; i--){
		s = s1[i];
		if(s == "+" || s == "-" ||s == "*" ||s == "/"){
			long long x = a.top(); a.pop();
			long long y = a.top(); a.pop();
			if(s == "+") x += y;
			if(s == "-") x -= y;
			if(s == "*") x *= y;
			if(s == "/") x /= y;
			a.push(x);
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



