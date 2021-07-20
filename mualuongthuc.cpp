#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, s, m;
	cin>>n>>s>>m;

	if(n * 6 < m * 7) cout<<-1;
	else {
		int sum = m * s;
		int code = (sum % n == 0) ? 0 : 1;
		code += sum / n;
		//cout<<sum<<endl;
		cout<<code;
	}
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
