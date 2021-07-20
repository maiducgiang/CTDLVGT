#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	cin >> s;
	int n = 0, a[s.length() + 1], m = 1;
	for(int i = 0; i < s.length(); i++){
		int j = 0;
		while(i - j >= 0 && i + j < s.length() && s[i-j] == s[i+j])j++;
		a[i] = 1 + (j-1) * 2;
		m = max(m, a[i]);
		j = 0;
		while(i - j >= 0 && i + 1 + j < s.length() && s[i - j] == s[i + j + 1])j++;
		a[i] = max(a[i], 2 + (j-1) * 2);
		m = max(m, a[i]);
	}
	cout << m;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


