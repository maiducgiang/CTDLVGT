#include<bits/stdc++.h>
using namespace std;
void solve(){
	long long n;
	string x, y, s;
	cin >> n >> x >> y;
	while(x.length() != y.length()) if(x.length() > y.length()) y = '0' + y; else x = '0' + x;	
	y = '0' + y;
	x = '0' + x;
	int dem = 0;
	for(int i = x.length() - 1; i >= 0; i--){
		dem = x[i] + y[i] - '0' - '0' + dem;
		s = char(dem % n + '0') + s;
		dem = dem / n;
	}
	if(s[0] == '0') s.erase(0, 1);
	if(dem != 0) s = char(dem % n + '0') + s;
	cout << s;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


