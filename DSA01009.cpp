#include<bits/stdc++.h>
using namespace std;
int n, k;
vector <string> s;
vector <int> c;
void quaylui(int t){
	if(t == n){
		int code = c[0], max = 0;
		
		for(int i = 1; i < c.size(); i++){
			if(c[i] == 1){
				code += 1;
				max = (max > code)? max : code;
			}
			else{
				max = (max > code)? max : code;
				code = 0;
			}
		}
		//cout<<max<<endl;
		if(max == k){
			string ss = "";
			for(int i = 0; i < c.size(); i++) if(c[i] == 1) ss = ss + 'A'; else ss = ss + 'B';
			s.push_back(ss);
		}
		return;
	}
	else{
		for(int i = 0; i <= 1; i++){
			c.push_back(i);
			quaylui(t + 1);
			c.pop_back();
		}
	}
}
void solve(){
	cin>>n>>k;
	quaylui(0);
	cout<<s.size()<<endl;
	for(int i = s.size() - 1; i >= 0; i--) cout<<s[i]<<endl;
}
int main(){
	int t;
	t = 1;
	while(t--){
		solve();
		cout<<endl;
	}
}


