#include<bits/stdc++.h>
using namespace std;
void solve(){
	long long n, k, dem = 0;
	string s ="";
	cin >> n >> k;
	if(n > k * 9) {
		cout << -1;
		return;
	}
	
	for(int i = 9; i >= 1; i--){
		while(dem <= k && n > 0 && n >= i){
			n -= i;
			s = (char) (i + '0') + s;
			dem++;
		}
	}
	while(s.length() != k) s = '0' + s;
	if(n > 0) cout << -1;
	else
	if(s[0] != '0') cout << s;
	else
	if(s[0] == '0') {
		cout<<'1';
		int first = 0;
		for(int i = 1; i < s.length(); i++)
		if(s[i] != '0' && first == 0){
			first = 1;
			cout << (char)(s[i] - 1);
		}
		else cout<<s[i];
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


