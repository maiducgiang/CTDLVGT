#include<bits/stdc++.h>
using namespace std;
string s;
int kiemtra[11] = {0};
void test(int n){
	if(n <= s.length()){
		for(int i = 0; i < s.length(); i++) if(kiemtra[i] == 0) 
		{
			cout<<s[i];
			kiemtra[i] = 1;
			test(n + 1);	
		}
	}
	else cout<<" ";
}
void solve(){
	cin>>s;
	test(1);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


