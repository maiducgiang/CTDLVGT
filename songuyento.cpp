#include<bits/stdc++.h>
using namespace std;
vector <int> nt;
int check(int n){
	for(int i = 2; i*i <= n; i++) if(n % i==0) return 0;
	return 1;
}
void nguyento(){
	for(int i = 2; i <= 200; i++){
		if(check(i)) nt.push_back(i);
	}
}
int n, p, s;
vector <int> b;
vector <string> ss;
void quaylui(int k, int m, int sum){
	if(k > n ){
		if(sum == s){
			string sss = "";
			for(int i = 0; i < b.size(); i++) sss += to_string(b[i]) + " ";
			ss.push_back(sss);
		}
		return;
	}
	else{
		for(int i = m; i < nt.size() + b.size() - k; i++)
		if(nt[i] + sum <= s){
			b.push_back(nt[i]);
			quaylui(k + 1, i + 1, nt[i] + sum);
			b.pop_back();
		}
	}
}
void solve(){
	ss.clear();
	cin >> n >> p >> s;
	int i = 0;
	while(nt[i] != p && i < nt.size()) i++;
	quaylui(1, i + 1, 0);
	cout << ss.size() <<endl;
	for(int i = 0; i < ss.size(); i++) cout << ss[i]<<endl;
}
int main(){
	int t;
	nguyento();
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


