#include<bits/stdc++.h>
#include<string>
using namespace std;
void solve(){
	string s;
	cin >> s;
	int code = 1, i = 0, j = s.length() - 1;
	if(s.length() == 1) 
	{
		if(s == "2" || s == "3" ||s == "5" || s  == "7") code = 1;
		else
		code = 0;
	}
	else
	for(int i = 0; i <= (s.length()/2) - 1; i++ ){
		j = s.length() - 1 - i;
		if(s[i] == s[j] && (s[i] == '2' || s[i] == '3' ||s[i] == '5' || s[i] == '7'));
		else
		{
			code = 0;
			break;
		}
	}
	if(code == 0) cout <<"NO";
	else cout <<"YES";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}



