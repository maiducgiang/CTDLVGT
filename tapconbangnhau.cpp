#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int a[101], n, m, dem = 0;
vector <int> vitri(101, 0);
vector <int> num;
void quaylui(int s, int t){
	if(dem >= 1) return;
	if(s == m){
		dem+=1;
		return;
	}
	for(int i = t; i <= n; i++)
		if(vitri[i] == 0 && s + a[i] <= m){
			vitri[i] = 1;
			num.push_back(a[i]);
			quaylui(s + a[i], i + 1);
			vitri[i] = 0;
			num.pop_back();
		}
}
void solve(){
	dem = 0;
	m = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		m += a[i];
	} 
	vitri.clear();
	if(m % 2 == 0){
		m /= 2;
		quaylui(0, 1);
	}
	if(dem == 0) cout<<"NO";
	else cout<<"YES";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << "\n";
	}
}
