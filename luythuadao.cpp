#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
long long quaylui(long long n, long long k){
	if(k == 0) return 1;
	else if(k == 1) return n % 1000000007;
	else{
		long long code = quaylui(n, k/2) % 1000000007;
		if(k % 2 == 0) return code * code % 1000000007;
		else return (code * code %1000000007) * n % 1000000007;
	}
}
void solve(){
	string s;
	cin>>s;
	long long n = 0, r = 0;
	for(int i = 0; i < s.length(); i++){
		n = n * 10 + (s[i] - '0');
		r = r * 10 + (s[s.length() - 1 - i] - '0');
	}
	long long sum = quaylui(n, r);
	cout<<sum;
	
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
