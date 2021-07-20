#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	cin >> s;
	int code = 1, i = 0, j = s.length() - 1;
	while(i <= j && i < s.length() && j >= 0){
		if(s[i] == s[j] && (s[i] == '2' || s[i] == '3' || s[i] == '5' || s[i] == '7') );
		else{
			code = 0;
			break;
		}
		i++;
		j--;
	}
	if(code == 0) cout <<"NO";
	else cout << "YES";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}



