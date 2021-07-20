#include<bits/stdc++.h>
#include<queue>
using namespace std;
void solve(){
	int n;
	cin >> n;
	queue <string> s;
	s.push("HA");
	while(1){
		string x = s.front(); s.pop();
		if(x.length() > n) break;
		if(x.length() == n && x[x.length()-1] == 'A') cout << x << endl;
		if(x[x.length() - 1] == 'H') s.push(x + 'A');
		else{
			s.push(x + 'A');
			s.push(x + 'H');
		}
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


