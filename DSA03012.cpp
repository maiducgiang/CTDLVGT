#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;
void solve(){
	string s, s1 = "";
	cin>>s;
	int code = 1;
	vector <char> c;
	vector <int> a;
	for(int i = 0; i < s.length(); i++)
		{
			int code = 0;
			if(c.size() == 0){
				c.push_back(s[i]);
				a.push_back(1);
			}
			else{
				for(int j = 0; j < c.size(); j++)
				if(c[j] == s[i]){
					code = 1;
					a[j] += 1;
					break;
				}
				if(code == 0){
					c.push_back(s[i]);
					a.push_back(1);
				}
			}	
		}
	sort(a.begin(), a.end());
	cout<<a[a.size() - 1]<<endl;
	if(s.length() < a[a.size() - 1] * 2) cout<<-1;
	else{
		int x = s.length()/a[a.size() - 1], n = s.length();
		vector <int> b(n + 1, 0);
		for(int i = 1; i <= x * a[a.size() - 1]; i++) if(i % x == 1) b[i] = 1;
		for(int i = 1; i <= n; i++) cout<<b[i]<<" "; cout<<endl;
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


