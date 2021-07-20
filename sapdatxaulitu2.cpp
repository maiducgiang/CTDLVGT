#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve(){
	int n;
	cin >> n;
	string s;
	cin>>s;
	int a[258] = {}, max = 0,  kitu = 0;
	for(int i = 0; i < s.length(); i++) a[s[i]] += 1;	
	sort(a, a + 256);
	if((a[255]-1) * n + 1 <= s.length() ){
		cout<<1;
	}
	else cout<<-1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
