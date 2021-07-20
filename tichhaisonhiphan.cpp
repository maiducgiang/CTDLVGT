#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s1, s2;
	cin >> s1 >> s2;
	while(s1.length() != s2.length()) if(s1.length() > s2.length()) s2 = '0' + s2; else s1 = '0' + s1;
	long long x1 = 0, x2 = 0, check = 1;
	for(int i = s1.length()-1; i >= 0; i--){
		x1 += (s1[i] - '0') * check;
		x2 += (s2[i] - '0') * check;
		check *= 2; 
	}
	cout << x1 * x2;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


