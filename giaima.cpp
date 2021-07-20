#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	cin >> s;
	if(s[0] == '0') {
		cout << 0;
		return;
	}
	int a[100] = {0};
	a[0] = 1;
	for(int i = 1; i < s.length(); i++){
		if(s[i] > '0' )a[i] = a[i - 1];
		if(i == 1 && (s[i - 1] == '1' || (s[i - 1] == '2' && s[i] < '7')))a[i] += 1;
		if(i > 1 && (s[i - 1] == '1' || (s[i - 1] == '2' && s[i] < '7'))) a[i] += a[i - 2];
		
	}
	cout << a[s.length() - 1];
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


