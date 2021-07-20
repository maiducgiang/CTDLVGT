#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int a[11], n, m, dem = 0, p = 0;
vector <int> vitri(11, 0);
vector <int> num;
void quaylui(int s, int t){
	if(s == m){
		p += 1;
		//cout<<"[";
		sort(num.begin(), num.end());
		for(int i = 0; i < num.size() - 1; i++)cout<<num[i]<<" ";
		cout<<num[num.size() - 1]<<endl;;
		dem+=1;
		return;
	}
	for(int i = n; i >= t; i--)
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
	p = 0;
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1, a + n + 1);
	vitri.clear();
	quaylui(0, 1);
	if(dem == 0) cout<<"-1";
	cout<<p;
}
int main(){
	int t;
	t = 1;
	while(t--){
		solve();
		cout << "\n";
	}
}
