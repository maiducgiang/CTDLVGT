#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	cin>>s;
	int max = 1;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == s[i+1]){
			int dem = 1;
			while(s[i - dem] == s[i + 1 + dem] && i - dem >= 0 && i + 1 + dem < s.length()) dem++;
			dem--;
			if(max < dem * 2 + 2) max = dem * 2 + 2;
		}
		if(s[i] == s[i+2]){
			int dem = 1;
			while(s[i - dem] == s[i + 2 + dem] && i - dem >= 0 && i + 2 + dem < s.length()) dem++;
			dem--;
			if(max < dem * 2 + 3) max = dem * 2 + 3;
		}
	}
	cout<<max;
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


