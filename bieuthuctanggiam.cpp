#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	cin >> s;
	vector <int>  a(s.length() + 1,0);
	a[0] = 1;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == 'I') a[i + 1] = a[i] + 1;
		else {
			if(a[i] == 1){
				a[i+1] = 1;
				for(int j = 0; j <= i; j++) a[j] += 1; 
			}
			else a[i + 1] = a[i] - 1;
		}
	}
	for(int i = 0; i <= s.length(); i++ ) cout <<a[i];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


