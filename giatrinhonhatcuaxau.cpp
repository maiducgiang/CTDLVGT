#include<bits/stdc++.h>
using namespace std;
void solve(){
	priority_queue <long long> check;
	long long n, sum = 0;
	string s;
	cin >> n >> s;
	int a[256] = {};
	for(int i = 0; i < s.length(); i++) a[s[i]] += 1;
	for(int i = 'A'; i <= 'Z'; i++) if(a[i] != 0)  check.push(a[i]);
	while(n--){
		int code = check.top(); check.pop();
		check.push(code - 1);
	}
	while(!check.empty()){
		long long code = check.top(); check.pop();
		sum += code * code;
	}
	cout << sum;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


