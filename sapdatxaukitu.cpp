#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve(){
	string s;
	cin>>s;
	int a[258] = {}, max = 0,  kitu = 0;
	for(int i = 0; i < s.length(); i++) a[s[i]] += 1;	
	sort(a, a + 256);
	if((s.length()+1)/a[255] >= 2) cout<<1;
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
