#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve(){
	int n, dem;
	cin >> n;
	int vitri[100001] = {};
	vector <int> a;
	for(int i = 1; i <= n; i++){
		cin>>dem;
		vitri[dem] += 1;
		if(vitri[dem] == 1) a.push_back(dem);
	}
	for(int i = 0; i < a.size() - 1; i++)
		for(int j = i + 1; j < a.size(); j++)
		if(vitri[a[i]] < vitri[a[j]] || (vitri[a[i]] == vitri[a[j]] && a[i] > a[j])) swap(a[i], a[j]);
	for(int i = 0; i < a.size(); i++)
		for(int j = 1; j <= vitri[a[i]]; j++)cout<<a[i]<<" ";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
